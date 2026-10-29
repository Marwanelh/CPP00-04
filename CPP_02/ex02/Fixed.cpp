/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mael-hou <mael-hou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 20:20:03 by mael-hou          #+#    #+#             */
/*   Updated: 2026/08/25 20:25:19 by mael-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_fractional_bits = 8;

Fixed::Fixed(void) {
    this->_fp_value = 0;
}

Fixed::Fixed(const int n) {
    this->_fp_value = n << this->_fractional_bits;
}

Fixed::Fixed(const float f) {
    this->_fp_value = static_cast<int>(std::roundf(f
        * (1 << this->_fractional_bits)));
}

Fixed::Fixed(const Fixed &copy) : _fp_value(copy._fp_value) {
}

Fixed &Fixed::operator=(const Fixed &copy) {
    this->_fp_value = copy._fp_value;
    return (*this);
}

Fixed::~Fixed(void) {
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

Fixed Fixed::operator+(const Fixed &other) const {
    Fixed result;

    result.setRawBits(this->_fp_value + other._fp_value);
    return (result);
}

Fixed Fixed::operator-(const Fixed &other) const {
    Fixed result;

    result.setRawBits(this->_fp_value - other._fp_value);
    return (result);
}

Fixed Fixed::operator*(const Fixed &other) const {
    Fixed result;

    result.setRawBits(static_cast<int>(static_cast<double>(this->_fp_value)
        * other._fp_value / (1 << this->_fractional_bits)));
    return (result);
}

Fixed Fixed::operator/(const Fixed &other) const {
    if (other._fp_value == 0)
        throw std::runtime_error("division by zero");
    Fixed result;

    result.setRawBits(static_cast<int>(static_cast<double>(this->_fp_value)
        * (1 << this->_fractional_bits) / other._fp_value));
    return (result);
}

bool Fixed::operator<(const Fixed &other) const {
    return (this->_fp_value < other._fp_value);
}

bool Fixed::operator<=(const Fixed &other) const {
    return (this->_fp_value <= other._fp_value);
}

bool Fixed::operator>(const Fixed &other) const {
    return (this->_fp_value > other._fp_value);
}

bool Fixed::operator>=(const Fixed &other) const {
    return (this->_fp_value >= other._fp_value);
}

bool Fixed::operator==(const Fixed &other) const {
    return (this->_fp_value == other._fp_value);
}

bool Fixed::operator!=(const Fixed &other) const {
    return (this->_fp_value != other._fp_value);
}

Fixed &Fixed::operator++(void) {
    ++_fp_value;
    return (*this);
}

Fixed &Fixed::operator--(void) {
    --_fp_value;
    return (*this);
}
Fixed Fixed::operator++(int) {
    Fixed temp = *this;
    _fp_value++;
    return (temp);
}

Fixed Fixed::operator--(int) {
    Fixed temp = *this;
    _fp_value--;
    return (temp);
}

Fixed& Fixed::max(Fixed &other, Fixed &another) {
    if (other.getRawBits() >= another.getRawBits())
        return (other);
    else
        return (another);
}

const Fixed& Fixed::max(const Fixed &other, const Fixed &another) {
    if (other.getRawBits() >= another.getRawBits())
        return (other);
    else
        return (another);
}

Fixed& Fixed::min(Fixed &other, Fixed &another) {
    if (other.getRawBits() <= another.getRawBits())
        return (other);
    else
        return (another);
}

const Fixed& Fixed::min(const Fixed &other, const Fixed &another) {
    if (other.getRawBits() <= another.getRawBits())
        return (other);
    else
        return (another);
}
