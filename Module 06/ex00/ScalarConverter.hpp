/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 15:49:15 by mbrandao          #+#    #+#             */
/*   Updated: 2024/03/24 17:02:16 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_H
# define SCALARCONVERTER_H

# include <iostream>
# include <string>
# include <cstdlib>

enum num_type {
    _error,
    _char,
    _int,
    _float,
    _double,
	_literal,
};

class ScalarConverter {
	public:
		// Constructors
		ScalarConverter();
		ScalarConverter(const ScalarConverter &copy);

		// Destructor
		~ScalarConverter();
		
		// Operators
		ScalarConverter & operator=(const ScalarConverter &assign);
		
		static void convert(const std::string & literal);
		
};

#endif