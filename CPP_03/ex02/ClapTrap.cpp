/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mael-hou <mael-hou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 17:22:50 by mael-hou          #+#    #+#             */
/*   Updated: 2026/09/17 17:24:34 by mael-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
// Initializer lists initialize members before constructor bodies run.

ClapTrap::ClapTrap(void) : _name("Demon"), _hit(10), _energy(10), _damage(0) {
    std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string name) : _name(name), _hit(10), _energy(10), _damage(0) {
    std::cout << "ClapTrap " << name << " object initialised" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy) : _name(copy._name), _hit(copy._hit), _energy(copy._energy), _damage(copy._damage) {
    std::cout << "ClapTrap copy constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &copy) {
    // Replace existing state; returning *this permits chained assignment.
    std::cout << "ClapTrap copy assignment operator called" << std::endl;
    this->_name = copy._name;
    this->_hit = copy._hit;
    this->_energy = copy._energy;
    this->_damage = copy._damage;
    return (*this);
}

ClapTrap::~ClapTrap(void) {
    std::cout << "ClapTrap default destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target) {
    // target is only a name: damage must be applied separately by the caller.
    // TODO evaluation: printing "dead" must also stop this action with return.
    if (this->_hit <= 0)
        std::cout << this->_name << " is dead." << std::endl;
    std::cout << this->_name << " took a stick in his arms. ";
    if (this->_energy > 0)
    {
        this->_energy--;
        std::cout << "ClapTrap " << this->_name << " punches "
        << target << ", causing " << this->_damage << " points of damage!" << std::endl;
        std::cout << "Remaining energy: " << this->_energy << std::endl;
    }
    else
        std::cout << this->_name << " is too weak, to strike." << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
    // Clamp HP to zero: excessive unsigned subtraction would wrap around.
    if (this->_hit > amount)
    {
        this->_hit -= amount;
        std::cout << this->_name << " took damage in total of " << amount << " points!" << std::endl;
        std::cout << "Remaining HP: " << this->_hit << std::endl;
    }
    else
    {
        this->_hit = 0;
        std::cout << this->_name << " took damage in total of " << amount << " points!" << std::endl;
        std::cout << this->_name << " died from the attack." << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount) {
    // A successful repair costs one energy, even for amount zero.
    // TODO evaluation: zero HP must block repair as well as zero energy.
    if (this->_energy > 0)
    {
        this->_hit += amount;
        this->_energy--;
        std::cout << this->_name << " got repaired by " << amount
        << ", his updated HP: " << this->_hit << " & EG: " << this->_energy << std::endl; 
    }
    else
        std::cout << this->_name << " is too weak, to repair himself." << std::endl;
}
