/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mael-hou <mael-hou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 17:22:42 by mael-hou          #+#    #+#             */
/*   Updated: 2026/09/17 17:24:34 by mael-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// Base first, then ScavTrap stats: 100 HP, 50 energy, 20 damage.
ScavTrap::ScavTrap(void) : ClapTrap() {
    this->_hit = 100;
    this->_energy = 50;
    this->_damage = 20;
    std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    this->_hit = 100;
    this->_energy = 50;
    this->_damage = 20;
    std::cout << "ScavTrap " << name << " object initialised" << std::endl;
}

// Copy current base state, rather than resetting to default stats.
ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy) {
    std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &copy) {
    std::cout << "ScavTrap copy assignment operator called" << std::endl;
    ClapTrap::operator=(copy);
    // No additional ScavTrap data members need copying.
    return (*this);
}

// C++ automatically destroys the base after this destructor body.
ScavTrap::~ScavTrap(void) {
    std::cout << "ScavTrap default destructor called" << std::endl;
}

void ScavTrap::guardGate(void) {
    std::cout << "ScavTrap " << _name << " is now in Gate keeper mode" << std::endl;
}

void ScavTrap::attack(const std::string &target) {
    // TODO evaluation: dead ScavTraps must return before spending energy.
    if (this->_hit <= 0)
        std::cout << this->_name << " is dead." << std::endl;
    std::cout << this->_name << " took a stick in his arms. ";
    if (this->_energy > 0)
    {
        std::cout << "ScavTrap " << this->_name << " punches "
        << target << ", causing " << this->_damage << " points of damage!" << std::endl;
        this->_energy--;
    }
    else
        std::cout << this->_name << " is too weak, to strike." << std::endl;
}
