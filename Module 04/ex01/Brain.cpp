/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 17:44:03 by mbrandao          #+#    #+#             */
/*   Updated: 2024/03/21 18:01:59 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "🧠 Brain default constructor called." << std::endl;
}

Brain::Brain( const Brain &brain ) {
	std::cout << "🧠 Brain copy constructor called." << std::endl;
	*this = brain;
}

Brain::~Brain() {
	std::cout << "🧠 Brain destructor called." << std::endl;
}

Brain & Brain::operator=( const Brain &brain ) {
	for (size_t i = 0; i < 100; i++)
		this->ideas[i] = brain.ideas[i];
	return (*this);
}
		