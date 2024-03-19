/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 17:40:40 by mbrandao          #+#    #+#             */
/*   Updated: 2024/03/19 18:28:30 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

# include <string>
# include <iostream>
# include "Weapon.hpp"

class HumanB {

public:

	std::string	name;
	Weapon * weapon;

	HumanB(std::string name);
	~HumanB(void);

	void	setWeapon(Weapon & new_weapon);
	void	attack(void);
};

#endif