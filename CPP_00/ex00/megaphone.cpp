/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mael-hou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 22:45:52 by mael-hou          #+#    #+#             */
/*   Updated: 2026/07/19 22:45:55 by mael-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <string>

int main(int argc, char **argv)
{
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    for (int i = 1; i < argc; i++)
    {
        std::string s(argv[i]);
        for (unsigned long j = 0; j < s.length(); j++)
        {
            std::cout << (char)std::toupper(argv[i][j]);
        }
    }
    std::cout << std::endl;
    return (0);
}