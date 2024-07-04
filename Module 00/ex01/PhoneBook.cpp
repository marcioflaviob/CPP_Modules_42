/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 21:28:06 by mbrandao          #+#    #+#             */
/*   Updated: 2024/07/04 23:12:35 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <sstream>
#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook(void) {
	this->oldest_index = 0;
	return;
}

PhoneBook::~PhoneBook(void) {
	return;
}

std::string PhoneBook::fix_string(std::string str) {
	if (str.length() < 10)
		str.insert(0, 10 - str.length(), ' ');
	else if (str.length() > 10) {
		str.resize(9);
		str = str + '.';
	}
	return (str);
}

void PhoneBook::add(void) {
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;
	
	std::cout << "* ADDING A NEW CONTACT *" << std::endl;
	std::cout << "Inform the first name: " << std::endl;
	std::cout << ">>";
	std::getline(std::cin, first_name);
	while (first_name.empty()) {
		std::cout << "Input is empty." << std::endl;
		std::cout << std::endl;
		std::cout << "Inform the first name: " << std::endl;
		std::cout << ">>";
		std::getline(std::cin, first_name);
	}

	std::cout << "Inform the last name: " << std::endl;
	std::cout << ">>";
	std::getline(std::cin, last_name);
	while (last_name.empty()) {
		std::cout << "Input is empty." << std::endl;
		std::cout << std::endl;
		std::cout << "Inform the last name: " << std::endl;
		std::cout << ">>";
		std::getline(std::cin, last_name);
	}
	
	std::cout << "Inform the nickname: " << std::endl;
	std::cout << ">>";
	std::getline(std::cin, nickname);
	while (nickname.empty()) {
		std::cout << "Input is empty." << std::endl;
		std::cout << std::endl;
		std::cout << "Inform the nickname: " << std::endl;
		std::cout << ">>";
		std::getline(std::cin, nickname);
	}
	
	std::cout << "Inform the phone number: " << std::endl;
	std::cout << ">>";
	std::getline(std::cin, phone_number);
	while (phone_number.empty()) {
		std::cout << "Input is empty." << std::endl;
		std::cout << std::endl;
		std::cout << "Inform the phone number: " << std::endl;
		std::cout << ">>";
		std::getline(std::cin, phone_number);
	}

	std::cout << "Inform the darkest secret: " << std::endl;
	std::cout << ">>";
	std::getline(std::cin, darkest_secret);
	while (darkest_secret.empty()) {
		std::cout << "Input is empty." << std::endl;
		std::cout << std::endl;
		std::cout << "Inform the darkest secret: " << std::endl;
		std::cout << ">>";
		std::getline(std::cin, darkest_secret);
	}
	std::cout << std::endl;

	Contact contact(first_name, last_name, nickname, phone_number, darkest_secret);
	
	int i = 0;
	while (i < 8 && !this->contacts[i].isEmpty())
		i++;
	if (i < 8)
		this->contacts[i] = contact;
	else
	{
		if (this->oldest_index == 8)
			this->oldest_index = 0;
		this->contacts[this->oldest_index++] = contact;
	}
}

void PhoneBook::search(void) {
	int 		i = 0;
	std::string index;

	std::cout << "* SEARCHING A CONTACT *" << std::endl;
	std::cout << std::endl;
	
	if (!this->contacts[0].isEmpty())
		std::cout << this->fix_string("Index") << " | " << this->fix_string("First Name") << " | "
			<< this->fix_string("Last Name") << " | " << this->fix_string("Nickname") << std::endl;

	while (i < 8 && !this->contacts[i].isEmpty()) {
		std::stringstream ss;
		ss << i;
		index = ss.str();
		std::cout << this->fix_string(index) << " | " << this->fix_string(this->contacts[i].get_first_name()) << " | "
			<< this->fix_string(this->contacts[i].get_last_name()) << " | " << this->fix_string(this->contacts[i].get_nickname()) << std::endl;
		i++;
	}
	std::cout << std::endl;

	if (i == 0) {
		std::cout << "No contacts found." << std::endl;
		std::cout << std::endl;
	}
	else {
		int	input;
		std::cout << "Inform an index to see the phone number: " << std::endl;
		std::cout << ">>";
		std::getline(std::cin, index);
		std::stringstream ss(index);
		ss >> input;
		while (index.empty() || (input < 0) || (input > (i - 1))) {
			std::cout << "Input is empty or invalid." << std::endl;
			std::cout << std::endl;
			std::cout << "Inform an index: " << std::endl;
			std::cout << ">>";
			std::getline(std::cin, index);
			std::stringstream ss(index);
			ss >> input;
		}
		std::cout << std::endl;
		std::cout << "* CONTACT INFO *" << std::endl;
		std::cout << std::endl;
		std::cout << "First Name: " << this->contacts[input].get_first_name() << std::endl;
		std::cout << "Last Name: " << this->contacts[input].get_last_name() << std::endl;
		std::cout << "Nickname: " << this->contacts[input].get_nickname() << std::endl;
		std::cout << "Phone Number: " << this->contacts[input].get_phone_number() << std::endl;
		std::cout << "Darkest Secret: " << this->contacts[input].get_darkest_secret() << std::endl;
		std::cout << std::endl;
	}
	
	std::cout << "* PRESS ENTER TO GO BACK TO MENU *" << std::endl;
	std::getline(std::cin, index);
}
