/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 16:30:28 by mbrandao          #+#    #+#             */
/*   Updated: 2024/09/06 19:01:23 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <vector>
# include <list>
# include <ctime>
# include <cstdlib>
# include <cstdio>

class PmergeMe {
	private:
		PmergeMe(const PmergeMe &src);
		PmergeMe &operator=(const PmergeMe &src);
	
	public:
		PmergeMe();
		~PmergeMe();

		std::vector<int> parseArgs(int argc, char **argv);
		std::list<int> list_parseArgs(int argc, char **argv);

		void merge(std::vector<int> & arr, int left, int mid, int right);
		void insertionSort(std::vector<int> & arr, int left, int right);
		void fordJohnsonMergeInsertionSort(std::vector<int> & arr, int left, int right);

		int	list_get(std::list<int> & arr, int index);
		void list_set(std::list<int> & arr, int index, int value);

		void list_merge(std::list<int> & arr, int left, int mid, int right);
		void list_insertionSort(std::list<int> & arr, int left, int right);
		void list_fordJohnsonMergeInsertionSort(std::list<int> & arr, int left, int right);
};

#endif