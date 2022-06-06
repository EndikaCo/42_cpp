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

int	Account::checkAmount(void) const
{
	return (this->_amount);
}

int	Account::checkAmount(void) const
{
	return (this->_amount);
}

void	Account::_displayTimestamp(void)
{
	std::cout << "[19920104_091532] ";
}

Account::Account (int initial_deposit) : _accountIndex(Account::_nbAccounts),
		_amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0) {
	Account::_nbAccounts++;
	Account::_totalAmount += Account::checkAmount();
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << Account::checkAmount() << ";created\n";
}

Account::~Account (void) {
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << Account::checkAmount() << ";closed\n";
	Account::_nbAccounts--;
	Account::_totalAmount -= Account::checkAmount();
}

void	Account::makeDeposit(int deposit)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << Account::checkAmount() << ";";
	if (deposit < 0)
		std::cout << "deposit:refused\n";
	else
	{
		std::cout << "deposit:" << deposit << ";";
		this->_amount += deposit;
		Account::_totalAmount += deposit;
		std::cout << "amount:" << Account::checkAmount() << ";";
		this->_nbDeposits++;
		Account::_totalNbDeposits++;
		std::cout << "nb_deposits:" << this->_nbDeposits << "\n";
	}
}

bool	Account::makeWithdrawal(int withdrawal)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << Account::checkAmount() << ";";
	if (withdrawal < 0 || Account::checkAmount() - withdrawal < 0)
	{
		std::cout << "withdrawal:refused" << "\n";
		return (false);
	}
	else
	{
		std::cout << "withdrawal:" << withdrawal << ";";
		this->_amount -= withdrawal;
		Account::_totalAmount -= withdrawal;
		std::cout << "amount:" << Account::checkAmount() << ";";
		this->_nbWithdrawals++;
		Account::_totalNbWithdrawals++;
		std::cout << "nb_withdrawals:" << this->_nbWithdrawals << "\n";
		return (true);
	}
}

void	Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << Account::checkAmount() << ";";
	std::cout << "deposits:" << this->_nbDeposits << ";";
	std::cout << "withdrawals:" << this->_nbWithdrawals << "\n";
}

void	Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts() << ";";
	std::cout << "total:" << Account::getTotalAmount() << ";";
	std::cout << "deposits:" << Account::getNbDeposits() << ";";
	std::cout << "withdrawals:" << Account::getNbWithdrawals() << "\n";
}
