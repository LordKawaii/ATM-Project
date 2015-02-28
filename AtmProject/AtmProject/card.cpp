#include "stdafx.h"
#include "card.h"
#include <iostream>

card::card(__int64 setCardNumber, int setPIN, __int64 setExpDate, Account* account )
{
	if (setCardNumber < 1000000000000000 || setCardNumber > 9999999999999999)
		std::cout << "Card num not in range \n";
	if (setPIN < 1000 || setPIN > 9999) 
		std::cout << "Card pin not in range \n";
	if (setExpDate < 10000000 || setExpDate > 99999999)
		std::cout << "Card exp date not in range \n";
	if (setCardNumber < 1000000000000000 || setCardNumber > 9999999999999999 || setPIN < 1000 || setPIN > 9999 || setExpDate < 10000000 || setExpDate > 99999999)
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
		error =0;
		numAccounts = 0;
		acounts.push_back(account);
		numAccounts++;
	}
}
	
bool card::changePIN(int conPIN, int newPIN)
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

bool card::cardNumberScale(__int64 conCardNumber)
{
	if (conCardNumber == cardNumber)
		return true;
	else 
		return false;

}


bool card::grantAccess(int conPIN)
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

bool card::lockedOut()
{
	if (error >= 3)
		return true;
	else return false;

}

bool card::expired(__int64 date)
{
	if (date < expDate)
	{
		std::cout << "date " << date << " expDate " << expDate;
		return true;
	}
	else 
		return false;
}


