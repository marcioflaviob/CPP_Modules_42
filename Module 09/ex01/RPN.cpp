/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 14:40:26 by mbrandao          #+#    #+#             */
/*   Updated: 2024/07/30 15:28:42 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {

}

RPN::RPN(std::stack<double> num) : numbers(num) {

}

RPN::RPN(const RPN &src) {
	this->numbers = src.numbers;
}

RPN::~RPN() {

}

RPN & RPN::operator=(const RPN &src) {
	this->numbers = src.numbers;
	return (*this);
}

void RPN::calc(std::string arg) {
	for (size_t i = 0; i < arg.size(); i++)
	{
		char c = arg[i];

		if (c == ' ') {
			continue;
		}
		else if (isdigit(c)) {
			int number = c - '0';
			numbers.push(number);
		}
		else if (c == '+' && numbers.size() >= 2) {
			double b = numbers.top();
			numbers.pop();
			double a = numbers.top();
			numbers.pop();
			numbers.push(a + b);
		}
		else if (c == '-' && numbers.size() >= 2) {
			double b = numbers.top();
			numbers.pop();
			double a = numbers.top();
			numbers.pop();
			numbers.push(a - b);
		}
		else if (c == '*' && numbers.size() >= 2) {
			double b = numbers.top();
			numbers.pop();
			double a = numbers.top();
			numbers.pop();
			numbers.push(a * b);
		}
		else if (c == '/' && numbers.size() >= 2) {
			double b = numbers.top();
			numbers.pop();
			double a = numbers.top();
			numbers.pop();
			numbers.push(a / b);
		}
		else {
			throw InvalidArgument();
			return;
		}
	}

	if (numbers.size() == 1) {
		double result = numbers.top();
		numbers.pop();
		std::cout << result << std::endl;
	}
	else {
		throw InvalidArgument();
	}
}
