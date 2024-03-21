/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 15:27:53 by mbrandao          #+#    #+#             */
/*   Updated: 2024/03/21 18:00:23 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

# include <string>
# include <iostream>

class Brain {

	public:
		std::string ideas[100];
		
		Brain();
		Brain( const Brain &brain );
		~Brain();

		Brain & operator=( const Brain &brain );

};

#endif