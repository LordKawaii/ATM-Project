#include "Account.h"
#pragma once


class card
{
private:
	int PIN;
	long long int cardNumber;
	int error = 0;
	long long int expDate; //2016 december 9th

public:
	card(long long int setCardNumber, int setPIN, long long int setExpDate, Account* account )
	{
		if (setCardNumber < 100000000000 || setCardNumber > 999999999999 || setPIN < 1000 || setPIN > 9999 || setExpDate < 10000000 || setExpDate > 99999999 || startingBalance < 0)
		{
			cardNumber = -1;
			PIN = -1;
			expDate = -1;
			error = 3;
		}
		else
		{
			cardNumber = setCardNumber;
			PIN = setPIN;
			expDate = setExpDate;
			balance = startingBalance;
		}

	}
	
	bool changePIN(int conPIN, int newPIN)
	{
		if (error > 2 || conPIN > 9999 || conPIN < 1000)
			return false;
		if (conPIN == PIN)
			PIN = newPIN;
		else if (conPIN != PIN)
			error++;
		if (newPIN == PIN)
			return true;
		else return false;
	}

	bool cardNumberScale(int conCardNumber)
	{
		if (conCardNumber == cardNumber)
			return true;
		else 
			return false;

	}


	int grantAccess(int conPIN)
	{
		
		if (error >= 3 || conPIN > 9999 || conPIN < 1000)
			return false;
		if (conPIN == PIN)
		{
			return true;
		}
		else
			return false;
	}

	bool lockedOut()
	{
		if (error >= 3)
			return true;
		else return false;

	}

	bool expired(long long int date)
	{
		if (date < expDate)
			return false;
		else return true;
	}



};

