/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyPB.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 22:27:17 by mbrandao          #+#    #+#             */
/*   Updated: 2024/07/08 12:22:03 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include "PhoneBook.hpp"
#include "Contact.hpp"

int main(void) {
	std::cout << "* Phone Book *" << std::endl;
	std::cout << "Here are your options:" << std::endl;
	std::cout << "ADD - To add a new contact" << std::endl;
	std::cout << "SEARCH - To search a phone number" << std::endl;
	std::cout << "EXIT - To exit" << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	PhoneBook pb;
	std::string input;
	
    while (true) {
        std::cout << "Inform your command: " << std::endl;
        std::cout << ">>";
        if (!std::getline(std::cin, input))
            break;
        std::cout << std::endl;

        if (input == "EXIT") break;

        if (input == "ADD")
            pb.add();
        else if (input == "SEARCH")
            pb.search();

        std::cout << "* Phone Book *" << std::endl;
        std::cout << "Here are your options:" << std::endl;
        std::cout << "ADD - To add a new contact" << std::endl;
        std::cout << "SEARCH - To search a phone number" << std::endl;
        std::cout << "EXIT - To exit" << std::endl;
        std::cout << std::endl;
        std::cout << std::endl;
    }
	
	return 0;
}