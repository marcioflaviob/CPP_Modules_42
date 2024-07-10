/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 22:07:29 by mbrandao          #+#    #+#             */
/*   Updated: 2024/07/10 22:27:25 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
# define POINT_H

#include <iostream>
#include "Fixed.hpp"

class Point {

private:

	Fixed const x;
	Fixed const y;

public:

	Point(void);
	Point(const float x, const float y);
	Point(const Point & src);
	~Point(void);

	Point & operator=(Point const & src);

	const Fixed & getX(void) const;
	const Fixed & getY(void) const;

};

std::ostream & operator<<(std::ostream & o, const Point & p);

bool bsp(const Point a, const Point b, const Point c, const Point point);

#endif