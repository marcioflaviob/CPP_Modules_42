/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 23:27:13 by mbrandao          #+#    #+#             */
/*   Updated: 2024/05/10 13:57:48 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Base.hpp"
#include "../includes/A.hpp"
#include "../includes/B.hpp"
#include "../includes/C.hpp"


Base * generate(void) {
	switch (rand() % 3) {
	case 0:
		return (new A());
		break;
	case 1:
		return (new B());
		break;
	case 2:
		return (new C());
		break;
	default:
		perror("Error");
		return (NULL);
	}
}

void identify(Base* p) {
	if (dynamic_cast<A*>(p) != NULL)
        std::cout << "The type is A" << std::endl;
    else if (dynamic_cast<B*>(p) != NULL)
        std::cout << "The type is B" << std::endl;
    else if (dynamic_cast<C*>(p) != NULL)
        std::cout << "The type is C" << std::endl;
    else
        std::cout << "Unknown type" << std::endl;
}

void identify(Base& p) {
	try {
        (void)dynamic_cast<A&>(p);
        std::cout << "The type is A" << std::endl;
    } catch (std::bad_cast&) {
        try {
            (void)dynamic_cast<B&>(p);
            std::cout << "The type is B" << std::endl;
        } catch (std::bad_cast&) {
            try {
                (void)dynamic_cast<C&>(p);
                std::cout << "The type is C" << std::endl;
            } catch (std::bad_cast&) {
                std::cout << "Unknown type" << std::endl;
            }
        }
    }
}

int main() {
	srand(time(NULL));
	
	int	i = 0;
	while (i < 2)
	{
		Base *Test = generate();

		identify(Test);
		identify(*Test);
		delete (Test);

		std::cout << std::endl;
		i++;
	}
	return (0);
}