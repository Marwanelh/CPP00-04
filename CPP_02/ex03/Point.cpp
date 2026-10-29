/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mael-hou <mael-hou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 20:20:48 by mael-hou          #+#    #+#             */
/*   Updated: 2026/08/25 20:24:40 by mael-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : _x(0), _y(0) {
}

Point::Point(const float x, const float y) : _x(x), _y(y) {
}

Point::Point(const Point &copy) : _x(copy._x), _y(copy._y) {
}

Point& Point::operator=(const Point &copy) {
    if (this == &copy)
        return (*this);
    return (*this);
}

Point::~Point(void) {
}

const Fixed& Point::getX(void) const {
    return (this->_x);
}

const Fixed& Point::getY(void) const {
    return (this->_y);
}