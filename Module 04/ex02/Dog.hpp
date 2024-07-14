/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 13:23:38 by mbrandao          #+#    #+#             */
/*   Updated: 2024/07/14 17:22:43 by mbrandao         ###   ########.fr       */
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
		Dog & operator=( const Dog &dog );
	
		void makeSound(void) const;
		
};

#endif