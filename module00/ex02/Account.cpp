/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danimart <danimart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 14:42:58 by danimart          #+#    #+#             */
/*   Updated: 2023/12/13 15:27:05 by danimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

static int	_nbAccounts = 0;
static int	_totalAmount = 0;
static int	_totalNbDeposits = 0;
static int	_totalNbWithdrawals = 0;
int			_accountIndex;
int			_amount;
int			_nbDeposits;
int			_nbWithdrawals;

Account::Account(int initial_deposit) {
	this->_accountIndex = _nbAccounts;
	_nbAccounts++;
	this->_amount = initial_deposit;
	_totalAmount += initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
}

Account::~Account(void) {}

void Account::makeDeposit(int deposit) {
	this->_amount += deposit;
	_totalAmount += deposit;
	this->_nbDeposits++;
	_totalNbDeposits++;
}

bool Account::makeWithdrawal(int withdrawal) {
	if (this->_amount < withdrawal)
		return false;
	this->_amount -= withdrawal;
	_totalAmount -= withdrawal;
	this->_nbWithdrawals++;
	_totalNbWithdrawals++;
}

int Account::checkAmount(void) const {
	return this->_amount;
}

void Account::displayStatus(void) const {
	
};

static int getNbAccounts(void) {
	return _nbAccounts;
}

static int getTotalAmount(void) {
	return _totalAmount;
}

static int getNbDeposits(void) {
	return _totalNbDeposits;
}

static int getNbWithdrawals(void) {
	return _totalNbWithdrawals;
}

static void displayAccountsInfos(void) {
	
}

static void _displayTimestamp( void ) {
	
}
