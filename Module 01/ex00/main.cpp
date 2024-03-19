/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 14:53:32 by mbrandao          #+#    #+#             */
/*   Updated: 2024/03/19 16:50:22 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main (void) {
	
	randomChump("Zombie1");

	Zombie *z2 = newZombie("Zombie2");
	z2->announce();
	delete z2;
	
}
