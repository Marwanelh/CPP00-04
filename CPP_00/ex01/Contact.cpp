/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mael-hou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 21:27:15 by mael-hou          #+#    #+#             */
/*   Updated: 2026/07/29 21:27:16 by mael-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
    std::cout << "Instantiated an instance of Contact class" << std::endl;
    return ;
}

Contact::~Contact(void)
{
    std::cout << "Destructor called" << std::endl;
    return ;
}

Contact::Contact(std::string first_name, std::string last_name, std::string nickname, \
    std::string phone_number, std::string darkest_secret)
{

    Contact::First_Name = first_name;
    Contact::Last_Name = last_name;
    Contact::Nickname = nickname;
    Contact::Phone_Number = phone_number;
    Contact::Darkest_Secret = darkest_secret;
}

std::string Contact::getFirst_Name() const {
    return (First_Name);
}

std::string Contact::getLast_Name() const {
    return (Last_Name);
}

std::string Contact::getNickname() const {
    return (Nickname);
}

std::string Contact::getPhone_Number() const {
    return (Phone_Number);
}

std::string Contact::getDarkest_Secret() const {
    return (Darkest_Secret);
}