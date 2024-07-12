/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 19:20:44 by mbrandao          #+#    #+#             */
/*   Updated: 2024/07/13 00:30:06 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "AMateria.hpp"

Ice::Ice() : AMateria("ice") {
	std::cout << "Ice constructor called" << std::endl;
}

Ice::Ice(Ice const & copy) : AMateria("ice") {
	std::cout << "Ice copy constructor called" << std::endl;
	*this = copy;
}

Ice::~Ice() {
	std::cout << "Ice destructor called" << std::endl;
}

AMateria * Ice::clone() const {
	return (new Ice(*this));
}

void Ice::use(ICharacter & target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}