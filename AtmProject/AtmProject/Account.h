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
	account_type getAccountType(){return accountType;}
	long getAccountNum(){return accountNumber;}
private:
	long accountNumber;
	account_type accountType;
	int balance;
};

