/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 20:35:11 by mbrandao          #+#    #+#             */
/*   Updated: 2024/07/28 21:27:39 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span() : _n(0) {
	std::cout << "Span default constructor called" << std::endl;	
}

Span::Span(unsigned int n) : _n(n) {
	std::cout << "Span constructor called" << std::endl;
}

Span::Span(const Span &obj) {
	this->_n = obj._n;
	this->_v = obj._v;
}

Span::~Span() {
	std::cout << "Span destructor called" << std::endl;
}

Span & Span::operator=(const Span &obj) {
	this->_n = obj._n;
	this->_v = obj._v;
	return *this;
}

void Span::addNumber(int n) {
	if (this->_v.size() == this->_n)
		throw FullContainer();
	this->_v.push_back(n);
}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end) {
	if (this->_v.size() + std::distance(begin, end) > this->_n)
		throw FullContainer();
	this->_v.insert(this->_v.end(), begin, end);
}

int Span::shortestSpan() {
	if (this->_v.size() < 2)
		throw NotEnoughNumbers();
	std::vector<int> tmp = this->_v;
	std::sort(tmp.begin(), tmp.end());
    int minSpan = INT_MAX;
    for (size_t i = 0; i < tmp.size() - 1; ++i) {
        int span = tmp[i + 1] - tmp[i];
        if (span < minSpan) {
            minSpan = span;
        }
    }
    return minSpan;
}

int Span::longestSpan() {
	if (this->_v.size() < 2)
		throw NotEnoughNumbers();
	std::vector<int> tmp = this->_v;
	std::sort(tmp.begin(), tmp.end());
	
    return tmp.back() - tmp.front();
}
