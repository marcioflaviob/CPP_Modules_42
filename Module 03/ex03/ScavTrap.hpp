/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 21:58:53 by mbrandao          #+#    #+#             */
/*   Updated: 2024/03/21 00:31:57 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include <string>
# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {

public:

	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap& other);
	~ScavTrap();

	virtual void attack(const std::string& target);
	void guardGate();

};


#endif