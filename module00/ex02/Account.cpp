/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danimart <danimart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 14:42:58 by danimart          #+#    #+#             */
/*   Updated: 2023/12/13 16:12:03 by danimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) {
	this->_accountIndex = Account::_nbAccounts;
	Account::_nbAccounts++;
	this->_amount = initial_deposit;
	Account::_totalAmount += initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	_displayTimestamp();
	std::cout << "index:" + std::to_string(this->_accountIndex) + ";";
	std::cout << "amount:" + std::to_string(this->_amount) + ";";
	std::cout << "created" << std::endl;
}

Account::~Account(void) {
	_displayTimestamp();
	std::cout << "index:" + std::to_string(this->_accountIndex) + ";";
	std::cout << "amount:" + std::to_string(this->_amount) + ";";
	std::cout << "closed" << std::endl;
}

void Account::makeDeposit(int deposit) {
	this->_amount += deposit;
	Account::_totalAmount += deposit;
	this->_nbDeposits++;
	Account::_totalNbDeposits++;
}

bool Account::makeWithdrawal(int withdrawal) {
	if (this->_amount < withdrawal)
		return false;
	this->_amount -= withdrawal;
	Account::_totalAmount -= withdrawal;
	this->_nbWithdrawals++;
	Account::_totalNbWithdrawals++;
	return true;
}

int Account::checkAmount(void) const {
	return this->_amount;
}

void Account::displayStatus(void) const {
	
}

int Account::getNbAccounts(void) {
	return Account::_nbAccounts;
}

int Account::getTotalAmount(void) {
	return Account::_totalAmount;
}

int Account::getNbDeposits(void) {
	return Account::_totalNbDeposits;
}

int Account::getNbWithdrawals(void) {
	return Account::_totalNbWithdrawals;
}

void Account::displayAccountsInfos(void) {
	
}

void Account::_displayTimestamp(void) {
	// https://en.cppreference.com/w/cpp/io/manip/put_time
	std::time_t t = std::time(nullptr);
	std::tm tm = *std::localtime(&t);
	std::cout << std::put_time(&tm, "[%Y%m%d_%H%M%S] ");
}
