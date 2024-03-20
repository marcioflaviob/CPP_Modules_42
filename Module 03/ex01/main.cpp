/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 21:17:39 by mbrandao          #+#    #+#             */
/*   Updated: 2024/03/20 22:19:29 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main (void) {
	ClapTrap pierre("Pierre");
	ScavTrap bastien("Bastien");

	pierre.attack("Bastien");
	bastien.takeDamage(0);
	bastien.attack("Pierre");
	pierre.takeDamage(20);

	pierre.attack("Bastien"); //Attack not possible because Pierre is dead.

	bastien.guardGate();
}