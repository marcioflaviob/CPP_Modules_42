/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 19:30:07 by mbrandao          #+#    #+#             */
/*   Updated: 2024/03/21 19:32:34 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {
	
}

Cure::Cure(Cure const & copy) {
	*this = copy;
}

Cure::~Cure() {
	
}

virtual AMateria * Cure::clone() const {
	return (new Cure(*this));
}

virtual void Cure::use(ICharacter & target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}