/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 18:31:13 by mbrandao          #+#    #+#             */
/*   Updated: 2024/07/13 00:41:31 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_H
# define MATERIASOURCE_H

# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class AMateria;

class MateriaSource : public IMateriaSource {
	
private:
	AMateria*       materias[4];

public:

	MateriaSource();
	MateriaSource( MateriaSource const & src );
	~MateriaSource();

	MateriaSource&  operator=( MateriaSource const & src );

	AMateria*       getMateria( std::string const & type );
	AMateria*       createMateria( std::string const & type );
	void            learnMateria( AMateria * m );
	
};

#endif