/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 19:20:44 by mbrandao          #+#    #+#             */
/*   Updated: 2024/03/21 19:30:28 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "AMateria.hpp"

Ice::Ice() : AMateria("ice") {
	
}

Ice::Ice(Ice const & copy) {
	*this = copy;
}

Ice::~Ice() {
	
}

virtual AMateria * Ice::clone() const {
	return (new Ice(*this));
}

virtual void Ice::use(ICharacter & target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}