/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 23:02:14 by mbrandao          #+#    #+#             */
/*   Updated: 2024/03/23 14:03:25 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

		RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45) {
			this->isSigned = false;
		};

		RobotomyRequestForm::RobotomyRequestForm( std::string target ) : Form("RobotomyRequestForm", 72, 45) {
			this->isSigned = false;
			this->target = target;
		}

		RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & copy ) : Form("RobotomyRequestForm", 72, 45) {
			*this = copy;
		}
		
		RobotomyRequestForm::~RobotomyRequestForm() {
			
		}

		RobotomyRequestForm& RobotomyRequestForm::operator=( const RobotomyRequestForm& copy ) {
			this->isSigned = copy.getIsSigned();
			return (*this);
		}

		void RobotomyRequestForm::execute(Bureaucrat const & bc) const {
			srand(time(0)); // This sets the seed for the random number generator based on the actual time
			bool success = rand() % 2;
			if (this->isSigned == false)
				throw Form::NotSigned();
			if (bc.getGrade() > this->grade_to_execute)
				throw Form::GradeTooLowException();
			std::cout << "*drilling noises*" << std::endl;
			if (success)
				std::cout << this->target << " has been robotomized successfully." << std::endl;
			else
				std::cout << this->target << " has failed to be robotomized." << std::endl;
		}