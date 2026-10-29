/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mael-hou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 18:53:28 by mael-hou          #+#    #+#             */
/*   Updated: 2026/10/28 18:53:30 by mael-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

static const std::string className = "Cat";

Cat::Cat(void) : Animal() {
    std::cout << className << " Default constructor called" << std::endl;
    this->setType(className);
}

Cat::Cat(const Cat &copy) : Animal(copy) {
    std::cout << className << " Copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat &copy) {
    std::cout << className << " Copy assignment operator called" << std::endl;
    Animal::operator=(copy);
    return (*this);
}

Cat::~Cat(void) {
    std::cout << className << " Destructor called" << std::endl;
}

void Cat::makeSound(void) const {
    std::cout << this->getType() << " makes - Meow Meow Meow" << std::endl;
}
