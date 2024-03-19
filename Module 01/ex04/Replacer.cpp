/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replacer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 18:44:34 by mbrandao          #+#    #+#             */
/*   Updated: 2024/03/19 20:39:10 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replacer.hpp"

Replacer::Replacer(std::string file) {
	this->infile = file;
	this->outfile = file + ".replace";
}

Replacer::~Replacer(void) {
	
}

void	Replacer::replace(std::string s1, std::string s2) {
	std::ifstream file(this->infile.c_str());
	int len = s1.length();

	
	if (!file.is_open()) {
		std::cout << "Unable to open file." << std::endl;
		return;
	}
	else {
		int	line_counter = 0;
		std::string line;
		std::ofstream outfile(this->outfile.c_str(), std::ios::out | std::ios::trunc);
		if (!outfile.is_open()) {
			file.close();
			std::cout << "Unable to create outfile." << std::endl;
		}
		while (std::getline(file, line)) {
			if (line_counter > 0)
				outfile << std::endl;

			size_t start = line.find(s1);
			
			while (start != std::string::npos) {
				line.erase(start, len);
				line.insert(start, s2);
				
				start = line.find(s1, start + 1);
			}
			outfile << line;
			line_counter++;
		}
		
		file.close();
		outfile.close();
	}
}
