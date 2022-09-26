/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorreia <ecorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 20:14:03 by ecorreia          #+#    #+#             */
/*   Updated: 2022/06/29 20:14:04 by ecorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

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

void	Account::displayAccountsInfos(void)
{
    Account::_displayTimestamp();
    std::cout << "accounts:" << Account::getNbAccounts() << ";";
    std::cout << "total:" << Account::getTotalAmount() << ";";
    std::cout << "deposits:" << Account::getNbDeposits() << ";";
    std::cout << "withdrawals:" << Account::getNbWithdrawals() << "\n";
}

Account::Account (int initial_deposit): _accountIndex(Account::_nbAccounts),
    _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0)
{
    Account::_nbAccounts++;
    Account::_totalAmount += Account::checkAmount();
    Account::_displayTimestamp();
    std::cout << "index:" << Account::_accountIndex << ";";
    std::cout << "amount:" << Account::checkAmount() << ";created\n";
}

Account::~Account (void) {
    Account::_displayTimestamp();
    std::cout << "index:" << Account::_accountIndex << ";";
    std::cout << "amount:" << Account::checkAmount() << ";closed\n";
    Account::_nbAccounts--;
    Account::_totalAmount -= Account::checkAmount();
}

void	Account::makeDeposit(int deposit)
{
    Account::_displayTimestamp();
    std::cout << "index:" << Account::_accountIndex << ";";
    std::cout << "p_amount:" << Account::checkAmount() << ";";
    if (deposit < 0)
        std::cout << "deposit:refused\n";
    else
    {
        std::cout << "deposit:" << deposit << ";";
        Account::_amount += deposit;
        Account::_totalAmount += deposit;
        std::cout << "amount:" << Account::checkAmount() << ";";
        Account::_nbDeposits++;
        Account::_totalNbDeposits++;
        std::cout << "nb_deposits:" << Account::_nbDeposits << "\n";
    }
}

bool	Account::makeWithdrawal(int withdrawal)
{
    Account::_displayTimestamp();
    std::cout << "index:" << Account::_accountIndex << ";";
    std::cout << "p_amount:" << Account::checkAmount() << ";";
    if (withdrawal < 0 || Account::checkAmount() - withdrawal < 0)
    {
        std::cout << "withdrawal:refused" << "\n";
        return (false);
    }
    std::cout << "withdrawal:" << withdrawal << ";";
    Account::_amount -= withdrawal;
    Account::_totalAmount -= withdrawal;
    std::cout << "amount:" << Account::checkAmount() << ";";
    Account::_nbWithdrawals++;
    Account::_totalNbWithdrawals++;
    std::cout << "nb_withdrawals:" << Account::_nbWithdrawals << "\n";
    return (true);
}

int	Account::checkAmount(void) const
{
    return (Account::_amount);
}

void	Account::_displayTimestamp(void)
{
    std::cout << "[19920104_091532] ";
}

void	Account::displayStatus(void) const
{
    Account::_displayTimestamp();
    std::cout << "index:" << Account::_accountIndex << ";";
    std::cout << "amount:" << Account::checkAmount() << ";";
    std::cout << "deposits:" << Account::_nbDeposits << ";";
    std::cout << "withdrawals:" << Account::_nbWithdrawals << "\n";
}


