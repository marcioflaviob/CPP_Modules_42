/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 13:18:41 by mbrandao          #+#    #+#             */
/*   Updated: 2024/03/21 18:12:02 by mbrandao         ###   ########.fr       */
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
	this->brain = cat.brain;
	std::cout << "🐱 Cat copy constructor called." << std::endl;
}

Cat::~Cat(){
	delete brain;
	std::cout << "🐱 Cat destructor called." << std::endl;
}

void Cat::makeSound(void) const {
	std::cout << "🐱 MEOW MEOW 🐱" << std::endl;
}