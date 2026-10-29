/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mael-hou <mael-hou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 17:23:01 by mael-hou          #+#    #+#             */
/*   Updated: 2026/09/17 17:24:34 by mael-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// Base first, then 100/100/30 stats; attack remains ClapTrap's implementation.
FragTrap::FragTrap(void) : ClapTrap() {
    this->_hit = 100;
    this->_energy = 100;
    this->_damage = 30;
    std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
    this->_hit = 100;
    this->_energy = 100;
    this->_damage = 30;
    std::cout << "FragTrap " << name << " object initialised" << std::endl;
}

// Copy the current name, HP, energy and damage through the base constructor.
FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy) {
    std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap &copy) {
    std::cout << "FragTrap copy assignment operator called" << std::endl;
    ClapTrap::operator=(copy);
    // No additional FragTrap data members need copying.
    return (*this);
}

// C++ automatically calls the base destructor after this body.
FragTrap::~FragTrap(void) {
    std::cout << "FragTrap default destructor called" << std::endl;
}

void FragTrap::HighFivesGuys(void) {
    std::cout << "I'm " << this->_name << ". Give me five!" << std::endl;
}

std::string FragTrap::getName(void) {
    return (this->_name);
}
