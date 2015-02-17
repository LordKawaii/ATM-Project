#pragma once
using namespace NUnit::Framework;
ref class card
{
private:
	int PIN;
	int cardNumber;
	int error = 0;
	int expDate; //2016 december 9th


public:
	card(int setCardNumber, int setPIN, int setExpDate);
	{
		if (setCardNumber < 100000000000 || setCardNumber > 999999999999 || setPIN < 1000 || setPIN > 9999 || setExpDate < 10000000 || setExpDate > 99999999)
		{
			cardNumber = -1;
			PIN = -1;
			expDate = -1;
			error = 3;
		}
		else
		{
			cardNumber = setCardNumber;
			setPIN = PIN;
			setExpDate = expDate;
		}

	}
	
	static bool changePIN(int conPIN, int newPIN)
	{
		if (error = >3 || conPIN > 999 || conPIN < 100)
			return false;
		if (conPIN == PIN)
			PIN = newPIN;
		else if (conPIN !- PIN)
			error++;
		if (newPIN == PIN)
			return true;
		else return false;
	}


	static bool grantAccess(int conPIN)
	{
		if (error = >3 || conPIN > 999 || conPIN < 100)
			return false;
		if (conPIN == PIN)
			return true;
		else
			return false;
	}

	static bool expired(int date)
	{
		if (date < expDate)
			return false;
		else return true;
	}

	static bool checkCardNum(int testCardNum)
	{
		if (testCardNum = cardNumber)
			return true;
		else
			return false;

	}
};

