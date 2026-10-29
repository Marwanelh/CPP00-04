/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mael-hou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 21:27:26 by mael-hou          #+#    #+#             */
/*   Updated: 2026/07/29 21:27:28 by mael-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
    count = 0;
    oldest = 0;
    std::cout << "PhoneBook instance created" << std::endl;
}

PhoneBook::~PhoneBook() {
    std::cout << "PhoneBook instance destructed" << std::endl;
}

int PhoneBook::getCount(void) {
    return (count);
}

static std::string PromptedInput(std::string prompt)
{
    std::string Input;

    while (Input.empty())
    {
        std::cout << prompt;
        if (!std::getline(std::cin, Input))
        {
            std::cout << "Reading failed." << std::endl;
            return ("");
        }
    }
    return (Input);
}

void PhoneBook::add_contact() {
    int index;
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;

    if ((first_name = PromptedInput("First_Name: ")).empty())
        return ;
    if ((last_name = PromptedInput("Last_Name: ")).empty())
        return ;
    if ((nickname = PromptedInput("Nickname: ")).empty())
        return ;
    if ((phone_number = PromptedInput("Phone_Number: ")).empty())
        return ;
    if ((darkest_secret = PromptedInput("Darkest_Secret: ")).empty())
        return ;
    if (count < 8)
        index = count;
    else
        index = oldest;
    contacts[index] = Contact(first_name, last_name, nickname, phone_number,
        darkest_secret);
    if (count < 8)
        count++;
    else
        oldest = (oldest + 1) % 8;
    std::cout << "Successfully added contact" << std::endl;
}

static void display_saved_list(std::string text, bool newline)
{
    if (text.length() > 10)
    {
        text.resize(9);
        text.append(".");
    }
    if (newline)
        std::cout << std::setw(10) << text << "|\n";
    else
        std::cout << std::setw(10) << text << '|';
}

void PhoneBook::search_contact() {

    int         Idx;
    std::string Input;
    std::cout << std::right;

    display_saved_list("index", false);
    display_saved_list("first name", false);
    display_saved_list("last name", false);
    display_saved_list("nickname", true);

    for (int i = 0; i < getCount(); i++)
    {
        std::cout << std::setw(10) << i << '|';
        display_saved_list(contacts[i].getFirst_Name(), false);
        display_saved_list(contacts[i].getLast_Name(), false);
        display_saved_list(contacts[i].getNickname(), true);
    }

    std::cout << std::left;
    std::cout << "Enter index of the entry to display: ";
    std::getline(std::cin, Input);
    
    if (Input.empty())
    {
        std::cout << "You hit Enter, invalid input." << std::endl;
        return ;
    }
    if (Input.length() != 1 || std::isalpha(Input[0]))
    {
        std::cout << "Invalid index(not number/neg/float)" << std::endl;
        return ;
    }
    Idx = Input[0] - '0';
    if (Idx < 0 || Idx >= getCount())
    {
        std::cout << "Invalid index(out of range)" << std::endl;
        return ;
    }
    else
    {
        std::cout << "First Name: " << contacts[Idx].getFirst_Name() << std::endl;
        std::cout << "Last Name: " << contacts[Idx].getLast_Name() << std::endl;
        std::cout << "Nickname: " << contacts[Idx].getNickname() << std::endl;
        std::cout << "Phone Number: " << contacts[Idx].getPhone_Number() << std::endl;
        std::cout << "Darkest Secret: " << contacts[Idx].getDarkest_Secret() << std::endl;
    }
}