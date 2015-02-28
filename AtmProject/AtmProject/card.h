#include "Account.h"
#include <vector>
#pragma once


class card
{
private:
	int PIN, error, numAccounts;
	__int64 cardNumber;
	__int64 expDate; //2016 december 9th
	std::vector<Account*> acounts;

public:
	card(__int64 setCardNumber, int setPIN, __int64 setExpDate, Account* account );
	
	bool changePIN(int conPIN, int newPIN);

	bool cardNumberScale(__int64 conCardNumber);

	bool grantAccess(int conPIN);

	bool lockedOut();

	bool expired(__int64 date);

	__int64 getCardNumber(){
		return cardNumber;
	}
};

