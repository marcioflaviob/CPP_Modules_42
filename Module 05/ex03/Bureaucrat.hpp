/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 19:41:21 by mbrandao          #+#    #+#             */
/*   Updated: 2024/03/23 14:03:46 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

# include <string>
# include <iostream>
# include "Form.hpp"

class Form;

class Bureaucrat {
	
	public:

		Bureaucrat( const std::string & name, int grade );
		Bureaucrat( const Bureaucrat & src );
		~Bureaucrat();

		Bureaucrat& operator=( const Bureaucrat& rhs );
		
		std::string getName() const;
		int         getGrade() const;

		void        incrementGrade();
		void        decrementGrade();

		void		signForm(Form & form);
		void		executeForm(Form const & form);
	
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
	
	private:
		Bureaucrat();
		
		std::string _name;
		int			_grade;

};

std::ostream &operator<<(std::ostream &stream, Bureaucrat &bc);

#endif