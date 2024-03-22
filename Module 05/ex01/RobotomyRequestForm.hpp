/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 22:59:11 by mbrandao          #+#    #+#             */
/*   Updated: 2024/03/22 23:32:10 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_H
# define ROBOTOMYREQUESTFORM_H

# include <string>
# include <iostream>
# include <cstdlib>
# include "AForm.hpp"

class RobotomyRequestForm : public AForm {
	
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