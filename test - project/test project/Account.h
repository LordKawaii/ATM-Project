#pragma once
ref class Account
{
public:
	Account(void);
	bool Withdraw(int amount);
	bool Deposit(int amount);
	int getBalance();
private:
	int balance;
};

