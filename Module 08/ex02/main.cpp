/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 12:33:43 by mbrandao          #+#    #+#             */
/*   Updated: 2024/07/30 12:48:06 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;
	
	mstack.push(5);
	mstack.push(17);
	
	std::cout << mstack.top() << std::endl;
	
	mstack.pop();

	std::cout << mstack.size() << std::endl;
	
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	
	++it;
	--it;
	while (it != ite) {
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

    // std::list<int> list;
    
    // list.push_back(5);
    // list.push_back(17);
    
    // std::cout << list.back() << std::endl;
    
    // list.pop_back();

    // std::cout << list.size() << std::endl;
    
    // list.push_back(3);
    // list.push_back(5);
    // list.push_back(737);
    // list.push_back(0);
    
    // std::list<int>::iterator it = list.begin();
    // std::list<int>::iterator ite = list.end();
    
    // ++it;
    // --it;
    // while (it != ite) {
    //     std::cout << *it << std::endl;
    //     ++it;
    // }

    return 0;
}