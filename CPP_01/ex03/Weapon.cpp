/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mael-hou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 21:05:11 by mael-hou          #+#    #+#             */
/*   Updated: 2026/10/29 21:05:12 by mael-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void) : type("")
{
}

Weapon::Weapon(const std::string& type) : type(type)
{
}

Weapon::~Weapon(void)
{
}

const std::string& Weapon::getType(void) const
{
    return this->type;
}

void Weapon::setType(const std::string& type)
{
    this->type = type;
}
