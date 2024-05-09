/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 20:53:47 by mbrandao          #+#    #+#             */
/*   Updated: 2024/03/24 21:00:55 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_H
# define DATA_H

# include <iostream>
# include <string>

class Data
{
	public:

		int value;
		std::string str;
	
		Data();
		Data(int value, std::string str);
		Data(const Data &copy);
		~Data();
		Data & operator=(const Data &assign);
		
	private:
		
};

#endif