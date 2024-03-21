/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 13:08:20 by mbrandao          #+#    #+#             */
/*   Updated: 2024/03/21 13:37:06 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
	std::cout << "🥚 Animal default constructor called." << std::endl;
	this->type = "Unknown Animal";
}

Animal::Animal( const Animal &animal ) {
	std::cout << "🥚 Animal copy constructor called." << std::endl;
	this->type = animal.type;
}

Animal::~Animal() {
	std::cout << "🥚 Animal destructor called." << std::endl;
}

Animal & Animal::operator=( const Animal &animal ) {
	this->type = animal.type;
	return (*this);
}

std::string Animal::getType() const {
	return (this->type);
}

void Animal::makeSound(void) const {
	std::cout << "🥚 Unknown sound 🥚" << std::endl;
}
	