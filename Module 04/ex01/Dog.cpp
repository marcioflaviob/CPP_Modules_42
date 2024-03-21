/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 13:23:53 by mbrandao          #+#    #+#             */
/*   Updated: 2024/03/21 18:12:10 by mbrandao         ###   ########.fr       */
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
	this->brain = dog.brain;
	std::cout << "🐶 Dog copy constructor called." << std::endl;
}

Dog::~Dog(){
	delete brain;
	std::cout << "🐶 Dog destructor called." << std::endl;
}

void Dog::makeSound(void) const {
	std::cout << "🐶 BARKING SOUNDS 🐶" << std::endl;
}