/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 22:21:01 by mbrandao          #+#    #+#             */
/*   Updated: 2024/09/05 22:08:51 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

void removeSpace(std::string & str) {
	str.erase(std::remove(str.begin(), str.end(), ' '), str.end());
}

bool isBadDate(std::string date) {
	int year, month, day;
	if (date.size() != 10) {
		return true;
	}
	if (date[4] != '-' || date[7] != '-') {
		return true;
	}
	
	std::stringstream ss;
	ss << date.substr(0, 4);
	ss >> year;
	ss.clear();

	ss << date.substr(5, 2);
	ss >> month;
	ss.clear();

	ss << date.substr(8, 2);
	ss >> day;

	if (year < 2000 || year > 2024) {
		return true;
	}
	if (month < 1 || month > 12) {
		return true;
	}
	if (day < 1 || day > 31) {
		return true;
	}
	return false;
}

bool isBadValue(float value) {
	if (value < 0) {
		std::cerr << "Error: not a positive number." << std::endl;
		return true;
	}
	if (value > 100000) {
		std::cerr << "Error: too large a number." << std::endl;
		return true;
	}
	return false;
}

void BitcoinExchange::findKey(std::string date, float value) {
	std::map<std::string, float>::iterator it = this->data.find(date);
	if (it != this->data.end()) {
		std::cout << date << " => " << value << " = " << value * it->second << std::endl;
	}
	else {
        std::map<std::string, float>::iterator lower; 
        for (it = this->data.begin(); it != this->data.end(); it++)
        {
            if (it->first <= date)
                lower = it;
            else
                break;
        }
        if (it == this->data.begin())
            std::cout << date << " => " << value << " = " << value*it->second << std::endl;
        else
            std::cout << date << " => " << value << " = " << value*lower->second << std::endl;
	}
}

void BitcoinExchange::loadDataFile() {
	std::ifstream data("./data.csv");
	if (!data.is_open()) {
		throw BitcoinExchange::NoData();
	}
	std::string line;
	bool is_first = true;
	while (std::getline(data, line)) {
		if (is_first == true) {
			is_first = false;
			continue;
		}
		size_t pos = line.find(',');
		if (pos == std::string::npos) {
			throw BitcoinExchange::InvalidParameter();
		}
		std::string date = line.substr(0, pos);
		
		double value;
		std::stringstream ss;
		ss << line.substr(pos + 1);
		ss >> value;
		
		this->addData(date, value);
	}
	if (is_first) {
		throw BitcoinExchange::EmptyFile();
	}
	data.close();
}

BitcoinExchange::BitcoinExchange() {
	loadDataFile();
}

BitcoinExchange & BitcoinExchange::operator=(BitcoinExchange const & copy) {
	this->data = copy.data;
	return (*this);
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const & copy) {
	*this = copy;
}

BitcoinExchange::~BitcoinExchange() {

}

void BitcoinExchange::addData(std::string key, float pair) {
	this->data.insert(std::make_pair(key, pair));
}

std::map<std::string, float> BitcoinExchange::getData() {
	return (this->data);
}

void BitcoinExchange::readInput(std::string file) {
	std::ifstream input(file.c_str());
	if (!input.is_open()) {
		throw BitcoinExchange::NoData();
	}
	std::string line;
	bool is_first = true;
	while (std::getline(input, line)) {
		if (is_first == true) {
			if (line != "date | value") {
				throw BitcoinExchange::InvalidParameter();
			}
			is_first = false;
			continue;
		}
		removeSpace(line);
		size_t pos = line.find('|');
		if (pos == std::string::npos) {
			std::cerr << "Error: bad input => " << line << std::endl;
			continue;
		}
		std::string date = line.substr(0, pos);
		if (isBadDate(date)) {
			std::cerr << "Error: bad input => " << line << std::endl;
			continue;
		}
		double value;
		std::stringstream ss;
		ss << line.substr(pos + 1);
		ss >> value;
		if (ss.fail()) {
			std::cerr << "Error: bad input => " << line << std::endl;
			continue;
		}
		if (isBadValue(value)) {
			continue;
		}
		findKey(date, value);
	}
	
}