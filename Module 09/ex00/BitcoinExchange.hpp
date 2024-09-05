/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 22:15:41 by mbrandao          #+#    #+#             */
/*   Updated: 2024/09/05 21:59:23 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <fstream>
# include <sstream>
# include <string>
# include <map>
# include <algorithm>
# include <cstdlib>


class BitcoinExchange {

	private:
		std::map<std::string, float> data;
		
	public:
		BitcoinExchange();
		BitcoinExchange(BitcoinExchange const & copy);
		BitcoinExchange & operator=(BitcoinExchange const & copy);
		~BitcoinExchange();

		std::map<std::string, float> getData();
		void addData(std::string key, float pair);
		void findKey(std::string date, float value);
		void loadDataFile();

		void readInput(std::string file);

		class NoData : public std::exception {
		public:
			virtual const char* what() const throw() {
					return ("Error: Couldn't open file.");
				};
		};

		class InvalidParameter : public std::exception {
		public:
			virtual const char* what() const throw() {
					return ("Invalid parameter in file.");
				};
		};

		class EmptyFile : public std::exception {
		public:
			virtual const char* what() const throw() {
					return ("File is empty.");
				};
		};
		
	
};

#endif