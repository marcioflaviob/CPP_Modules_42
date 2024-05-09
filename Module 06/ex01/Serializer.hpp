/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 20:50:26 by mbrandao          #+#    #+#             */
/*   Updated: 2024/03/24 21:06:15 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_H
# define SERIALIZER_H

# include <iostream>
# include <string>
# include <stdint.h>
# include "Data.hpp"

class Serializer
{
	public:

		Serializer();
		Serializer(const Serializer &copy);
		~Serializer();
		Serializer & operator=(const Serializer &assign);

		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
		
	private:
		
};

#endif