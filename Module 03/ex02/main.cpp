/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 21:17:39 by mbrandao          #+#    #+#             */
/*   Updated: 2024/03/20 23:54:36 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int	main (void) {
	ClapTrap pierre("Pierre");
	FragTrap jean("Jean");

	pierre.attack("Jean");
	jean.takeDamage(0);
	jean.attack("Pierre");
	pierre.takeDamage(20);

	pierre.attack("Jean"); //Attack not possible because Pierre is dead.

	jean.highFivesGuys();
}