/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 21:18:36 by mbrandao          #+#    #+#             */
/*   Updated: 2024/03/20 22:18:05 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <string>
# include <iostream>

# define DEFAULT "\e[0;97m"
# define YELLOW "\e[0;93m"
# define RED "\e[0;31m"

class ClapTrap {

protected:

	std::string name;
	int			hp;
	int			energy;
	int			damage;

public:

	ClapTrap(void);
	ClapTrap( const ClapTrap &ct );
	ClapTrap(std::string name);
	~ClapTrap(void);
	ClapTrap & operator=( const ClapTrap &ct );

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	
};

#endif