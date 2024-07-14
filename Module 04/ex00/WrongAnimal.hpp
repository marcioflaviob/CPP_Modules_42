/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 13:44:35 by mbrandao          #+#    #+#             */
/*   Updated: 2024/07/14 14:37:23 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WrongAnimal_H
# define WrongAnimal_H

# include <string>
# include <iostream>

class WrongAnimal {

	protected:
		std::string type;

	public:
		WrongAnimal();
		WrongAnimal( const WrongAnimal &wrongAnimal );
		virtual ~WrongAnimal();
		WrongAnimal & operator=( const WrongAnimal &wrongAnimal );

		std::string getType() const;
		void makeSound(void) const;
	
	
};

#endif