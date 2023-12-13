/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danimart <danimart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 14:42:58 by danimart          #+#    #+#             */
/*   Updated: 2023/12/13 15:11:51 by danimart         ###   ########.fr       */
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

Account::Account(void) {
	this->_amount = 0;
}

Account::Account(int initial_deposit) {
	this->_amount = initial_deposit;
}

Account::~Account(void) {}

void Account::makeDeposit(int deposit) {
	
}

bool Account::makeWithdrawal(int withdrawal) {
	return true;
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
