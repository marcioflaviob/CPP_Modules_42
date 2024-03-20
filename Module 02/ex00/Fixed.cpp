/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 00:03:02 by mbrandao          #+#    #+#             */
/*   Updated: 2024/03/20 17:51:06 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) {
	std::cout << "Default constructor called" << std::endl;
	this->_fixed_value = 0;
}

Fixed::Fixed( const Fixed &fixed ) {
	std::cout << "Copy constructor called" << std::endl;
	this->_fixed_value = fixed.getRawBits();
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
}

Fixed & Fixed::operator=( const Fixed &fixed ) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (&fixed != this)
		this->_fixed_value = fixed.getRawBits();
	return (*this);
}

int Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixed_value);
}

void Fixed::setRawBits( int const raw ) {
	std::cout << "setRawBits member function called" << std::endl;
	this->_fixed_value = raw;
}
