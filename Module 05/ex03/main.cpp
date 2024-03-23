/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 20:05:13 by mbrandao          #+#    #+#             */
/*   Updated: 2024/03/23 14:13:44 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

#include <iostream>
#include <unistd.h> //For sleep

int	main () {
	
	Intern ryan;
	Form *form;
	form = ryan.makeForm("shrubbery creation", "target");
	Bureaucrat pierre("Pierre", 138);

	pierre.executeForm(*form); //Should fail because form not signed

	pierre.signForm(*form);
	pierre.signForm(*form); // Should fail because it's already signed.

	pierre.executeForm(*form); //Should fail because grade too low.
	
	pierre.incrementGrade();

	pierre.executeForm(*form);

	std::cout << "-----------------------------------" << std::endl;
	// -------------------------------------------------------------------
	std::cout << "-----------------------------------" << std::endl;

	Form *form2;
	form2 = ryan.makeForm("robotomy request", "target2");
	Bureaucrat antoine("Antoine", 46);

	antoine.executeForm(*form2); //Should fail because form not signed
	
	antoine.signForm(*form2);

	antoine.executeForm(*form2); //Should fail because grade too low.

	antoine.incrementGrade();

	antoine.executeForm(*form2);
	// sleep(1);
	// antoine.executeForm(*form2);
	// sleep(1);
	// antoine.executeForm(*form2);
	// sleep(1);
	// antoine.executeForm(*form2);
	// sleep(1);

	std::cout << "-----------------------------------" << std::endl;
	// -------------------------------------------------------------------
	std::cout << "-----------------------------------" << std::endl;

	Form *form3;
	form3 = ryan.makeForm("presidential pardon", "target3");
	Bureaucrat paul("Paul", 6);

	paul.executeForm(*form3); //Should fail because form not signed

	paul.signForm(*form3);

	paul.executeForm(*form3); //Should fail because grade too low.

	paul.incrementGrade();

	paul.executeForm(*form3);
	
	std::cout << "-----------------------------------" << std::endl;
	// -------------------------------------------------------------------
	std::cout << "-----------------------------------" << std::endl;

	Form *form4;
	form4 = ryan.makeForm("undefined form", "target4"); //Should fail because form not found.

	delete form;
	delete form2;
	delete form3;
	
}