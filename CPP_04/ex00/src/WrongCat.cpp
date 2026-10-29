/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mael-hou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 18:53:44 by mael-hou          #+#    #+#             */
/*   Updated: 2026/10/28 18:53:47 by mael-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>

static const std::string className = "WrongCat";

WrongCat::WrongCat(void) : WrongAnimal() {
    std::cout << className << " Default constructor called" << std::endl;
    this->setType(className);
}

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal(copy) {
    std::cout << className << " Copy constructor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat &copy) {
    std::cout << className << " Copy assignment operator called" << std::endl;
    WrongAnimal::operator=(copy);
    return (*this);
}

WrongCat::~WrongCat(void) {
    std::cout << className << " Destructor called" << std::endl;
}

void WrongCat::makeSound(void) const {
    std::cout << this->getType() << " makes - Meow Meow Meow" << std::endl;
}