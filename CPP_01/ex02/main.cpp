/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mael-hou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 21:04:58 by mael-hou          #+#    #+#             */
/*   Updated: 2026/10/29 21:05:00 by mael-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
    // The underlying string variable
    std::string str = "HI THIS IS BRAIN";

    // stringPTR: a pointer pointing to the address of str
    std::string* stringPTR = &str;

    // stringREF: a reference (alias) bound directly to str
    std::string& stringREF = str;

    // Printing memory addresses
    std::cout << "--- Memory Addresses ---" << std::endl;
    std::cout << "Address of string variable: " << &str << std::endl;
    std::cout << "Address held by stringPTR:  " << stringPTR << std::endl;
    std::cout << "Address held by stringREF:  " << &stringREF << std::endl;

    std::cout << std::endl;

    // Printing values
    std::cout << "--- Values ---" << std::endl;
    std::cout << "Value of string variable:  " << str << std::endl;
    std::cout << "Value pointed to by PTR:   " << *stringPTR << std::endl;
    std::cout << "Value pointed to by REF:   " << stringREF << std::endl;

    return 0;
}