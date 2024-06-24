/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 20:37:41 by mbrandao          #+#    #+#             */
/*   Updated: 2024/05/19 20:45:12 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int main()
{
    Array<int> numbers(3);
    
    numbers[0] = 42;
    numbers[1] = 24;
    numbers[2] = 1337;

    try {
        numbers[3] = 1; //Should throw an exception
    }
    catch(const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    Array<std::string> strings(2);

    strings[0] = "Hello";
    strings[1] = "World";
    
    try {
        strings[2] = "!"; //Should throw an exception
    }
    catch(const std::exception& e) {
        std::cerr << e.what() << '\n';
    }

    std::cout << "Numbers size: " << numbers.size() << std::endl;
    std::cout << "Strings size: " << strings.size() << std::endl;

    return 0;
}