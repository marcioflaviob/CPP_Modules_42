/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 21:25:41 by mbrandao          #+#    #+#             */
/*   Updated: 2024/03/22 22:29:51 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : name("Unnamed"), grade_to_sign(150), grade_to_execute(150) {
	this->isSigned = false;
}

AForm::AForm(std::string name, int grade_to_sign, int grade_to_execute)
	: name(name), grade_to_sign(grade_to_sign), grade_to_execute(grade_to_execute) {
	this->isSigned = false;
	if (grade_to_sign < 1 || grade_to_execute < 1)
		throw AForm::GradeTooHighException();
	if (grade_to_sign > 150 || grade_to_execute > 150)
		throw AForm::GradeTooLowException();
}

AForm::AForm( const AForm & copy )
	: name(copy.name), grade_to_sign(copy.grade_to_sign), grade_to_execute(copy.grade_to_execute) {
	this->isSigned = copy.isSigned;
}

AForm::~AForm() {
	
}

std::string AForm::getName() const {
	return (this->name);
}

int AForm::getSignGrade() const {
	return (this->grade_to_sign);
}
int AForm::getExecGrade() const {
	return (this->grade_to_execute);
}

bool AForm::getIsSigned() const {
	return (this->isSigned);
}

void AForm::beSigned(Bureaucrat bc) {
	if (bc.getGrade() > this->grade_to_sign)
		throw AForm::GradeTooLowException();
	if (this->isSigned == true)
		throw AForm::AlreadySigned();
	this->isSigned = true;
}

AForm & AForm::operator=(const AForm & copy) {
    if (this != &copy) {
        this->isSigned = copy.getIsSigned();
    }
    return *this;
}

void AForm::execute(Bureaucrat const & bc) const {
	(void) bc;
	std::cout << "Form undefined." << std::endl;
}

std::ostream & operator<<(std::ostream &stream, AForm &form) {
	stream << "AForm " << form.getName() << " is " << (form.getIsSigned() ? "signed" : "unsigned") << " and requires a grade "
		<< form.getSignGrade() << " to sign and a grade "<< form.getExecGrade() << " to execute.";
	return stream;
}
		