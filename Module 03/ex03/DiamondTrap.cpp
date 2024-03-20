/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 23:58:43 by mbrandao          #+#    #+#             */
/*   Updated: 2024/03/21 00:34:28 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {
	this->name = "Unnamed DiamondTrap";
	this->ClapTrap::name = this->name + "_clap_name";
	this->hp = FragTrap::hp;
	this->energy = ScavTrap::energy;
	this->damage = FragTrap::damage;

	std::cout << YELLOW << "* DiamondTrap default constructor called *" << DEFAULT << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) {
	std::cout << YELLOW << "* DiamondTrap constructor called *" << DEFAULT << std::endl;
	this->name = name;
	this->ClapTrap::name = this->name + "_clap_name";
	this->hp = FragTrap::hp;
	this->energy = ScavTrap::energy;
	this->damage = FragTrap::damage;
}

DiamondTrap::DiamondTrap(const DiamondTrap& dt) {
	std::cout << YELLOW << "* DiamondTrap copy constructor called *" << DEFAULT << std::endl;
	this->name = dt.name;
	this->ClapTrap::name = dt.ClapTrap::name;
	this->hp = dt.hp;
	this->energy = dt.energy;
	this->damage = dt.damage;
}

DiamondTrap::~DiamondTrap() {
	std::cout << RED << "* DiamondTrap destructor called *" << DEFAULT << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& dt) {
	this->name = dt.name;
	this->ClapTrap::name = dt.ClapTrap::name;
	this->hp = dt.hp;
	this->energy = dt.energy;
	return (*this);
}

void DiamondTrap::attack(const std::string& target) {
	this->ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() const {
	std::cout << "My name is " << this->name << " and my ClapTrap name is " << this->ClapTrap::name << std::endl;
}