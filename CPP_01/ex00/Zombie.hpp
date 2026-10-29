/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mael-hou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 21:04:45 by mael-hou          #+#    #+#             */
/*   Updated: 2026/10/29 21:04:46 by mael-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

// Zombie class representing a single zombie with a name
class Zombie
{
    private:
        std::string name; // Private attribute storing the zombie's name

    public:
        Zombie(std::string name); // Constructor: initializes zombie with a name
        ~Zombie(void);            // Destructor: prints message when zombie is destroyed

        void announce(void);      // Member function: zombie introduces itself
};

// Heap allocation helper: zombie survives after function finishes
Zombie* newZombie(std::string name);

// Stack allocation helper: zombie is destroyed automatically when function ends
void randomChump(std::string name);

#endif