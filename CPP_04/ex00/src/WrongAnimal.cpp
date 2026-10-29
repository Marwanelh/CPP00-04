/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mael-hou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 18:53:40 by mael-hou          #+#    #+#             */
/*   Updated: 2026/10/28 18:53:42 by mael-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

static const std::string className = "WrongAnimal";

WrongAnimal::WrongAnimal(void) {
    this->setType(className);
    std::cout << className << " Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy) : type(copy.getType()) {
    std::cout << className << " Copy constructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &copy) {
    std::cout << className << " Copy assignment operator called" << std::endl;
    if (this == &copy) return (*this);
    this->setType(copy.getType());
    return (*this);
}

WrongAnimal::~WrongAnimal(void) {
    std::cout << className << " Destructor called" << std::endl;
}

void WrongAnimal::makeSound(void) const {
    std::cout << "F*** off. I'm " << className << std::endl;
}

std::string WrongAnimal::getType(void) const { return (this->type); }

void WrongAnimal::setType(const std::string &_type) { this->type = _type; }