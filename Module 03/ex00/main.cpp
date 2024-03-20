/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 21:17:39 by mbrandao          #+#    #+#             */
/*   Updated: 2024/03/20 21:51:29 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main (void) {
	ClapTrap pierre("Pierre");
	ClapTrap bastien("Bastien");

	pierre.attack("Bastien");
	pierre.attack("Bastien");
	pierre.attack("Bastien");
	pierre.attack("Bastien");
	pierre.attack("Bastien");
	pierre.attack("Bastien");
	pierre.attack("Bastien");
	pierre.attack("Bastien");
	pierre.attack("Bastien");
	pierre.attack("Bastien");
	pierre.attack("Bastien");

	pierre = bastien;

	pierre.attack("Enemy");
	pierre.attack("Enemy");

}