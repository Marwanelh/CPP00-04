/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mael-hou <mael-hou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 20:20:55 by mael-hou          #+#    #+#             */
/*   Updated: 2026/08/25 20:22:49 by mael-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point {
    private:
        const Fixed _x;
        const Fixed _y;

    public:
        Point(void);
        Point(const float x, const float y);
        Point(const Point &copy);
        Point &operator=(const Point &copy);
        ~Point(void);

        const Fixed &getX(void) const;
        const Fixed &getY(void) const;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif
