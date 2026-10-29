/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mael-hou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 21:05:03 by mael-hou          #+#    #+#             */
/*   Updated: 2026/10/29 21:05:04 by mael-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

// HumanA: Always armed, receives Weapon by reference in constructor
class HumanA
{
    private:
        std::string name;
        Weapon&     weapon; // Reference: cannot be NULL, always refers to a valid Weapon

    public:
        HumanA(const std::string& name, Weapon& weapon);
        ~HumanA(void);

        void attack(void) const;
};

#endif