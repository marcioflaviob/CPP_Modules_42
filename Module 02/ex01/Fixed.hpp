/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 00:03:09 by mbrandao          #+#    #+#             */
/*   Updated: 2024/03/20 17:47:33 by mbrandao         ###   ########.fr       */
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
	~Fixed(void);
	
	Fixed & operator=( const Fixed &fixed );

	int getRawBits( void ) const;
	void setRawBits( int const raw );

	float toFloat( void ) const;
	int toInt( void ) const;
	
};

std::ostream & operator<<(std::ostream &out, const Fixed &fixed);

#endif