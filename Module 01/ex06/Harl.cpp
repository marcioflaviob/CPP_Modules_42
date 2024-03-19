/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 21:55:38 by mbrandao          #+#    #+#             */
/*   Updated: 2024/03/19 23:54:10 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void) {
	
}

Harl::~Harl(void) {
	
}

void Harl::debug( void ) {
	std::cout << GREEN << "[ DEBUG ]" << DEFAULT << std::endl << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-"
		"ketchup burger. I really do!" << std::endl;
}

void Harl::info( void ) {
	std::cout << YELLOW << "[ INFO ]" << DEFAULT << std::endl << "I cannot believe adding extra bacon costs more money. You didn’t put"
		"enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
	
}

void Harl::warning( void ) {
	std::cout << ORANGE << "[ WARNING ]" << DEFAULT << std::endl << "I think I deserve to have some extra bacon for free. I’ve been coming for"
		"years whereas you started working here since last month." << std::endl;
	
}

void Harl::error( void ) {
	std::cout << RED << "[ ERROR ]" << DEFAULT << std::endl << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain( std::string message ) {

    int i;
	function_t  functions[] = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
    std::string messages[] = { "DEBUG", "INFO", "WARNING", "ERROR"};

	i = 0;
	while (i < 4 && messages[i].compare(message))
		i++;

	switch (i) {
		case 0:
			while (i < 4)
				(this->*functions[i++])();
			break;
		case 1:
			while (i < 4)
				(this->*functions[i++])();
			break;
		case 2:
			while (i < 4)
				(this->*functions[i++])();
			break;
		case 3:
			(this->*functions[i++])();
			break;
		default:
			std::cout << BLUE << "[ Probably complaining about insignificant problems ]" << std::endl;
			
	}

}
