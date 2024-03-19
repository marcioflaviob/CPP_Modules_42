/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 17:39:52 by mbrandao          #+#    #+#             */
/*   Updated: 2024/03/19 18:19:59 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) {
	this->type = type;
}

Weapon::Weapon(void) {
	
}

Weapon::~Weapon(void) {
	
}

const std::string &	Weapon::getType(void) {
	return this->type;
}

void	Weapon::setType(std::string new_type) {
	this->type = new_type;
}