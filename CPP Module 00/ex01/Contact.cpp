/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 21:20:17 by mbrandao          #+#    #+#             */
/*   Updated: 2024/03/18 01:01:07 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include "Contact.hpp"

Contact::Contact(void) {
	return;
}

Contact::Contact(std::string first_name, std::string last_name, std::string nickname, std::string phone_number) {
	this->first_name = first_name;
	this->last_name = last_name;
	this->nickname = nickname;
	this->phone_number = phone_number;
	return;
}

Contact::~Contact(void) {
	return;
}

bool Contact::isEmpty() {
    return first_name.empty() && last_name.empty() && nickname.empty() && phone_number.empty();
}
