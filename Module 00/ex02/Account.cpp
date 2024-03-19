/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 21:18:38 by mbrandao          #+#    #+#             */
/*   Updated: 2024/03/19 14:37:31 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"


int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts( void ) {
	return _nbAccounts;
}

int	Account::getTotalAmount( void ) {
	return _totalAmount;
}

int	Account::getNbDeposits( void ) {
	return _totalNbDeposits;

}

int	Account::getNbWithdrawals( void ) {
	return _totalNbWithdrawals;
}

void	Account::displayAccountsInfos( void ) {
	_displayTimestamp();
	std::cout << " accounts:" << _nbAccounts << ";total:" << _totalAmount
		<< ";deposits:" << _totalNbDeposits << ";withdrawals:"
		<< _totalNbWithdrawals << std::endl;
}

Account::Account( void ) {
	this->_accountIndex = _nbAccounts;
	this->_amount = 0;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	_nbAccounts++;
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
}

Account::Account( int initial_deposit ) {
	this->_accountIndex = _nbAccounts;
	this->_amount = initial_deposit;
	_totalAmount += initial_deposit;
	this->_nbWithdrawals = 0;
	this->_nbDeposits = 0;
	_nbAccounts++;
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
}

Account::~Account( void ) {
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
}

void	Account::makeDeposit( int deposit ) {
	this->_nbDeposits++;
	_totalNbDeposits++;
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";p_amount:"
		<< this->_amount << ";deposit:" << deposit << ";amount:"
		<< (this->_amount + deposit) << ";nb_deposits:"
		<< this->_nbDeposits << std::endl;
	_totalAmount += deposit;
	this->_amount += deposit;
}

bool	Account::makeWithdrawal( int withdrawal ) {
	if (this->_amount >= withdrawal) {
		this->_nbWithdrawals++;
		_displayTimestamp();
		std::cout << " index:" << this->_accountIndex << ";p_amount:"
			<< this->_amount << ";withdrawal:" << withdrawal << ";amount:"
			<< (this->_amount - withdrawal) << ";nb_withdrawals:"
			<< this->_nbWithdrawals << std::endl;
		this->_amount -= withdrawal;
		_totalAmount -= withdrawal;
		_totalNbWithdrawals++;
		return true;
	}
	else
	{
		_displayTimestamp();
		std::cout << " index:" << this->_accountIndex << ";p_amount:"
			<< this->_amount << ";withdrawal:refused" << std::endl;	
		return false;
	}
}

int		Account::checkAmount( void ) const {
	return this->_amount;
}

void	Account::displayStatus( void ) const {
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount
		<< ";deposits:" << this->_nbDeposits << ";withdrawals:"
		<< this->_nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp( void ) {
	std::time_t rawtime;
    std::tm* timeinfo;
    char buffer[80];

    std::time(&rawtime);
    timeinfo = std::localtime(&rawtime);

    std::strftime(buffer, sizeof(buffer), "[%Y%m%d_%H%M%S]", timeinfo);
    std::string str(buffer);

    std::cout << str;
}
