/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replacer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 18:42:56 by mbrandao          #+#    #+#             */
/*   Updated: 2024/03/19 19:23:07 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACER_H
# define REPLACER_H

# include <string>
# include <iostream>
# include <fstream>

class Replacer {

private:

	std::string infile;
	std::string outfile;

public:

	Replacer(std::string file);
	~Replacer(void);
	
	void	replace(std::string s1, std::string s2);

};

#endif