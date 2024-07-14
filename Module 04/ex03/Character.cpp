/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 23:11:08 by mbrandao          #+#    #+#             */
/*   Updated: 2024/07/14 17:26:50 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name) : name(name) {
	std::cout << "Character constructor called" << std::endl;
	for (int i = 0; i < 4; i++) {
		inventory[i] = NULL;
	}
}

Character::Character(const Character &c) {
	std::cout << "Character copy constructor called" << std::endl;
	for (int i = 0; i < 4; i++) {
		if (inventory[i])
			delete inventory[i];
		inventory[i] = NULL;
	}
	if (this != &c) {
		this->name = c.name;
		for (int i = 0; i < 4; i++) {
			if (c.inventory[i] != NULL)
				this->inventory[i] = c.inventory[i]->clone();
			else
				this->inventory[i] = NULL;
		}
	}
}

Character & Character::operator=(const Character &c) {
	for (int i = 0; i < 4; i++) {
		if (inventory[i])
			delete inventory[i];
		inventory[i] = NULL;
	}
	if (this != &c) {
		this->name = c.name;
		for (int i = 0; i < 4; i++) {
			this->inventory[i] = c.inventory[i]->clone();
		}
	}	
	return (*this);
}

Character::~Character() {
	std::cout << "Character destructor called" << std::endl;
	for (int i = 0; i < 4; i++) {
		if (inventory[i])
			delete inventory[i];
	}
}

std::string const & Character::getName() const {
	return (this->name);
}

void Character::equip(AMateria *m) {
	int i = 0;

	if (m == NULL) {
		return ;
	}
	
	while (inventory[i] != NULL) {
		i++;
	}
	
	if (i < 4) {
		inventory[i] = m;
		std::cout << "Equipped " << m->getType() << std::endl;
	}
	else
		std::cout << "Inventory is full" << std::endl;
}

void Character::unequip(int idx) {
	if (inventory[idx] == NULL || idx < 0 || idx > 3) {
		std::cout << "Invalid index" << std::endl;
		return ;
	}
	// AMateria *tmp = inventory[idx];
	std::cout << "Unequipped " << inventory[idx]->getType() << std::endl;
	inventory[idx] = NULL;
	
}

void Character::use(int idx, ICharacter &target) {
	if (inventory[idx] == NULL || idx < 0 || idx > 3) {
		std::cout << "Invalid index" << std::endl;
		return ;
	}
	inventory[idx]->use(target);
}
