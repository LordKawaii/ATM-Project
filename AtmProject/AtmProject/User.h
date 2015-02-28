#pragma once
#include <cstring>
#include <string>
#include <iostream>
#include <vector>
#include "card.h"
#include "Account.h"
class User
{
public:
	User();

	bool setName(std::string name);
	bool setDob(std::string DOB);
	bool setZipcode(int zip);
	bool addCard(card *Card);
	bool addAccount(Account *account);
	card * findCard(__int64 cardNumber);
	bool checkForAcc(Account * account);
	bool addCard(int Card);
	bool changePIN(__int64 cardNumber, int conPIN, int newPIN);
	bool cardNumberScale(__int64 cardNumber);
	bool grantAccessCard(__int64 cardNumber, int conPIN);
	bool lockedOut(__int64 cardNumber);
	bool expired(__int64 cardNumber, __int64 todaysDate);
	std::vector<Account *> getAccounts();
	int getNumAccount() {return numAccounts;}

private:
	std::string userName;
	int userZip;
	std::string userDOB;
	int userCard;
	int index;
	std::vector<card*> cardVector;
	std::vector<Account*> accounts;
	int numAccounts;
	int cardVectorSize;
};

