/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 18:23:41 by mbrandao          #+#    #+#             */
/*   Updated: 2024/03/21 19:10:27 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
# define AMATERIA_H

# include <string>

class AMateria
{
	protected:
		std::string type;
		
	public:
		AMateria();
	    AMateria(const std::string & type);
    	AMateria(const AMateria & copy);
		virtual ~AMateria();

		AMateria & operator=( const AMateria &copy );

		AMateria(std::string const & type);
		
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif