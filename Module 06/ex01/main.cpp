/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 21:02:19 by mbrandao          #+#    #+#             */
/*   Updated: 2024/03/24 21:06:58 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
	Data data(15678, "Hello World");
	Data* ptr = &data;

	uintptr_t raw = Serializer::serialize(ptr);
	Data* ptr2 = Serializer::deserialize(raw);

	std::cout << "Value: " << ptr2->value << std::endl;
	std::cout << "String: " << ptr2->str << std::endl;

	return 0;
}