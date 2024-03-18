/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 19:45:25 by mbrandao          #+#    #+#             */
/*   Updated: 2024/03/17 20:45:43 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <cctype>

int main(int argc, char **argv)
{
	int i = 1;
	
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
	while (argv[i])
	{
		std::string str(argv[i]);
		std::transform(str.begin(), str.end(), str.begin(), ::toupper);
		std::cout << str;
		i++;
	}
}
