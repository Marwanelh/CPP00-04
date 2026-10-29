/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mael-hou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 21:05:07 by mael-hou          #+#    #+#             */
/*   Updated: 2026/10/29 21:05:08 by mael-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

// HumanB: May or may not have a weapon, stores a pointer to Weapon
class HumanB
{
    private:
        std::string name;
        Weapon*     weapon; // Pointer: can be NULL if unarmed, or assigned later

    public:
        HumanB(const std::string& name);
        ~HumanB(void);

        void setWeapon(Weapon& weapon);
        void attack(void) const;
};

#endif