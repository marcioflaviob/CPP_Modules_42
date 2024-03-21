/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 13:43:43 by mbrandao          #+#    #+#             */
/*   Updated: 2024/03/21 13:43:46 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	std::cout << "👎 WrongAnimal default constructor called." << std::endl;
	this->type = "Unknown WrongAnimal";
}

WrongAnimal::WrongAnimal( const WrongAnimal &wrongAnimal ) {
	std::cout << "👎 WrongAnimal copy constructor called." << std::endl;
	this->type = wrongAnimal.type;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "👎 WrongAnimal destructor called." << std::endl;
}

WrongAnimal & WrongAnimal::operator=( const WrongAnimal &wrongAnimal ) {
	this->type = wrongAnimal.type;
	return (*this);
}

std::string WrongAnimal::getType() const {
	return (this->type);
}

void WrongAnimal::makeSound(void) const {
	std::cout << "👎 Wrong Animal sound 👎" << std::endl;
}
	