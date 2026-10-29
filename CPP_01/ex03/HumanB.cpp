/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mael-hou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 21:05:05 by mael-hou          #+#    #+#             */
/*   Updated: 2026/10/29 21:05:06 by mael-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

// Constructor initializes pointer weapon to NULL
HumanB::HumanB(const std::string& name) : name(name), weapon(NULL)
{
}

HumanB::~HumanB(void)
{
}

// Stores the address of weapon passed by reference
void HumanB::setWeapon(Weapon& weapon)
{
    this->weapon = &weapon;
}

void HumanB::attack(void) const
{
    if (this->weapon)
    {
        std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
    }
    else
    {
        std::cout << this->name << " attacks with their bare hands" << std::endl;
    }
}