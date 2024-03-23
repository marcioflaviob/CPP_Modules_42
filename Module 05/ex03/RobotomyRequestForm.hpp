/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 22:59:11 by mbrandao          #+#    #+#             */
/*   Updated: 2024/03/23 14:03:00 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_H
# define ROBOTOMYREQUESTFORM_H

# include <string>
# include <iostream>
# include <cstdlib>
# include "Form.hpp"

class RobotomyRequestForm : public Form {
	
	public:

		RobotomyRequestForm( std::string target );
		RobotomyRequestForm( const RobotomyRequestForm & copy );
		~RobotomyRequestForm();

		RobotomyRequestForm& operator=( const RobotomyRequestForm& copy );

		void execute(Bureaucrat const & bc) const;

	private:
		std::string target;

		RobotomyRequestForm();

};

#endif