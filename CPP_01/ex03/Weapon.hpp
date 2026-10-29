/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mael-hou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 21:05:12 by mael-hou          #+#    #+#             */
/*   Updated: 2026/10/29 21:05:14 by mael-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

// Weapon class holding weapon type string
class Weapon
{
    private:
        std::string type;

    public:
        Weapon(void);
        Weapon(const std::string& type);
        ~Weapon(void);

        // Returns a const reference to type (avoids copying string)
        const std::string& getType(void) const;

        // Sets weapon type
        void setType(const std::string& type);
};

#endif
