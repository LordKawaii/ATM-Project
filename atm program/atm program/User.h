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
<<<<<<< HEAD
	bool addCard(card *Card);
	bool addAccount(Account *account);
	card * findCard(int cardNumber);
	bool checkForAcc(Account * account);
=======
	bool addCard(int Card);
<<<<<<< HEAD
	Card * findCard(int cardNumber);
>>>>>>> 9568e7c3adaa54fa36e1e4a39342f35c0b817494
	bool changePIN(int cardNumber, int conPIN, int newPIN);
	bool cardNumberScale(int cardNumber);
	bool grantAccessCard(int cardNumber, int conPIN);
	bool lockedOut(int cardNumber);
	bool expired(int cardNumber, long long int todaysDate);
<<<<<<< HEAD
=======

=======
>>>>>>> 589806ca4c281d6ae93701c21788070f79f34705

>>>>>>> 9568e7c3adaa54fa36e1e4a39342f35c0b817494
private:
	std::string userName;
	int userZip;
	std::string userDOB;
	int userCard;
	int index;
<<<<<<< HEAD
	std::vector<card*> cardVector;
	std::vector<Account*> accounts;
	int numAccounts;
=======
	std::vector<card> cardVector;
<<<<<<< HEAD
	int cardVectorSize = 0;

};

=======
>>>>>>> 9568e7c3adaa54fa36e1e4a39342f35c0b817494
	int cardVectorSize;
};
>>>>>>> 589806ca4c281d6ae93701c21788070f79f34705
