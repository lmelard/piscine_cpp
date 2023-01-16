/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 15:40:12 by lmelard           #+#    #+#             */
/*   Updated: 2023/01/16 18:06:38 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <string>

Account::Account(int initial_deposit)
{
	this->_amount = initial_deposit;
	
	Account::_totalAmount += initial_deposit;
	std::cout << "index:" << this->_accountIndex << ";amount:" << initial_deposit << ";created";
	return ;
}

Account::~Account(void)
{
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed";
	return ;
}

int	Account::getNbAccounts(void)
{
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (Account::_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (Account::_totalNbWithdrawals);
}

void	displayAccountsInfos(void)
{
	std::cout << "accounts:" << Account::getNbAccounts() << ";total:" << Account::getTotalAmount() << ";deposits:" << Account::getNbDeposits() << ";withdrawals:" << Account::getNbWithdrawals() << std::endl; 
}

void	Account::makeDeposit(int deposit)
{
	if (deposit < 0)
		return ;
	this->_amount += deposit;
	this->_nbDeposits += 1;
	_totalAmount += deposit;
	_nbDeposits += 1;
	return ;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	if (this->_amount < withdrawal || withdrawal <= 0)
		return (1);
	this->_amount -= withdrawal;
	this->_nbWithdrawals += 1;
	_totalAmount -= withdrawal;
	_nbWithdrawals += 1;
	return (0);
}

int		Account::checkAmount(void) const
{
	return (this->_amount);
}

void	Account::displayStatus(void) const
{
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals;
	return ;
}
