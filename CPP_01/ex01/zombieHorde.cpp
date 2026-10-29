/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mael-hou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 21:04:54 by mael-hou          #+#    #+#             */
/*   Updated: 2026/10/29 21:04:56 by mael-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Allocates N Zombies in a single memory allocation block using new[].
// Initializes each zombie with the provided name and returns pointer to the first.
Zombie* zombieHorde(int N, std::string name)
{
    if (N <= 0)
        return NULL;

    // Single allocation for N zombies
    Zombie* horde = new Zombie[N];

    for (int i = 0; i < N; i++)
    {
        horde[i].setName(name);
    }

    return horde;
}