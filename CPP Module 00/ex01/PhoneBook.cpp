/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 21:28:06 by mbrandao          #+#    #+#             */
/*   Updated: 2024/03/18 01:08:55 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook(void) {
	return;
}

PhoneBook::~PhoneBook(void) {
	return;
}

std::string PhoneBook::fix_string(std::string str) {
	if (str.length() < 10)
		str.resize(10, ' ');
	else if (str.length() >= 10) {
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
	
	std::cout << "* ADDING A NEW CONTACT *" << std::endl;
	std::cout << "Inform the first name: " << std::endl;
	std::getline(std::cin, first_name);
	while (first_name.empty()) {
		std::cout << "Input is empty." << std::endl;
		std::cout << std::endl;
		std::cout << "Inform the first name: " << std::endl;
		std::getline(std::cin, first_name);
	}

	std::cout << "Inform the last name: " << std::endl;
	std::getline(std::cin, last_name);
	while (last_name.empty()) {
		std::cout << "Input is empty." << std::endl;
		std::cout << std::endl;
		std::cout << "Inform the last name: " << std::endl;
		std::getline(std::cin, last_name);
	}
	
	std::cout << "Inform the nickname: " << std::endl;
	std::getline(std::cin, nickname);
	while (nickname.empty()) {
		std::cout << "Input is empty." << std::endl;
		std::cout << std::endl;
		std::cout << "Inform the nickname: " << std::endl;
		std::getline(std::cin, nickname);
	}
	
	std::cout << "Inform the phone number: " << std::endl;
	std::getline(std::cin, phone_number);
	while (phone_number.empty()) {
		std::cout << "Input is empty." << std::endl;
		std::cout << std::endl;
		std::cout << "Inform the phone number: " << std::endl;
		std::getline(std::cin, phone_number);
	}

	Contact contact(first_name, last_name, nickname, phone_number);
	
	int i = 0;
	while (i < 8 && !this->contacts[i].isEmpty())
		i++;
	if (i < 8)
		this->contacts[i] = contact;
	else
		this->contacts[0] = contact;
}

void PhoneBook::search(void) {
	int 		i = 0;
	std::string index;

	std::cout << "* SEARCHING A CONTACT *" << std::endl;
	std::cout << std::endl;
	
	if (!this->contacts[0].isEmpty())
		std::cout << this->fix_string("Index") << " | " << this->fix_string("First Name") << " | "
			<< this->fix_string("Last Name") << " | " << this->fix_string("Nickname") << std::endl;

	while (!this->contacts[i].isEmpty()) {
		index = index.to_string(i);
		std::cout << this->fix_string(index) << " | " << this->fix_string(this->contacts[i].first_name) << " | "
			<< this->fix_string(this->contacts[i].last_name) << " | " << this->fix_string(this->contacts[i].nickname) << std::endl;
		i++;
	}

	if (i == 0) {
		std::cout << "No contacts found." << std::endl;
		std::cout << std::endl;
	}
	else {
		int	input;
		std::cout << "Inform an index to see the phone number: " << std::endl;
		std::cout << ">>";
		std::getline(std::cin, index);
		input = std::stoi(index);
		while (index.empty() || (input < 0) || (input > i)) {
			std::cout << "Input is empty or invalid." << std::endl;
			std::cout << std::endl;
			std::cout << "Inform an index: " << std::endl;
			std::cout << ">>";
			std::getline(std::cin, index);
			input = std::stoi(index);
		}
		std::cout << std::endl;
		std::cout << "* CONTACT INFO *" << std::endl;
		std::cout << std::endl;
		std::cout << "First Name: " << this->contacts[input].first_name << std::endl;
		std::cout << "Last Name: " << this->contacts[input].last_name << std::endl;
		std::cout << "Nickname: " << this->contacts[input].nickname << std::endl;
		std::cout << "Phone Number: " << this->contacts[input].phone_number << std::endl;
		std::cout << std::endl;
		
		std::cout << "* PRESS ENTER TO GO BACK TO MENU *" << std::endl;
		std::cin >> index;
	}
}
// TODO FIX STOI AND TO_STRING