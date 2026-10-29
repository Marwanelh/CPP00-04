/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mael-hou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 18:53:32 by mael-hou          #+#    #+#             */
/*   Updated: 2026/10/28 18:53:34 by mael-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

static const std::string className = "Dog";

Dog::Dog(void) : Animal() {
    std::cout << className << " Default constructor called" << std::endl;
    this->setType(className);
}

Dog::Dog(const Dog &copy) : Animal(copy) {
    std::cout << className << " Copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog &copy) {
    std::cout << className << " Copy assignment operator called" << std::endl;
    Animal::operator=(copy);
    return (*this);
}

Dog::~Dog(void) {
    std::cout << className << " Destructor called" << std::endl;
}

void Dog::makeSound(void) const {
    std::cout << this->getType() << " makes - Guff Guff Guff" << std::endl;
}
