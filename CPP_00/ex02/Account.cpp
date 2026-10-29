/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mael-hou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 21:27:34 by mael-hou          #+#    #+#             */
/*   Updated: 2026/07/29 21:27:36 by mael-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include <iomanip>
#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

void Account::_displayTimestamp(void) {
    std::time_t timestamp = std::time(NULL);
    struct std::tm datetime = *std::localtime(&timestamp);

    std::cout << "[" << datetime.tm_year + 1900
    << "_" << std::setfill('0') << std::setw(2) << datetime.tm_mon + 1
    << "_" << std::setfill('0') << std::setw(2) << datetime.tm_mday
    << "_" << std::setfill('0') << std::setw(2) << datetime.tm_hour
    << "_" << std::setfill('0') << std::setw(2) << datetime.tm_min
    << "_" << std::setfill('0') << std::setw(2) << datetime.tm_sec << "] ";
}

Account::Account(int initial_deposit) {
    _accountIndex = _nbAccounts;
    _amount = initial_deposit;
    _nbDeposits = 0;
    _nbWithdrawals = 0;

    _nbAccounts++;
    _totalAmount += _amount;

    _displayTimestamp();
    std::cout << "index:" << _accountIndex
    << ";amount:" << _amount << ";created" << std::endl;
}

Account::~Account() {
    _displayTimestamp();
    std::cout << "index:" << _accountIndex
    << ";amount:" << _amount << ";closed" << std::endl;
}

int Account::getNbAccounts() {
    return (_nbAccounts);
}

int Account::getTotalAmount() {
    return (_totalAmount);
}

int Account::getNbDeposits() {
    return (_totalNbDeposits);
}

int Account::getNbWithdrawals() {
    return (_totalNbWithdrawals);
}

void Account::displayAccountsInfos() {
    _displayTimestamp();
    std::cout << "accounts:" << getNbAccounts() << ";total:"
    << getTotalAmount() << ";deposits:" << getNbDeposits()
    << ";withdrawals:" << getNbWithdrawals() << std::endl;
}

void Account::displayStatus(void) const {
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:"
    << _amount << ";deposits:" << _nbDeposits
    << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void Account::makeDeposit(int deposit) {
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";p_amount:"
    << _amount << ";deposit:" << deposit << ";amount:";
    _totalAmount += deposit;
    _totalNbDeposits++;
    _nbDeposits++;
    _amount += deposit;
    std::cout << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal) {
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";p_amount:"
    << _amount << ";withdrawal:";
    if (_amount < withdrawal)
    {
        std::cout << "refused" << std::endl;
        return (false);
    }
    _amount -= withdrawal;
    _totalAmount -= withdrawal;
    _nbWithdrawals++;
    _totalNbWithdrawals++;
    std::cout << withdrawal << ";amount:" << _amount
    << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
    return (true);
}

int Account::checkAmount(void) const {
    return (_amount);
}