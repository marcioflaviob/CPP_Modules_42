/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 13:27:30 by mbrandao          #+#    #+#             */
/*   Updated: 2024/03/21 18:18:10 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* animal = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	std::cout << std::endl;
	
	std::cout << "Type: " << dog->getType() << std::endl;
	std::cout << "Type: " << cat->getType() << std::endl;
	
	std::cout << std::endl;
	
	cat->makeSound();
	dog->makeSound();
	animal->makeSound();
	
	std::cout << std::endl;
	std::cout << std::endl;

	const WrongAnimal* wrongAnimal = new WrongAnimal();
	const WrongAnimal* wrongCat = new WrongCat();

	std::cout << std::endl;
	
	std::cout << "Type: " << wrongAnimal->getType() << std::endl;
	std::cout << "Type: " << wrongCat->getType() << std::endl;
	
	std::cout << std::endl;

	wrongAnimal->makeSound();
	wrongCat->makeSound(); // Since the function makesound is not virtual in the super class. It can't be overridden in the sub classes
	
	std::cout << std::endl;
	std::cout << std::endl;

	delete animal;
	delete dog;
	delete cat;

	std::cout << std::endl;
	
	delete wrongAnimal;
	delete wrongCat;

	return 0;
}