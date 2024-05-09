/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 20:53:49 by mbrandao          #+#    #+#             */
/*   Updated: 2024/03/24 21:05:28 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

// Constructors
Data::Data()
{
	this->value = 42;
	this->str = "Forty-two";
}

Data::Data(int value, std::string str) {
	this->value = value;
	this->str = str;
}

Data::Data(const Data &copy)
{
	*this = copy;
}


// Destructor
Data::~Data()
{
}


// Operators
Data & Data::operator=(const Data &assign)
{
	this->value = assign.value;
	this->str = assign.str;
	return *this;
}

