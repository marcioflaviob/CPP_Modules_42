/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 14:55:32 by mbrandao          #+#    #+#             */
/*   Updated: 2024/07/30 15:33:50 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Usage: ./rpn \"expression\"" << std::endl;
		return 1;
	}
	
	RPN rpn;
	try {
		rpn.calc(argv[1]);
	} catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	
	return 0;
}