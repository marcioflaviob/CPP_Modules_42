/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 13:18:41 by mbrandao          #+#    #+#             */
/*   Updated: 2024/07/16 20:07:44 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat() {
	std::cout << "🐱 Cat default constructor called." << std::endl;
	this->brain = new Brain();
	this->type = "Cat";
}

Cat::Cat( const Cat &cat ) {
	this->brain = new Brain();
	for (int i = 0; i < 100; i++)
		this->brain->ideas[i] = cat.brain->ideas[i];
	std::cout << "🐱 Cat copy constructor called." << std::endl;
}

Cat & Cat::operator=( const Cat &cat ) {
	if (this == &cat)
		return (*this);
	for (int i = 0; i < 100; i++)
		this->brain->ideas[i] = cat.brain->ideas[i];
	std::cout << "🐱 Cat assignation operator called." << std::endl;
	return (*this);
}

Cat::~Cat(){
	delete brain;
	std::cout << "🐱 Cat destructor called." << std::endl;
}

void Cat::makeSound(void) const {
	std::cout << "🐱 MEOW MEOW 🐱" << std::endl;
}