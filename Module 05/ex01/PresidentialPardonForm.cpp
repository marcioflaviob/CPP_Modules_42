/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 23:39:42 by mbrandao          #+#    #+#             */
/*   Updated: 2024/03/22 23:43:04 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5) {
	this->isSigned = false;
}

PresidentialPardonForm::PresidentialPardonForm( std::string target ) : AForm("PresidentialPardonForm", 25, 5) {
	this->isSigned = false;
	this->target = target;
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm & copy ) {
	*this = copy;
}

PresidentialPardonForm::~PresidentialPardonForm() {
	
}

PresidentialPardonForm& PresidentialPardonForm::operator=( const PresidentialPardonForm& copy ) {
	this->isSigned = copy.getIsSigned();
	return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const & bc) const {
	if (this->isSigned == false)
		throw AForm::NotSigned();
	if (bc.getGrade() > this->grade_to_execute)
		throw AForm::GradeTooLowException();
	std::cout << this->target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}