/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 13:48:10 by mbrandao          #+#    #+#             */
/*   Updated: 2024/03/21 13:48:57 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_H
# define WRONGCAT_H

# include <string>
# include <iostream>

class WrongCat {

	protected:
		std::string type;

	public:
		WrongCat();
		WrongCat( const WrongCat &wrongCat );
		~WrongCat();
		WrongCat & operator=( const WrongCat &wrongCat );

		std::string getType() const;
		virtual void makeSound(void) const;
	
	
};

#endif