/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 14:37:25 by mbrandao          #+#    #+#             */
/*   Updated: 2024/05/10 16:13:36 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void	even_maker(int &a) {
	if (a % 2 != 0)
		a++;
}

int	main() {
	int a[] = {1, 2, 3, 4, 5, 5};
	
	for(int i = 0; i < 6; i++) {
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;

	::iter(a, 6, even_maker);

	for(int i = 0; i < 6; i++) {
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;

}