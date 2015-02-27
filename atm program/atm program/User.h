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
	card * findCard(int cardNumber);
	bool checkForAcc(Account * account);
	bool addCard(int Card);
	bool changePIN(int cardNumber, int conPIN, int newPIN);
	bool cardNumberScale(int cardNumber);
	bool grantAccessCard(int cardNumber, int conPIN);
	bool lockedOut(int cardNumber);
	bool expired(int cardNumber, long long int todaysDate);

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

