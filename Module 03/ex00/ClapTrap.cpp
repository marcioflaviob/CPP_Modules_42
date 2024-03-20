/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 21:17:47 by mbrandao          #+#    #+#             */
/*   Updated: 2024/03/20 22:14:46 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) {
	std::cout << YELLOW << "* Claptrap default constructor called *" << DEFAULT << std::endl;
	this->name = "NoName";
	this->hp = 10;
	this->energy = 10;
	this->damage = 0;
}

ClapTrap::ClapTrap(std::string name) {
	std::cout << YELLOW << "* Claptrap constructor called *" << DEFAULT << std::endl;
	this->name = name;
	this->hp = 10;
	this->energy = 10;
	this->damage = 0;
}

ClapTrap::ClapTrap( const ClapTrap &ct ) {
	std::cout << YELLOW << "* Claptrap copy constructor called *" << DEFAULT << std::endl;
	this->name = ct.name;
	this->hp = 10;
	this->energy = 10;
	this->damage = 0;
}


ClapTrap::~ClapTrap(void) {
	std::cout << RED << "* Claptrap destructor called *" << DEFAULT << std::endl;
}

ClapTrap & ClapTrap::operator=( const ClapTrap &ct ) {
	this->name = ct.name;
	this->hp = ct.hp;
	this->energy = ct.energy;
	this->damage = ct.damage;
	return (*this);
}


void ClapTrap::attack(const std::string& target) {
	if (this->hp > 0) {
		if (this->energy > 0) {
			std::cout << "ClapTrap " << this->name << " attacks " << target
			<< ", causing " << this->damage << " points of damage!" << std::endl;
			this->energy--;
		} else {
			std::cout << "ClapTrap " << this->name << " has no energy to attack." << std::endl;
		}
	} else {
		std::cout << this->name << " is dead." << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (this->hp > 0) {
		this->hp -= amount;
		if (this->hp <= 0)
			std::cout << this->name << " died." << std::endl;
	} else
		std::cout << this->name << " is already dead." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->hp > 0) {
		if (this->energy > 0) {
			std::cout << "ClapTrap " << this->name << " repaired itself and gained " << amount << " hit points." << std::endl;
			this->hp += amount;
			this->energy--;
		} else {
			std::cout << "ClapTrap " << this->name << " has no energy to repair itself." << std::endl;
		}
	} else {
		std::cout << this->name << " is dead." << std::endl;
	}
}
