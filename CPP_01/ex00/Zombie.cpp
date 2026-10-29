/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mael-hou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 21:04:43 by mael-hou          #+#    #+#             */
/*   Updated: 2026/10/29 21:04:44 by mael-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Initialize zombie name using initialization list
Zombie::Zombie(std::string name) : name(name)
{
}

// Destructor called when object is deleted or goes out of scope
Zombie::~Zombie(void)
{
    std::cout << this->name << ": destroyed" << std::endl;
}

// Announce function prints zombie message as specified by subject
void Zombie::announce(void)
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}