/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 20:22:35 by mbrandao          #+#    #+#             */
/*   Updated: 2024/03/21 21:23:28 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name("Unnamed"), grade_to_sign(150), grade_to_execute(150) {
	this->isSigned = false;
}

Form::Form(std::string name, int grade_to_sign, int grade_to_execute)
	: name(name), grade_to_sign(grade_to_sign), grade_to_execute(grade_to_execute) {
	this->isSigned = false;
	if (grade_to_sign < 1 || grade_to_execute < 1)
		throw Form::GradeTooHighException();
	if (grade_to_sign > 150 || grade_to_execute > 150)
		throw Form::GradeTooLowException();
}

Form::Form( const Form & copy )
	: name(copy.name), grade_to_sign(copy.grade_to_sign), grade_to_execute(copy.grade_to_execute) {
	this->isSigned = copy.isSigned;
}

Form::~Form() {
	
}

std::string Form::getName() const {
	return (this->name);
}

int Form::getSignGrade() const {
	return (this->grade_to_sign);
}
int Form::getExecGrade() const {
	return (this->grade_to_execute);
}

bool Form::getIsSigned() const {
	return (this->isSigned);
}

void Form::beSigned(Bureaucrat bc) {
	if (bc.getGrade() > this->grade_to_sign)
		throw Form::GradeTooLowException();
	if (this->isSigned == true)
		throw Form::AlreadySigned();
	this->isSigned = true;
}

Form & Form::operator=(const Form & copy) {
    if (this != &copy) {
        this->isSigned = copy.getIsSigned();
    }
    return *this;
}

std::ostream & operator<<(std::ostream &stream, Form &form) {
	stream << "Form " << form.getName() << " is " << (form.getIsSigned() ? "signed" : "unsigned") << " and requires a grade "
		<< form.getSignGrade() << " to sign and a grade "<< form.getExecGrade() << " to execute.";
	return stream;
}
		