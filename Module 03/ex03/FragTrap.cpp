/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 22:22:03 by mbrandao          #+#    #+#             */
/*   Updated: 2024/03/21 00:13:40 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() {
	std::cout << YELLOW << "* FragTrap default constructor called *" << DEFAULT << std::endl;
	this->name = "Unnamed FragTrap";
	this->hp = 100;
	this->energy = 100;
	this->damage = 30;
}

FragTrap::FragTrap(std::string name) {
	std::cout << YELLOW << "* FragTrap constructor called *" << DEFAULT << std::endl;
	this->name = name;
	this->hp = 100;
	this->energy = 100;
	this->damage = 30;
}

FragTrap::FragTrap(const FragTrap& other) {
	std::cout << YELLOW << "* FragTrap copy constructor called *" << DEFAULT << std::endl;
	this->name = other.name;
	this->hp = other.hp;
	this->energy = other.energy;
	this->damage = other.damage;
}

FragTrap::~FragTrap() {
	std::cout << RED << "* FragTrap destructor called *" << DEFAULT << std::endl;

}

void FragTrap::attack(const std::string& target) {
	if (this->hp > 0) {
		if (this->energy > 0) {
			std::cout << "FragTrap " << this->name << " attacks " << target
			<< ", causing " << this->damage << " points of damage!" << std::endl;
			this->energy--;
		} else {
			std::cout << "FragTrap " << this->name << " has no energy to attack." << std::endl;
		}	
	} else {
		std::cout << this->name << " is dead." << std::endl;
	}
}

void FragTrap::highFivesGuys(void) {
	std::cout << "FragTrap " << this->name << " requested a High Fives." << std::endl;
}