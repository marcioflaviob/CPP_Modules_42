/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 15:49:22 by mbrandao          #+#    #+#             */
/*   Updated: 2024/03/24 19:57:06 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

// Constructors
ScalarConverter::ScalarConverter()
{
}

ScalarConverter::ScalarConverter(const ScalarConverter &copy)
{
	(void) copy;
}


// Destructor
ScalarConverter::~ScalarConverter()
{
}


// Operators
ScalarConverter & ScalarConverter::operator=(const ScalarConverter &assign)
{
	(void) assign;
	return *this;
}

static bool isInt(const std::string & literal) {
	if (literal.length() == 1 && !isdigit(literal[0])) {
		return false;
	}
	else if ((literal.find('.') != std::string::npos)
		&& (literal.at(literal.length() - 1) == 'f' || literal.at(literal.length() - 1) == 'F')){
		return false;
	}
	else if (literal.find('.') != std::string::npos) {
		return false;
	}
	else
		return true;
}

// static bool isChar(int literal) {
// 	if (literal >= 0 && literal <= 127) {
// 		return true;
// 	}
// 	else
// 		return false;
// }

static num_type get_type(const std::string & literal) {
	if (literal == "nan" || literal == "nanf" || literal == "+inf" || literal == "+inff" || literal == "-inf" || literal == "-inff") {
		return _literal;
	}
	else if (literal.length() == 1 && !isdigit(literal[0])) {
		return _char;
	}
	else if ((literal.find('.') != std::string::npos)
		&& (literal.at(literal.length() - 1) == 'f' || literal.at(literal.length() - 1) == 'F')){
		return _float;
	}
	else if (literal.find('.') != std::string::npos) {
		return _double;
	}
	else if (isInt(literal)) {
		return _int;
	}
	else
		return _error;
}

static int toInt(const std::string & literal) {
	if (get_type(literal) == _int) {
		return std::atoi(literal.c_str());
	}
	else if (get_type(literal) == _char) {
		return static_cast<int>(literal[0]);
	}
	else if (get_type(literal) == _float) {
		return static_cast<int>(std::atof(literal.c_str()));
	}
	else if (get_type(literal) == _double) {
		return static_cast<int>(std::atof(literal.c_str()));
	}
	else {
		std::cout << "impossible" << std::endl;
		return 0;
	}
}

static float toFloat(const std::string & literal) {
	if (get_type(literal) == _int) {
		return static_cast<float>(std::atoi(literal.c_str()));
	}
	else if (get_type(literal) == _char) {
		return static_cast<float>(literal[0]);
	}
	else if (get_type(literal) == _float) {
		return std::atof(literal.c_str());
	}
	else if (get_type(literal) == _double) {
		return static_cast<float>(std::atof(literal.c_str()));
	}
	else {
		std::cout << "impossible" << std::endl;
		return 0;
	}
}

static void toChar(const std::string & literal) {
	if (get_type(literal) == _char) {
		if (std::isprint(literal[0])) {
			std::cout << literal[0] << std::endl;
			return ;
		}
		else {
			std::cout << "Non displayable" << std::endl;
			return ;
		}
	}
	if (get_type(literal) == _int || get_type(literal) == _float || get_type(literal) == _double) {
		if (toInt(literal) < 0 || toInt(literal) > 127) {
			std::cout << "impossible" << std::endl;
			return ;
		}
		else if (std::isprint(static_cast<char>(toInt(literal)))) {
			std::cout << static_cast<char>(toInt(literal)) << std::endl;
		}
		else {
			std::cout << "Non displayable" << std::endl;
			return ;
		}
	}
	else {
		std::cout << "impossible" << std::endl;
		return ;
	}
}

void ScalarConverter::convert(const std::string & literal) {
	std::cout << "char: "; toChar(literal);
	
	std::cout << "int: "; 
	if (get_type(literal) == _literal)
		std::cout << "impossible" << std::endl;
	else
		std::cout << toInt(literal) << std::endl;

	std::cout << "float: ";
	if (get_type(literal) == _literal)
		std::cout << literal + "f" << std::endl;
	else if (get_type(literal) == _int)
		std::cout << toFloat(literal) << ".0f" << std::endl;
	else
		std::cout << toFloat(literal) << "f" << std::endl;

	std::cout << "double: ";
	if (get_type(literal) == _literal)
		std::cout << literal << std::endl;
	else if (get_type(literal) == _int)
		std::cout << toFloat(literal) << ".0f" << std::endl;
	else
		std::cout << toFloat(literal) << std::endl;
	
}