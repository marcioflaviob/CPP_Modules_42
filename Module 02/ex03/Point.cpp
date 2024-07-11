/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 22:22:14 by mbrandao          #+#    #+#             */
/*   Updated: 2024/07/11 14:29:50 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : x(0), y(0) {
	
}

Point::Point(const float x, const float y) : x(x), y(y) {
	
}

Point::Point(const Point & src) : x(src.x), y(src.y) {
	
}

Point::~Point(void) {
	
}

Point & Point::operator=(Point const & src) {
	if (this != &src) {
		const_cast<Fixed &>(this->x) = src.x;
		const_cast<Fixed &>(this->y) = src.y;
	}
	return (*this);
}

bool Point::operator==(const Point &rhs) const {
    return this->x == rhs.x && this->y == rhs.y;
}

const Fixed & Point::getX(void) const {
	return (this->x);
}

const Fixed & Point::getY(void) const {
	return (this->y);
}

std::ostream & operator<<(std::ostream & o, const Point & p) {
	o << "x: " << p.getX() << " and y: " << p.getY() << std::endl;
	return (o);
}
