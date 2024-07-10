/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 00:03:09 by mbrandao          #+#    #+#             */
/*   Updated: 2024/03/20 20:46:19 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

# include <iostream>

class Fixed {

private:

	int _fixed_value;
	static const int _frac_bits = 8;

public:

	Fixed(void);
	Fixed(const int new_value);
	Fixed(const float new_value);
	Fixed( const Fixed &fixed );
	Fixed & operator=( const Fixed &fixed );
	~Fixed(void);
	
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	
	
	bool operator>( const Fixed &fixed );
	bool operator>=( const Fixed &fixed );
	bool operator<( const Fixed &fixed );
	bool operator<=( const Fixed &fixed );
	bool operator==( const Fixed &fixed );
	bool operator!=( const Fixed &fixed );

	Fixed   operator+( const Fixed &fixed ) const;
    Fixed   operator-( const Fixed &fixed ) const;
    Fixed   operator*( const Fixed &fixed ) const;
    Fixed   operator/( const Fixed &fixed ) const;

    Fixed	&operator++( void );
    Fixed   operator++( int );
    Fixed	&operator--( void );
    Fixed   operator--( int );
	
    static Fixed 		&min( Fixed &a, Fixed &b );
    static const Fixed	&min( const Fixed &a, const Fixed &b );
    static Fixed 		&max( Fixed &a, Fixed &b );
    static const Fixed	&max( const Fixed &a, const Fixed &b );

	float toFloat( void ) const;
	int toInt( void ) const;
	
};

std::ostream & operator<<(std::ostream &out, const Fixed &fixed);

#endif