/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 00:01:35 by mbrandao          #+#    #+#             */
/*   Updated: 2024/03/21 00:31:49 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H

# include "ScavTrap.hpp"
# include "FragTrap.hpp"
# include <string>
# include <iostream>

class DiamondTrap : public ScavTrap, public FragTrap {
	
public:
	DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap(const DiamondTrap& dt);
	~DiamondTrap();

	DiamondTrap& operator=(const DiamondTrap& dt);

	void attack(const std::string& target);
	void whoAmI() const;

private:
	std::string name;

};

#endif