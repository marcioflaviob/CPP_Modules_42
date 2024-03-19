/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 17:22:16 by mbrandao          #+#    #+#             */
/*   Updated: 2024/03/19 17:37:06 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main (void) {
	std::string brian = "HI THIS IS BRAIN";
	std::string * stringPTR = &brian;
	std::string & stringREF = brian;

	std::cout << "Address of string:	" << &brian << std::endl;
	std::cout << "Address of PTR:		" << stringPTR << std::endl;
	std::cout << "Address of REF:		" << &stringREF << std::endl;
	
	std::cout << std::endl;

	std::cout << "Value of string:	" << brian << std::endl;
	std::cout << "Value of PTR:		" << *stringPTR << std::endl;
	std::cout << "Value of REF:		" << stringREF << std::endl;
}
