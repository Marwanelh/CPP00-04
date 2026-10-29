/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mael-hou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 18:53:24 by mael-hou          #+#    #+#             */
/*   Updated: 2026/10/28 18:53:26 by mael-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

static const std::string className = "Animal";

Animal::Animal(void) {
    this->setType(className);
    std::cout << className << " Default constructor called" << std::endl;
}

Animal::Animal(const Animal &copy) : type(copy.getType()) {
    std::cout << className << " Copy constructor called" << std::endl;
}

Animal& Animal::operator=(const Animal &copy) {
    std::cout << className << " Copy assignment operator called" << std::endl;
    if (this == &copy) return (*this);
    this->setType(copy.getType());
    return (*this);
}

Animal::~Animal(void) {
    std::cout << className << " Destructor called" << std::endl;
}

void Animal::makeSound(void) const {
    std::cout << "F*** off. I'm " << className << std::endl;
}

std::string Animal::getType(void) const { return (this->type); }

void Animal::setType(std::string const &_type) { this->type = _type; }
