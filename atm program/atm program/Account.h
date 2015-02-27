#pragma once
class Account
{
public:
	enum account_type
        {
            savings,
            checking
        };
	Account(account_type type);
	Account(account_type type, int startingBallence);
	bool Withdraw(int amount);
	bool Deposit(int amount);
	int getBalance();
private:
	account_type accountType;
	int balance;
};

