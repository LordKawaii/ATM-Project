
#include "stdafx.h"
#include "User.h"
//Looking it up, if we want to use nunit we have to make it be in the name space instead of doind a 
//#include
//#include "nunit.framework"

using namespace NUnit::Framework;

User::User()
{
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

		return true;
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

bool User::addCard(int Card)
{

	cardVector[cardVectorSize] = Card;
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

Card * findCard(int cardNumber)
{
	for (int i = 0; i < cardVectorSize; i++)
	{
		if (cardVector[i].cardNumberScale(cardNumber) == true)
			return cardVector[i];
	}
}


bool changePIN(int cardNumber, int conPIN, int newPIN)
{
	Card * tempCard = findCard(cardNumber);
	tempCard.changePIN(conPIN, newPIN);
}

bool cardNumberScale(int cardNumber)
{
	Card * tempCard = findCard(cardNumber);
	if (tempCard != NULL)
		return true;
	else return false;
}

bool grantAccessCard(int cardNumber, int conPIN)
{
	Card * tempCard = findCard(cardNumber);
	if (tempCard.grantAccess(conPIN) == true)
		return true;
	else return false;
}

bool lockedOut(int cardNumber)
{
	Card * tempCard = findCard(cardNumber);
	if (tempCard.lockedOut() == true)
		return true;
	else return false;
}

bool expired(int cardNumber, long long int todaysDate)
{
	Card * tempCard = findCard(cardNumber);
	if (tempCard.expired(todaysDate) == true)
		return true;
	else return false;
}
