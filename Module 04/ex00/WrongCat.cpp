/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 13:48:32 by mbrandao          #+#    #+#             */
/*   Updated: 2024/03/21 15:18:42 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
	std::cout << "🙀 WrongCat default constructor called." << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat( const WrongCat &wrongCat ) {
	std::cout << "🙀 WrongCat copy constructor called." << std::endl;
	this->type = wrongCat.type;
}

WrongCat::~WrongCat() {
	std::cout << "🙀 WrongCat destructor called." << std::endl;
}

WrongCat & WrongCat::operator=( const WrongCat &wrongCat ) {
	this->type = wrongCat.type;
	return (*this);
}

std::string WrongCat::getType() const {
	return (this->type);
}

void WrongCat::makeSound(void) const {
	std::cout << "🙀 Wrong cat sound 🙀" << std::endl;
}
	