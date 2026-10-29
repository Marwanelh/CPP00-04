/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mael-hou <mael-hou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 20:20:18 by mael-hou          #+#    #+#             */
/*   Updated: 2026/08/25 20:22:49 by mael-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static Fixed cross(Point const p1, Point const p2, Point const p3)
{
    return ((p2.getX() - p1.getX()) * (p3.getY() - p1.getY())
        - (p2.getY() - p1.getY()) * (p3.getX() - p1.getX()));
}

bool bsp(Point const a, Point const b, Point const c, Point const point) {
    Fixed abc = cross(a, b, c);
    Fixed abp = cross(a, b, point);
    Fixed bcp = cross(b, c, point);
    Fixed cap = cross(c, a, point);

    if (abc == 0 || abp == 0 || bcp == 0 || cap == 0)
        return (false);
    return ((abp > 0 && bcp > 0 && cap > 0)
        || (abp < 0 && bcp < 0 && cap < 0));
}
