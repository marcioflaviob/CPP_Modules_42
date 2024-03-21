/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 13:27:30 by mbrandao          #+#    #+#             */
/*   Updated: 2024/03/21 18:14:11 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"

int main()
{
	const Animal * animals[10];

	int i = 0;

	while (i < 5)
		animals[i++] = new Dog();
	while (i < 10)
		animals[i++] = new Cat();
	
	std::cout << std::endl;
	std::cout << "End of array. Starting deletions..." << std::endl;
	std::cout << std::endl;

	i = 0;
	while (i < 10)
		delete animals[i++];
	
	return 0;
}