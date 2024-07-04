/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 21:20:17 by mbrandao          #+#    #+#             */
/*   Updated: 2024/07/04 23:10:09 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include "Contact.hpp"

Contact::Contact(void) {
	return;
}

Contact::Contact(std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string darkest_secret) {
	this->first_name = first_name;
	this->last_name = last_name;
	this->nickname = nickname;
	this->phone_number = phone_number;
	this->darkest_secret = darkest_secret;
	return;
}

Contact::~Contact(void) {
	return;
}

bool Contact::isEmpty() {
    return first_name.empty() && last_name.empty() && nickname.empty() && phone_number.empty() && darkest_secret.empty();
}

std::string Contact::get_first_name(void) {
	return (this->first_name);
}
std::string Contact::get_last_name(void) {
	return (this->last_name);
}
std::string Contact::get_nickname(void) {
	return (this->nickname);
}
std::string Contact::get_phone_number(void) {
	return (this->phone_number);
}

std::string Contact::get_darkest_secret(void) {
	return (this->darkest_secret);
}

void Contact::set_first_name(std::string first_name) {
	this->first_name = first_name;
}

void Contact::set_last_name(std::string last_name) {
	this->last_name = last_name;
}

void Contact::set_nickname(std::string nickname) {
	this->nickname = nickname;
}

void Contact::set_phone_number(std::string phone_number) {
	this->phone_number = phone_number;
}

void Contact::set_darkest_secret(std::string darkest_secret) {
	this->darkest_secret = darkest_secret;
}
