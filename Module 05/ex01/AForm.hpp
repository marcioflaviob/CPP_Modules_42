/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 21:23:29 by mbrandao          #+#    #+#             */
/*   Updated: 2024/03/22 22:48:11 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_H
# define AFORM_H

# include <string>
# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {

	protected:
		const std::string name;
		bool isSigned;
		const int grade_to_sign;
		const int grade_to_execute;
		AForm();

	public:
		AForm(std::string name, int grade_to_sign, int grade_to_execute);
		AForm( const AForm & copy );
		~AForm();

		AForm & operator=(const AForm & copy);

		std::string getName() const;
		int getSignGrade() const;
		int getExecGrade() const;
		bool getIsSigned() const;
		void beSigned(Bureaucrat bc);
		virtual void execute(Bureaucrat const & bc) const;

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
		class NotSigned : public std::exception
		{
			public:
				virtual const char* what() const throw() {
					return ("Form not signed");
				};
		};
	
};

std::ostream &operator<<(std::ostream &stream, AForm &form);

#endif