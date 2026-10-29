/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mael-hou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 21:04:52 by mael-hou          #+#    #+#             */
/*   Updated: 2026/10/29 21:04:53 by mael-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

// Zombie class for allocating an array (horde) of zombies
class Zombie
{
    private:
        std::string name;

    public:
        Zombie(void);              // Default constructor needed for new Zombie[N]
        Zombie(std::string name);  // Parameterized constructor
        ~Zombie(void);             // Destructor prints when each zombie is deleted

        void announce(void);
        void setName(std::string name);
};

// Function allocates N zombies in a single array allocation
Zombie* zombieHorde(int N, std::string name);

#endif