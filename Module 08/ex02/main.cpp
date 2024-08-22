/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 12:33:43 by mbrandao          #+#    #+#             */
/*   Updated: 2024/08/22 13:11:24 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;
	
	mstack.push(5);
	mstack.push(17);
	mstack.push(23);
	mstack.push(55);
	
	std::cout << "Top is " << mstack.top() << std::endl;
	
	mstack.pop();

	std::cout << mstack.size() << std::endl;
	
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	
	std::cout << "Top is " << mstack.top() << std::endl;
	
	mstack.pop();
	mstack.pop();
	
	std::cout << "Top is " << mstack.top() << std::endl;
	
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	std::cout << "All numbers" << std::endl;
	
	++it;
	--it;
	while (it != ite) {
		std::cout << *it << std::endl;
		++it;
	}

	std::cout << "Copy constructor" << std::endl;

	MutantStack<int> copy(mstack);

	MutantStack<int>::iterator it2 = copy.begin();
	MutantStack<int>::iterator ite2 = copy.end();

	while (it2 != ite2) {
		std::cout << *it2 << std::endl;
		++it2;
	}
	
	std::stack<int> s(mstack);

	std::cout << "Top of stack is " << s.top() << std::endl;

    return 0;
}