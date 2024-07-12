/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 18:38:53 by mbrandao          #+#    #+#             */
/*   Updated: 2024/03/21 19:23:33 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_H
# define ICE_H

# include "AMateria.hpp"

class Ice : public AMateria {

	public:
		Ice();
		Ice(Ice const & copy);
		~Ice();
		
		virtual AMateria * clone() const;
        virtual void use(ICharacter & target);
	
};

#endif