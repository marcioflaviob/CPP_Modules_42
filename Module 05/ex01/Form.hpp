/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 20:16:59 by mbrandao          #+#    #+#             */
/*   Updated: 2024/03/22 23:52:30 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H

# include <string>
# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

	private:
		const std::string name;
		bool isSigned;
		const int grade_to_sign;
		const int grade_to_execute;
		Form();

	public:
		Form(std::string name, int grade_to_sign, int grade_to_execute);
		Form( const Form & copy );
		~Form();

		Form & operator=(const Form & copy);

		std::string getName() const;
		int getSignGrade() const;
		int getExecGrade() const;
		bool getIsSigned() const;
		void beSigned(Bureaucrat bc);

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw() {
					return ("Grade too high.");
				};
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw() {
					return ("Grade too low.");
				};
		};
		class AlreadySigned : public std::exception
		{
			public:
				virtual const char* what() const throw() {
					return ("Form already signed");
				};
		};
	
};

std::ostream &operator<<(std::ostream &stream, Form &form);

#endif