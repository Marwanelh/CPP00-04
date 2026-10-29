/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mael-hou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 21:27:22 by mael-hou          #+#    #+#             */
/*   Updated: 2026/07/29 21:27:23 by mael-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
    PhoneBook   Phonebook;
    std::string input;

    while (1)
    {
        std::cout << "Enter a command: ";
        if (!std::getline(std::cin, input))
            break ;
        if (input == "EXIT")
            break ;
        else if (input == "ADD")
            Phonebook.add_contact();
        else if (input == "SEARCH")
            Phonebook.search_contact();
        else if (!input.empty())
            std::cout << "There is no such command to execute. " << std::endl;
    }
    return (0);
}