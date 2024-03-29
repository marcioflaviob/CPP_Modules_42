/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 21:27:20 by mbrandao          #+#    #+#             */
/*   Updated: 2024/03/19 16:58:52 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "Contact.hpp"
# include <string>

class PhoneBook {

public:
	Contact contacts[8];
	int		oldest_index;

	PhoneBook(void);
	~PhoneBook(void);
	
	std::string fix_string(std::string);
	void 		add(void);
	void 		search(void);

};

#endif