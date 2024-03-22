/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 20:05:13 by mbrandao          #+#    #+#             */
/*   Updated: 2024/03/22 23:45:20 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

#include <iostream>
#include <unistd.h> //For sleep

int	main () {
	
	ShrubberyCreationForm form("target1");
	Bureaucrat pierre("Pierre", 138);

	pierre.executeForm(form); //Should fail because form not signed

	pierre.signForm(form);
	pierre.signForm(form); // Should fail because it's already signed.

	pierre.executeForm(form); //Should fail because grade too low.
	
	pierre.incrementGrade();

	pierre.executeForm(form);

	std::cout << "-----------------------------------" << std::endl;
	// -------------------------------------------------------------------
	std::cout << "-----------------------------------" << std::endl;

	RobotomyRequestForm form2("target2");
	Bureaucrat antoine("Antoine", 46);

	antoine.executeForm(form2); //Should fail because form not signed
	
	antoine.signForm(form2);

	antoine.executeForm(form2); //Should fail because grade too low.

	antoine.incrementGrade();

	antoine.executeForm(form2);
	// sleep(1);
	// antoine.executeForm(form2);
	// sleep(1);
	// antoine.executeForm(form2);
	// sleep(1);
	// antoine.executeForm(form2);
	// sleep(1);

	std::cout << "-----------------------------------" << std::endl;
	// -------------------------------------------------------------------
	std::cout << "-----------------------------------" << std::endl;

	PresidentialPardonForm form3("target3");
	Bureaucrat paul("Paul", 6);

	paul.executeForm(form3); //Should fail because form not signed

	paul.signForm(form3);

	paul.executeForm(form3); //Should fail because grade too low.

	paul.incrementGrade();

	paul.executeForm(form3);
	
}