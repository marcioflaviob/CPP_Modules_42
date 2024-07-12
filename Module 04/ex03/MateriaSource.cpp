/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 00:34:12 by mbrandao          #+#    #+#             */
/*   Updated: 2024/07/13 00:47:04 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	for (int i = 0; i < 4; i++) {
		materias[i] = NULL;
	}
}

MateriaSource::MateriaSource( MateriaSource const & src ) {
	if (this != &src) {
		for (int i = 0; i < 4; i++) {
			this->materias[i] = src.materias[i];
		}
	}
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; i++) {
        if (materias[i])
            delete materias[i];
	}
}


MateriaSource & MateriaSource::operator=( MateriaSource const & src ) {
	if (this != &src) {
		for (int i = 0; i < 4; i++) {
			this->materias[i] = src.materias[i];
		}
	}
	return (*this);
}


AMateria * MateriaSource::getMateria( std::string const & type ) {
	for (int i = 0; i < 4; i++) {
		if (materias[i] && materias[i]->getType() == type) {
			return materias[i];
		}
	}
	return NULL;
}

AMateria * MateriaSource::createMateria( std::string const & type ) {
	for (int i = 0; i < 4; i++) {
		if (materias[i] && materias[i]->getType() == type) {
			return materias[i]->clone();
		}
	}
	return NULL;
}

void MateriaSource::learnMateria( AMateria * m ) {
	for (int i = 0; i < 4; i++) {
		if (materias[i] == NULL) {
			materias[i] = m;
			return ;
		}
	}
}
