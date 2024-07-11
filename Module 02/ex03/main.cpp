/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 22:31:21 by mbrandao          #+#    #+#             */
/*   Updated: 2024/07/11 16:00:48 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main(void) {
	Point a(2.38, 5.32);
	Point b(5.56, -1.62);
	Point c(-2.58, -2.78);
	// Point point(-2.58, -2.78);
	Point point(0.54, 2.85);
	// Point point(-0.56, 1.42);
	// Point point(-0.26, 0.48);
	// Point point(-1.16, -0.68);

	if (bsp(a, b, c, point))
		std::cout << "The point is inside the triangle" << std::endl;
	else
		std::cout << "The point is outside the triangle" << std::endl;
	return 0;
}
