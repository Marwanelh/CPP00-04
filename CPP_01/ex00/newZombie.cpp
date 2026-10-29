/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mael-hou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 21:04:38 by mael-hou          #+#    #+#             */
/*   Updated: 2026/10/29 21:04:40 by mael-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Heap Allocation: We use 'new' so the Zombie stays in memory 
// even after this function ends. Must be freed manually with 'delete'.
Zombie* newZombie(std::string name)
{
    Zombie* zombie = new Zombie(name);
    return zombie;
}