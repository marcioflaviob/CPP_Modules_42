/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 20:05:13 by mbrandao          #+#    #+#             */
/*   Updated: 2024/03/22 23:52:46 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int	main () {
	
	Bureaucrat pierre("Pierre", 20);
	Bureaucrat antoine("Antoine", 80);

	Form form1("Form1", 19, 100);
	Form form2("Form2", 100, 100);


	std::cout << std::endl;
	std::cout << form1 << std::endl;
	std::cout << std::endl;

	pierre.signForm(form1); //Should fail
	pierre.incrementGrade();
	pierre.signForm(form1); //Successfully sign
	pierre.signForm(form1); //Should fail
	
	std::cout << std::endl;
	std::cout << form1 << std::endl;
	std::cout << std::endl;

	antoine.signForm(form2);
	antoine.signForm(form2); //Should fail
	
}