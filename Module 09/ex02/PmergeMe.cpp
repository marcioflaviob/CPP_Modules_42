/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 18:17:32 by mbrandao          #+#    #+#             */
/*   Updated: 2024/09/06 19:06:21 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {

}

PmergeMe::PmergeMe(const PmergeMe & src) {
	(void) src;
}

PmergeMe::~PmergeMe() {

}

int	PmergeMe::list_get(std::list<int> & arr, int index) {
	std::list<int>::iterator it = arr.begin();
	for (int i = 0; i < index; i++) {
		it++;
	}
	return (*it);
}

void PmergeMe::list_set(std::list<int> & arr, int index, int value) {
	std::list<int>::iterator it = arr.begin();
	for (int i = 0; i < index; i++) {
		it++;
	}
	*it = value;
}

PmergeMe & PmergeMe::operator=(const PmergeMe & src) {
	(void) src;
	return (*this);
}

std::vector<int> PmergeMe::parseArgs(int argc, char **argv) {
	if (argc < 2)
        throw std::invalid_argument("Error: no arguments.");
	std::vector<int> arr;
	for (int i = 1; i < argc; i++) {
		int arg = atoi(argv[i]);
		if (arg < 0)
			throw std::invalid_argument("Error: negative number.");
		arr.push_back(arg);
	}
	return (arr);
}

std::list<int> PmergeMe::list_parseArgs(int argc, char **argv) {
	std::list<int> arr;
	for (int i = 1; i < argc; i++) {
		arr.push_back(atoi(argv[i]));
	}
	return (arr);
}

void PmergeMe::merge(std::vector<int> & arr, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    std::vector<int> L(n1), R(n2);

    for (int i = 0; i < n1; i++) 
        L[i] = arr[left + i];
    
    for (int i = 0; i < n2; i++) 
        R[i] = arr[mid + 1 + i];

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k++] = L[i++];
        } else {
            arr[k++] = R[j++];
        }
    }

    while (i < n1) {
        arr[k++] = L[i++];
    }

    while (j < n2) {
        arr[k++] = R[j++];
    }
}

void PmergeMe::fordJohnsonMergeInsertionSort(std::vector<int> & arr, int left, int right) {
    if (left < right) {

		int mid = left + (right - left) / 2;

		// Recursively sort two halves
		fordJohnsonMergeInsertionSort(arr, left, mid);
		fordJohnsonMergeInsertionSort(arr, mid + 1, right);

		// Merge the sorted halves
		merge(arr, left, mid, right);
    }
}

void PmergeMe::list_merge(std::list<int> & arr, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    std::list<int> L(n1), R(n2);

    for (int i = 0; i < n1; i++) 
		list_set(L, i, list_get(arr, left + i));
    
    for (int i = 0; i < n2; i++) 
		list_set(R, i, list_get(arr, mid + 1 + i));

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (list_get(L, i) <= list_get(R, j)) {
			list_set(arr, k++, list_get(L, i++));
        } else {
			list_set(arr, k++, list_get(R, j++));
        }
    }

    while (i < n1) {
		list_set(arr, k++, list_get(L, i++));
    }

    while (j < n2) {
		list_set(arr, k++, list_get(R, j++));
    }
}

void PmergeMe::list_fordJohnsonMergeInsertionSort(std::list<int> & arr, int left, int right) {
    if (left < right) {

		int mid = left + (right - left) / 2;

		// Recursively sort two halves
		list_fordJohnsonMergeInsertionSort(arr, left, mid);
		list_fordJohnsonMergeInsertionSort(arr, mid + 1, right);

		// Merge the sorted halves
		list_merge(arr, left, mid, right);
    }
}