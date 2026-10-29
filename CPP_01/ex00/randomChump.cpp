/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mael-hou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 21:04:41 by mael-hou          #+#    #+#             */
/*   Updated: 2026/10/29 21:04:42 by mael-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Stack Allocation: Zombie is created locally on the stack.
// It announces itself and is automatically destroyed when function exits.
void randomChump(std::string name)
{
    Zombie zombie(name);
    zombie.announce();
}