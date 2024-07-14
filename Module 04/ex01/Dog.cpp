/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 13:23:53 by mbrandao          #+#    #+#             */
/*   Updated: 2024/07/14 17:24:26 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog() {
	std::cout << "🐶 Dog default constructor called." << std::endl;
	this->brain = new Brain();
	this->type = "Dog";
}

Dog::Dog( const Dog &dog ) {
	this->brain = new Brain();
	for (int i = 0; i < 100; i++)
		this->brain->ideas[i] = dog.brain->ideas[i];
	std::cout << "🐶 Dog copy constructor called." << std::endl;
}

Dog & Dog::operator=( const Dog &dog ) {
	if (this == &dog)
		return (*this);
	for (int i = 0; i < 100; i++)
		this->brain->ideas[i] = dog.brain->ideas[i];
	std::cout << "🐶 Dog assignation operator called." << std::endl;
	return (*this);
}

Dog::~Dog(){
	delete brain;
	std::cout << "🐶 Dog destructor called." << std::endl;
}

void Dog::makeSound(void) const {
	std::cout << "🐶 BARKING SOUNDS 🐶" << std::endl;
}