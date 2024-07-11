/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 22:30:00 by mbrandao          #+#    #+#             */
/*   Updated: 2024/07/11 14:27:49 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed crossProduct(const Point& p1, const Point& p2, const Point& p3) {
    return (p2.getX() - p1.getX()) * (p3.getY() - p1.getY()) - (p2.getY() - p1.getY()) * (p3.getX() - p1.getX());
}

bool bsp(const Point a, const Point b, const Point c, const Point point) {

    if (point == a || point == b || point == c)
        return false;

    Fixed d1 = crossProduct(point, a, b);
    Fixed d2 = crossProduct(point, b, c);
    Fixed d3 = crossProduct(point, c, a);

    // Check if point is inside the triangle
    bool hasNeg = (d1 < 0) || (d2 < 0) || (d3 < 0);
    bool hasPos = (d1 > 0) || (d2 > 0) || (d3 > 0);

    return !(hasNeg && hasPos);
}
