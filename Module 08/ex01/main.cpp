/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 21:21:51 by mbrandao          #+#    #+#             */
/*   Updated: 2024/08/22 13:26:53 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main()
{
	try {
		Span sp = Span(5);
		// Span sp = Span(4); // should throw an exception
		// Span sp = Span(1); // should throw an exception
		
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	} catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	
	// try {
	// 	Span sp2 = Span(5);
		
	// 	std::vector<int> vec;
	// 	vec.push_back(1);
	// 	vec.push_back(3);
	// 	vec.push_back(5);
	// 	vec.push_back(7);
	// 	vec.push_back(9);

	// 	sp2.addNumber(vec.begin(), vec.end());
	// 	std::cout << sp2.shortestSpan() << std::endl;
	// 	std::cout << sp2.longestSpan() << std::endl;
	// } catch(const std::exception& e) {
	// 	std::cerr << e.what() << std::endl;
	// }
	
	return 0;
}