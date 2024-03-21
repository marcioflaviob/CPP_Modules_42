/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 13:23:38 by mbrandao          #+#    #+#             */
/*   Updated: 2024/03/21 17:42:55 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal {
	private:
		Brain * brain;

	public:
		Dog();
		Dog( const Dog &dog );
		~Dog();
	
		void makeSound(void) const;
		
};

#endif