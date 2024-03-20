/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 00:03:02 by mbrandao          #+#    #+#             */
/*   Updated: 2024/03/20 21:05:45 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed(void) {
	std::cout << "Default constructor called" << std::endl;
	this->_fixed_value = 0;
}

Fixed::Fixed( const Fixed &fixed ) {
	std::cout << "Copy constructor called" << std::endl;
	this->_fixed_value = fixed.getRawBits();
}

Fixed::Fixed(const int new_value) {
	this->_fixed_value = new_value << this->_frac_bits;
}

Fixed::Fixed(const float new_value) {
	this->_fixed_value = roundf(new_value * (1 << _frac_bits));
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

std::ostream & operator<<(std::ostream &out, const Fixed &fixed) {
    out << fixed.toFloat();
    return out;
}

int Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixed_value);
}

void Fixed::setRawBits( int const raw ) {
	std::cout << "setRawBits member function called" << std::endl;
	this->_fixed_value = raw;
}

float Fixed::toFloat( void ) const {
	return static_cast<float>(this->_fixed_value) / (1 << _frac_bits);
}

int Fixed::toInt( void ) const {
    return this->_fixed_value >> _frac_bits;
}

bool Fixed::operator>( const Fixed &fixed ) {
	return (this->getRawBits() > fixed.getRawBits());
}

bool Fixed::operator>=( const Fixed &fixed ) {
	return (this->getRawBits() >= fixed.getRawBits());
}

bool Fixed::operator<( const Fixed &fixed ) {
	return (this->getRawBits() < fixed.getRawBits());
}

bool Fixed::operator<=( const Fixed &fixed ) {
	return (this->getRawBits() <= fixed.getRawBits());
}

bool Fixed::operator==( const Fixed &fixed ) {
	return (this->getRawBits() == fixed.getRawBits());
}

bool Fixed::operator!=( const Fixed &fixed ) {
	return (this->getRawBits() != fixed.getRawBits());
}

Fixed   Fixed::operator+( const Fixed &fixed ) const {
	return Fixed( this->toFloat() + fixed.toFloat() );
}

Fixed   Fixed::operator-( const Fixed &fixed ) const {
	return Fixed( this->toFloat() - fixed.toFloat() );
}

Fixed   Fixed::operator*( const Fixed &fixed ) const {
	return Fixed( this->toFloat() * fixed.toFloat() );
}

Fixed   Fixed::operator/( const Fixed &fixed ) const {
	return Fixed( this->toFloat() / fixed.toFloat() );
}

Fixed	&Fixed::operator++( void ) {
	++this->_fixed_value;
	return *this;
}

Fixed   Fixed::operator++( int ) { //post increment
	Fixed temp( *this );
	temp._fixed_value = this->_fixed_value++;
	return temp;
}

Fixed	&Fixed::operator--( void ) {
	--this->_fixed_value;
	return *this;
}

Fixed   Fixed::operator--( int ) { //post decrement
	Fixed temp( *this );
	temp._fixed_value = this->_fixed_value--;
	return temp;
}

Fixed 		&Fixed::min( Fixed &a, Fixed &b ) {
	if ( a.getRawBits() < b.getRawBits() )
		return a;
	return b;
}

const Fixed	&Fixed::min( const Fixed &a, const Fixed &b ) {
	if ( a.getRawBits() < b.getRawBits() )
		return a;
	return b;
}

Fixed 		&Fixed::max( Fixed &a, Fixed &b ) {
	if ( a.getRawBits() > b.getRawBits() )
		return a;
	return b;
}

const Fixed	&Fixed::max( const Fixed &a, const Fixed &b ) {
	if ( a.getRawBits() > b.getRawBits() )
		return a;
	return b;
}
