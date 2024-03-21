/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 13:27:30 by mbrandao          #+#    #+#             */
/*   Updated: 2024/03/21 18:19:40 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"

int main()
{
	// const Animal* animal = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	std::cout << std::endl;
	
	std::cout << "Type: " << dog->getType() << std::endl;
	std::cout << "Type: " << cat->getType() << std::endl;
	
	std::cout << std::endl;
	
	// animal->makeSound();
	cat->makeSound();
	dog->makeSound();
	
	std::cout << std::endl;

	// delete animal;
	delete dog;
	delete cat;
}