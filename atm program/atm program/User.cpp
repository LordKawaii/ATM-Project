
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
		return false;
	}	
<<<<<<< HEAD



		return true;
	}
	return false;

=======

>>>>>>> 945f72b6fb969f147879a780a5fe39be66c3a5fe
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

	cardVector[cardVectorSize] = card;
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
		accounts[numAccounts++] = account;
		return true;
	}
	return false;
}


card * User::findCard(int cardNumber)
{
	for (int i = 0; i <= cardVectorSize; i++)
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

bool User::changePIN(int cardNumber, int conPIN, int newPIN)
{
	card * tempCard = findCard(cardNumber);
	tempCard->changePIN(conPIN, newPIN);
}

bool User::cardNumberScale(int cardNumber)
{
	card * tempCard = findCard(cardNumber);
	if (tempCard != NULL)
		return true;
	else return false;
}

bool User::grantAccessCard(int cardNumber, int conPIN)
{
	card * tempCard = findCard(cardNumber);
	if (tempCard->grantAccess(conPIN) == true)
		return true;
	else return false;
}

bool User::lockedOut(int cardNumber)
{
	card * tempCard = findCard(cardNumber);
	if (tempCard->lockedOut() == true)
		return true;
	else return false;
}

bool User::expired(int cardNumber, long long int todaysDate)
{
	card * tempCard = findCard(cardNumber);
	if (tempCard->expired(todaysDate) == true)
		return true;
	else return false;
}
