/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 18:54:16 by mbrandao          #+#    #+#             */
/*   Updated: 2024/03/21 19:16:15 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria() {
	
}

AMateria::AMateria(const std::string & type) {
	this->type = type;
}

AMateria::AMateria(const AMateria & copy) {
	this->type = copy.type;
}

AMateria::~AMateria() {
		
}

AMateria & operator=( const AMateria &copy ) {
	this->copy.type;
	return (*this);
}

std::string const & AMateria::getType() const {
	return (this->type);
}

AMateria* AMateria::clone() const = 0 {
	return (AMateria*)this;
}

void AMateria::use(ICharacter& target) {
	std::cout << "Materia " << this->_type << " used on " << target.getName() << std::endl;
}