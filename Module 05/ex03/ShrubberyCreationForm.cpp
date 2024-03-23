/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 21:56:52 by mbrandao          #+#    #+#             */
/*   Updated: 2024/03/23 14:03:17 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 145, 137) {
	this->isSigned = false;
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string target ) : Form("ShrubberyCreationForm", 145, 137) {
	this->isSigned = false;
	this->target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm & copy ) {
	*this = copy;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=( const ShrubberyCreationForm& copy ) {
	this->isSigned = copy.getIsSigned();
	return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const & bc) const {
	if (this->isSigned == false)
		throw Form::NotSigned();
	if (bc.getGrade() > this->grade_to_execute)
		throw Form::GradeTooLowException();
	std::ofstream outfile((this->target + "_shrubbery").c_str(), std::ios::out | std::ios::trunc);
	if (!outfile.is_open())
		throw ShrubberyCreationForm::FileNotOpenedException();
	outfile << "                                                         ." << std::endl;
	outfile << "                                              .         ;  " << std::endl;
	outfile << "                 .              .              ;%     ;;   " << std::endl;
	outfile << "                   ,           ,                :;%  %;   " << std::endl;
	outfile << "                    :         ;                   :;%;'     .,   " << std::endl;
	outfile << "           ,.        %;     %;            ;        %;'    ,;" << std::endl;
	outfile << "             ;       ;%;  %%;        ,     %;    ;%;    ,%'" << std::endl;
	outfile << "              %;       %;%;      ,  ;       %;  ;%;   ,%;'" << std::endl;
	outfile << "               ;%;      %;        ;%;        % ;%;  ,%;'" << std::endl;
	outfile << "                `%;.     ;%;     %;'         `;%%;.%;'" << std::endl;
	outfile << "                 `:;%.    ;%%. %@;        %; ;@%;%'" << std::endl;
	outfile << "                    `:%;.  :;bd%;          %;@%;'" << std::endl;
	outfile << "                      `@%:.  :;%.         ;@@%;'   " << std::endl;
	outfile << "                        `@%.  `;@%.      ;@@%;         " << std::endl;
	outfile << "                          `@%%. `@%%    ;@@%;        " << std::endl;
	outfile << "                            ;@%. :@%%  %@@%;       " << std::endl;
	outfile << "                              %@bd%%%bd%%:;     " << std::endl;
	outfile << "                                #@%%%%%:;;" << std::endl;
	outfile << "                                %@@%%%::;" << std::endl;
	outfile << "                                %@@@%(o);  . '         " << std::endl;
	outfile << "                                %@@@o%;:(.,'         " << std::endl;
	outfile << "                            `.. %@@@o%::;         " << std::endl;
	outfile << "                               `)@@@o%::;         " << std::endl;
	outfile << "                                %@@(o)::;        " << std::endl;
	outfile << "                               .%@@@@%::;         " << std::endl;
	outfile << "                               ;%@@@@%::;.          " << std::endl;
	outfile << "                              ;%@@@@%%:;;;. " << std::endl;
	outfile << "                          ...;%@@@@@%%:;;;;,.. " << std::endl;
	outfile.close();
}