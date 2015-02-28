#include "stdafx.h"
#include "Account.h"

int G_lastAccountNum = 0;

Account::Account(account_type type)
{

	accountType = type;
	balance = 0;
	accountNumber = G_lastAccountNum++;
}

Account::Account(account_type type, int startingBallence)
{
	accountType = type;
	balance = startingBallence;
	accountNumber = G_lastAccountNum++;
}

bool Account::Withdraw(int amount)
{
	if (amount > balance)
		return false;
	else
	{
		balance -= amount;
		return true;
	}
}
bool Account::Deposit(int amount)
{
	balance += amount;
	return true;
}
int Account::getBalance()
{
	return balance;
}