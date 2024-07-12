/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 18:54:16 by mbrandao          #+#    #+#             */
/*   Updated: 2024/07/13 00:26:03 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() {
	std::cout << "Abstract materia constructor called\n" << std::endl;
}

AMateria::AMateria(const std::string & type) {
	std::cout << "Abstract materia constructor called\n" << std::endl;
	this->type = type;
}

AMateria::AMateria(const AMateria & copy) {
	std::cout << "Abstract materia copy constructor called\n" << std::endl;
	this->type = copy.type;
}

AMateria::~AMateria() {
	std::cout << "Abstract materia destructor called\n" << std::endl;
}

AMateria & AMateria::operator=( const AMateria & copy ) {
	if (this != &copy) {
        this->type = copy.getType();
    }
	return (*this);
}

std::string const & AMateria::getType() const {
	return (this->type);
}

AMateria* AMateria::clone() const {
	return (AMateria*)this;
}

void AMateria::use(ICharacter& target) {
	std::cout << "AMateria " << this->type << " used on " << target.getName() << std::endl;
}