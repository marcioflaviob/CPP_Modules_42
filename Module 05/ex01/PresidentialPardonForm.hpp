/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 23:39:11 by mbrandao          #+#    #+#             */
/*   Updated: 2024/03/22 23:44:37 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_H
# define PRESIDENTIALPARDONFORM_H

# include <string>
# include <iostream>

# include "AForm.hpp"

class PresidentialPardonForm : public AForm {
	
	public:

		PresidentialPardonForm( std::string target );
		PresidentialPardonForm( const PresidentialPardonForm & copy );
		~PresidentialPardonForm();

		PresidentialPardonForm& operator=( const PresidentialPardonForm& copy );

		void execute(Bureaucrat const & bc) const;

	private:
		std::string target;

		PresidentialPardonForm();

};

#endif