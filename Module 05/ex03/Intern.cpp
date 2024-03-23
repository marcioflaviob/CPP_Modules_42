/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 13:41:55 by mbrandao          #+#    #+#             */
/*   Updated: 2024/03/23 14:05:28 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {
	
}

Intern::Intern( const Intern & copy ) {
	(void) copy;
}

Intern::~Intern() {
	
}

Intern & Intern::operator=(const Intern & copy) {
	(void) copy;
	return ( *this );
}

Form * Intern::makeForm(std::string name, std::string target) {
	
	int i;
    std::string forms[] = {"robotomy request", "shrubbery creation", "presidential pardon"};

	i = 0;
	while (i < 3 && forms[i].compare(name))
		i++;

	switch (i) {
		case 0:
			return (new RobotomyRequestForm(target));
			break;
		case 1:
			return (new ShrubberyCreationForm(target));
			break;
		case 2:
			return (new PresidentialPardonForm(target));
			break;
		default:
			std::cout << "Form not found." << std::endl;
			return (NULL);
			
	}
}
