/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 21:58:35 by mbrandao          #+#    #+#             */
/*   Updated: 2024/03/21 00:13:32 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	std::cout << YELLOW << "* ScavTrap default constructor called *" << DEFAULT << std::endl;
	this->name = "Unnamed ScavTrap";
	this->hp = 100;
	this->energy = 50;
	this->damage = 20;
}

ScavTrap::ScavTrap(std::string name) {
	std::cout << YELLOW << "* ScavTrap constructor called *" << DEFAULT << std::endl;
	this->name = name;
	this->hp = 100;
	this->energy = 50;
	this->damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& other) {
	std::cout << YELLOW << "* ScavTrap copy constructor called *" << DEFAULT << std::endl;
	this->name = other.name;
	this->hp = other.hp;
	this->energy = other.energy;
	this->damage = other.damage;
}

ScavTrap::~ScavTrap() {
	std::cout << RED << "* ScavTrap destructor called *" << DEFAULT << std::endl;

}

void ScavTrap::attack(const std::string& target) {
	if (this->hp > 0) {
		if (this->energy > 0) {
			std::cout << "ScavTrap " << this->name << " attacks " << target
			<< ", causing " << this->damage << " points of damage!" << std::endl;
			this->energy--;
		} else {
			std::cout << "ScavTrap " << this->name << " has no energy to attack." << std::endl;
		}	
	} else {
		std::cout << this->name << " is dead." << std::endl;
	}
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap " << this->name << " is now in Gate keeper mode." << std::endl;
}