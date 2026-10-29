/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mael-hou <mael-hou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 20:19:43 by mael-hou          #+#    #+#             */
/*   Updated: 2026/08/25 20:24:40 by mael-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_fractional_bits = 8;

Fixed::Fixed(void) {
    std::cout << "Default constructor called" << std::endl;
    this->_fp_value = 0;
}

Fixed::Fixed(const int n) {
    std::cout << "Int constructor called" << std::endl;
    this->_fp_value = n << this->_fractional_bits;
}

Fixed::Fixed(const float f) {
    std::cout << "Float constructor called" << std::endl;
    this->_fp_value = static_cast<int>(std::roundf(f
        * (1 << this->_fractional_bits)));
}

Fixed::Fixed(const Fixed &copy) : _fp_value(copy._fp_value) {
    std::cout << "Copy constructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &copy) {
    std::cout << "Copy assignment operator called" << std::endl;
    this->_fp_value = copy._fp_value;
    return (*this);
}

Fixed::~Fixed(void) {
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const {
    return (this->_fp_value);
}

void Fixed::setRawBits(int const raw) {
    this->_fp_value = raw;
}

float Fixed::toFloat(void) const {
    float output = static_cast<float>(this->_fp_value) / (1 << this->_fractional_bits);
    return (output);
}

int Fixed::toInt(void) const {
    int output = (this->_fp_value >> this->_fractional_bits);
    return (output);
}

std::ostream &operator<<(std::ostream &os, Fixed const &fix) {
    os << fix.toFloat();
    return (os);
}
