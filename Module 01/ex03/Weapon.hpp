/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 17:39:59 by mbrandao          #+#    #+#             */
/*   Updated: 2024/03/19 18:11:10 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

# include <string>
# include <iostream>

class Weapon {

private:

	std::string type;

public:

	Weapon(void);
	Weapon(std::string type);
	~Weapon(void);

	const std::string &	getType(void);
	void				setType(std::string new_type);

};

#endif