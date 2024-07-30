/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 14:33:28 by mbrandao          #+#    #+#             */
/*   Updated: 2024/07/30 15:28:14 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <string>
#include <stack>

class RPN {
	private:

		std::stack<double> numbers;
		
	public:

		RPN();
		RPN(std::stack<double> num);
		RPN(const RPN &src);
		~RPN();
		RPN &operator=(const RPN &src);
		void calc(std::string arg);

		class	InvalidArgument : public std::exception {
		public:
			virtual const char* what() const throw() {
					return ("Invalid Argument.");
				};
		};
		
};


#endif