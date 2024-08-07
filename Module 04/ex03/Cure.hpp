/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 18:39:45 by mbrandao          #+#    #+#             */
/*   Updated: 2024/07/12 23:50:47 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_H
# define CURE_H

# include "AMateria.hpp"

class Cure : public AMateria {

	public:
		Cure();
		Cure(Cure const & copy);
		~Cure();
		Cure & operator=(Cure const & ref);
		
		virtual AMateria * clone() const;
        virtual void use(ICharacter & target);
		
};

#endif