/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 20:18:48 by mbrandao          #+#    #+#             */
/*   Updated: 2024/07/28 21:27:26 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SPAN_H
# define SPAN_H

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <unistd.h>
#include <climits>

class Span
{
	private:
	
		unsigned int _n;
		std::vector<int> _v;

	public:
	
		Span();
		Span(unsigned int n);
		Span(const Span &obj);
		~Span();
		Span &operator=(const Span &obj);
		void addNumber(int n);
		void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		int shortestSpan();
		int longestSpan();
		
		class FullContainer : public std::exception {
			public:
				char const * what() const throw() {
					return "Container is full.";
				}
		};
		
		class NotEnoughNumbers : public std::exception {
			public:
				char const * what() const throw() {
					return "Not enough numbers to calculate span.";
				}
		};
		
};


#endif