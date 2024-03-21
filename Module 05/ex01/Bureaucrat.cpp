/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 19:51:53 by mbrandao          #+#    #+#             */
/*   Updated: 2024/03/21 21:23:41 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

		Bureaucrat::Bureaucrat() {
			this->_name = "Unnamed";
			this->_grade = 150;
		}
		
		Bureaucrat::Bureaucrat( const std::string & name, int grade ) {
			this->_name = name;
			this->_grade = grade;
			if (this->_grade < 1)
				throw Bureaucrat::GradeTooHighException();
			if (this->_grade > 150)
				throw Bureaucrat::GradeTooLowException();
		}

		Bureaucrat::Bureaucrat( const Bureaucrat & src ) {
			*this = src;
		}

		Bureaucrat::~Bureaucrat() {
			
		}

		Bureaucrat& Bureaucrat::operator=( const Bureaucrat& src ) {
			this->_name = src._name;
			this->_grade = src._grade;
			return (*this);
		}

		std::ostream &operator<<(std::ostream &stream, Bureaucrat &bc) {
			stream << bc.getName() << ", bureaucrat grade " << bc.getGrade() << ".";
			return stream;
		}
		
		std::string Bureaucrat::getName() const {
			return (this->_name);
		}

		int         Bureaucrat::getGrade() const {
			return (this->_grade);
		}

		void        Bureaucrat::incrementGrade() {
			if ((this->_grade - 1) < 1)
				throw Bureaucrat::GradeTooHighException();
			this->_grade--;
		}

		void        Bureaucrat::decrementGrade() {
			if ((this->_grade + 1) > 150)
				throw Bureaucrat::GradeTooLowException();
			this->_grade++;
		}

		void		Bureaucrat::signForm(Form & form) {
			try
			{
				form.beSigned(*this);
				std::cout << "Bureaucrat " << this->getName() << " signed Form " << form.getName() << std::endl;
			}
			catch(const std::exception& e)
			{
				std::cout << "Bureaucrat " << this->getName() << " couldn't sign Form " << form.getName()
					<< " because " << e.what() << std::endl;
			}	
		}
		