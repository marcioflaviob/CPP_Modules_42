/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 00:03:19 by mbrandao          #+#    #+#             */
/*   Updated: 2024/03/20 21:09:46 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main (void) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	
	std::cout << Fixed::max( a, b ) << std::endl;

	if (a > b)
		std::cout << "a is bigger than b" << std::endl;
	if (a < b)
		std::cout << "b is bigger than a" << std::endl;

	if (a != b)
		std::cout << "a is different than b" << std::endl;

	Fixed c(a);

	if (c == a)
		std::cout << "c equals a" << std::endl;
	
	return 0;
}