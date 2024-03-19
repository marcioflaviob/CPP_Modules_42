/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 22:18:00 by mbrandao          #+#    #+#             */
/*   Updated: 2024/03/19 23:52:56 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main (int argc, char **argv) {
	if (argc != 2) {
		std::cout << "Usage: ./harlFilter [LOG LEVEL]" << std::endl;
		std::cout << "The available levels are DEBUG, INFO, WARNING and ERROR" << std::endl;
		return 0;
	}
	
	Harl harl;
	harl.complain(argv[1]);
}