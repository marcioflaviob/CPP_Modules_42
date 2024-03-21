/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 20:05:13 by mbrandao          #+#    #+#             */
/*   Updated: 2024/03/21 20:33:53 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

int	main () {
	Bureaucrat pierre("Pierre", 3);
	Bureaucrat antoine("Antoine", 148);

	std::cout << pierre << std::endl;
	std::cout << antoine << std::endl;

	try
	{
		pierre.incrementGrade();
		pierre.incrementGrade();
		antoine.decrementGrade();
		antoine.decrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	std::cout << pierre << std::endl;
	std::cout << antoine << std::endl;

	try
	{
		pierre.incrementGrade(); //This should fail: Grade too high.
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		antoine.decrementGrade(); //This should fail: Grade too low.
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << pierre << std::endl;
	std::cout << antoine << std::endl; //Unchanged
	
}