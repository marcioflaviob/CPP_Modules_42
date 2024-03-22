/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 21:50:48 by mbrandao          #+#    #+#             */
/*   Updated: 2024/03/22 22:32:14 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_H
# define SHRUBBERYCREATIONFORM_H

# include <string>
# include <iostream>
# include <fstream>
# include "AForm.hpp"

class ShrubberyCreationForm : public AForm {

	public:

		ShrubberyCreationForm( std::string target );
		ShrubberyCreationForm( const ShrubberyCreationForm & copy );
		~ShrubberyCreationForm();

		ShrubberyCreationForm& operator=( const ShrubberyCreationForm& copy );

		void execute(Bureaucrat const & bc) const;

		class FileNotOpenedException : public std::exception
		{
			public:
				virtual const char* what() const throw() {
					return ("Couldn't open the file.");
				};
		};

	private:
		std::string target;

		ShrubberyCreationForm();

};

#endif