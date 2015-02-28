
#include "stdafx.h"
#include "User.h"



User::User()
{
	cardVectorSize = 0;
	numAccounts = 0;
}

bool User::setName(std::string name)
{
	std::string names[3] = {"JJ", "Ben", "Sean"};

	for (index = 0; index <= 3; index++)
	{

		if (name != "")
		{
			names[index] = index;
			//userName = name;
			return true;
		}
	}	
	return false;

}

bool User::setZipcode(int zip)
{
	double newZip = zip;
	int counter = 0;

	while (newZip > 1)
	{
		counter++;
		newZip /= 10;
	}
	return (counter == 5);
}

bool User::setDob(std::string DOB)
{
	if (DOB != "")
	{

		//userDOB = DOB;

		return true;
	}
	return false;
}

bool User::addCard(card *card)
{

	cardVector.push_back(card);
	cardVectorSize++;
	return true;
	/*long int cardNum[3] = {123456789123, 987654321987, 654321987654};

	for (int i = 0; i < 3; i++)
	{
		if (Card == cardNum[i])
		{
			//userCard = Card;
			return true;
		}
	}
	return false;*/
}


bool User::addAccount(Account *account)
{
	if (!checkForAcc(account))
	{
		numAccounts++;
		accounts.push_back(account);
		return true;
	}
	return false;
}


card * User::findCard(__int64 cardNumber)
{
	for (int i = 0; i < cardVectorSize; i++)
	{
		if (cardVector[i]->cardNumberScale(cardNumber) == true)
			return cardVector[i];
	}
}

bool User::checkForAcc(Account * account)
{
	for (int i = 0; i < numAccounts; i++)
	{
		if (accounts[i] == account)
		{
			return true;
		}
	}
	return false;
}

bool User::changePIN(__int64 cardNumber, int conPIN, int newPIN)
{
	card * tempCard = findCard(cardNumber);
	if (tempCard->changePIN(conPIN, newPIN))
		return true;
	return false;
}

bool User::cardNumberScale(__int64 cardNumber)
{
	card * tempCard = findCard(cardNumber);
	if (tempCard != NULL)
		return true;
	else return false;
}

bool User::grantAccessCard(__int64 cardNumber, int conPIN)
{
	card * tempCard = findCard(cardNumber);
	if (tempCard->grantAccess(conPIN) == true)
		return true;
	else return false;
}

bool User::lockedOut(__int64 cardNumber)
{
	card * tempCard = findCard(cardNumber);
	if (tempCard->lockedOut() == true)
		return true;
	else return false;
}

bool User::expired(__int64 cardNumber, __int64 todaysDate)
{
	card * tempCard = findCard(cardNumber);
	if (tempCard->expired(todaysDate) == true)
		return true;
	else return false;
}

std::vector<Account *> User::getAccounts()
{
	return accounts;
}
