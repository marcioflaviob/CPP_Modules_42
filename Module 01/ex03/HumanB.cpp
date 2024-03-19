/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 17:53:12 by mbrandao          #+#    #+#             */
/*   Updated: 2024/03/19 18:28:44 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) {
	this->name = name;
	this->weapon = NULL;
}

HumanB::~HumanB(void) {
	
}

void	HumanB::setWeapon(Weapon & new_weapon){
	this->weapon = &new_weapon;
}

void	HumanB::attack(void){
	if (this->weapon != NULL)
		std::cout << this->name << " attacks with their " << (*this->weapon).getType() << std::endl;
	else
		std::cout << this->name << " is unarmed." << std::endl;
}
