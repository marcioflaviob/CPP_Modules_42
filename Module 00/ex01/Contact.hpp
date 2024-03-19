/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 21:11:25 by mbrandao          #+#    #+#             */
/*   Updated: 2024/03/19 16:58:57 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

# include <string>

class Contact {

public:

	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;

	Contact(std::string first_name, std::string last_name, std::string nickname, std::string phone_number);
	Contact(void);
	~Contact(void);
	bool isEmpty();

};

#endif