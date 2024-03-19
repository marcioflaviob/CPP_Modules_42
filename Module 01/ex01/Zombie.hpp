/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 14:53:50 by mbrandao          #+#    #+#             */
/*   Updated: 2024/03/19 17:17:55 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <string>
#include <iostream>

class Zombie {

private:

	std::string name;

public:

	Zombie(std::string name);
	Zombie( void );
	~Zombie( void );

	void	announce( void );
	void	setName( std::string name );

};

Zombie* zombieHorde( int N, std::string name );

#endif