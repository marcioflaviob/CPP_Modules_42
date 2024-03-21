/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 13:04:51 by mbrandao          #+#    #+#             */
/*   Updated: 2024/03/21 18:15:21 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

# include <string>
# include <iostream>

class Animal {

	protected:
		std::string type;

	public:
		Animal();
		Animal( const Animal &animal );
		virtual ~Animal();
		Animal & operator=( const Animal &animal );

		std::string getType() const;
		virtual void makeSound(void) const = 0;
	
	
};

#endif