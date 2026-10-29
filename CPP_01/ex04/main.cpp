/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mael-hou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 21:05:15 by mael-hou          #+#    #+#             */
/*   Updated: 2026/10/29 21:05:17 by mael-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

// Sed is for losers: Program replaces occurrences of string s1 with s2 in a file.
// Forbidden: std::string::replace and C file manipulation (fopen, fread, etc.)
int main(int argc, char** argv)
{
    // 1. Check command line arguments count (must be filename, s1, s2)
    if (argc != 4)
    {
        std::cerr << "Usage: ./sed <filename> <s1> <s2>" << std::endl;
        return 1;
    }

    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    // 2. Validate that target string s1 is not empty
    if (s1.empty())
    {
        std::cerr << "Error: Target string (s1) cannot be empty." << std::endl;
        return 1;
    }

    // 3. Open input file stream
    std::ifstream input(filename.c_str());
    if (!input.is_open())
    {
        std::cerr << "Error: Could not open input file '" << filename << "'." << std::endl;
        return 1;
    }

    // 4. Read entire file content into string
    std::string content;
    std::string line;
    while (std::getline(input, line))
    {
        content += line;
        if (!input.eof())
            content += '\n'; // Preserve original line breaks
    }
    input.close();

    // 5. Replace occurrences of s1 with s2 using std::string::find and append
    std::string result;
    std::size_t pos = 0;

    while (true)
    {
        std::size_t found = content.find(s1, pos);
        if (found == std::string::npos)
        {
            // Append remaining characters from content
            result.append(content, pos, std::string::npos);
            break;
        }
        // Append text before s1
        result.append(content, pos, found - pos);
        // Append replacement s2
        result += s2;
        // Move position past the matched s1
        pos = found + s1.length();
    }

    // 6. Write result to <filename>.replace
    std::string outputFilename = filename + ".replace";
    std::ofstream output(outputFilename.c_str());
    if (!output.is_open())
    {
        std::cerr << "Error: Could not create output file '" << outputFilename << "'." << std::endl;
        return 1;
    }

    output << result;
    output.close();

    return 0;
}