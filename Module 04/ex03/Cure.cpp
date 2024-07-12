/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 19:30:07 by mbrandao          #+#    #+#             */
/*   Updated: 2024/07/13 00:44:19 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {
	std::cout << "Cure constructor called" << std::endl;
}

Cure::Cure(Cure const & copy) : AMateria("cure") {
	std::cout << "Cure copy constructor called" << std::endl;
	*this = copy;
}

Cure::~Cure() {
	std::cout << "Cure destructor called" << std::endl;
}

Cure & Cure::operator=(Cure const & ref) {
	if (this != &ref) {
		this->type = ref.type;
	}
	return (*this);
}

AMateria * Cure::clone() const {
	return (new Cure(*this));
}

void Cure::use(ICharacter & target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}