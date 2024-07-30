/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 21:42:48 by mbrandao          #+#    #+#             */
/*   Updated: 2024/07/24 22:33:35 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <list>

int	main(void)
{
	std::list<int> test;
	test.push_back(155);
	test.push_back(156);
	test.push_back(157);

	std::list<int>::const_iterator	it = test.end();

	try {
		it = ::easyfind(test, 155);
	} catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	if (it != test.end())
		std::cout << *it << " found" << std::endl;

	it = test.end();

	try {
		it = ::easyfind(test, 15); //This will throw the exception
	} catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	return (0);
}