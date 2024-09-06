/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 18:32:34 by mbrandao          #+#    #+#             */
/*   Updated: 2024/09/06 19:09:01 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char **argv) {
	if (argc < 2) {
		std::cerr << "Error: no arguments." << std::endl;
		return 1;
	}
	
	PmergeMe p;
	std::vector<int> vec;
	std::list<int> lst;
	
	try {
		vec = p.parseArgs(argc, argv);
		lst = p.list_parseArgs(argc, argv);
	} catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;
		return 1;
	}

	std::cout << "Before: ";
	for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); it++) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;

	clock_t start = clock();
	p.fordJohnsonMergeInsertionSort(vec, 0, vec.size() - 1);
	clock_t end = clock();

	std::cout << "After: ";
	for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); it++) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;

	std::cout << "Time to process a range of " << vec.size() << " elements with std::vector: " << (double)(end - start) * 1000 / CLOCKS_PER_SEC << "ms" << std::endl;

	start = clock();
	p.list_fordJohnsonMergeInsertionSort(lst, 0, lst.size() - 1);
	end = clock();

	std::cout << "Time to process a range of " << lst.size() << " elements with std::list: " << (double)(end - start) * 1000 / CLOCKS_PER_SEC << "ms" << std::endl;
	
	
	return 0;
}