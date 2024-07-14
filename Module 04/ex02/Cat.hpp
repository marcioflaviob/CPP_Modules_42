/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 13:16:41 by mbrandao          #+#    #+#             */
/*   Updated: 2024/07/14 17:22:23 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal {
	private:
		Brain * brain;

	public:
		Cat();
		Cat( const Cat &cat );
		~Cat();
		Cat & operator=( const Cat &cat );
	
		void makeSound(void) const;
		
};

#endif