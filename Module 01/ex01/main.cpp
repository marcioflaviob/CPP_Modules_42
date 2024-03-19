/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 14:53:32 by mbrandao          #+#    #+#             */
/*   Updated: 2024/03/19 17:18:44 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main (void) {
	int number = 10;
	Zombie *zombieArray = zombieHorde(number, "agartha");
	
	for (int i = 0; i < number; i++)
		zombieArray->announce();
	
	delete [] zombieArray;
}
