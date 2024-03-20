/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 22:20:31 by mbrandao          #+#    #+#             */
/*   Updated: 2024/03/21 00:20:05 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
	
public:

	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap& other);
	~FragTrap();

	void attack(const std::string& target);
	void highFivesGuys(void);
	
};

#endif