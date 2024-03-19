/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 18:32:09 by mbrandao          #+#    #+#             */
/*   Updated: 2024/03/19 19:20:08 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replacer.hpp"

int	main (int argc, char **argv) {
	if (argc != 4) {
		std::cout << "Usage: ./Replacer [filename] [string_to_find] [string_to_replace]" << std::endl;
		return 0;
	}
	Replacer replacer(argv[1]);
	replacer.replace(argv[2], argv[3]);
}