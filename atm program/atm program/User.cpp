
#include "stdafx.h"
#include "User.h"
//Looking it up, if we want to use nunit we have to make it be in the name space instead of doind a 
//#include
//#include "nunit.framework"



User::User()
{
	cardVectorSize = 0;
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
>>>>>>> 589806ca4c281d6ae93701c21788070f79f34705
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
<<<<<<< HEAD

=======
>>>>>>> 589806ca4c281d6ae93701c21788070f79f34705
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

Card * User::findCard(int cardNumber)
{
	for (int i = 0; i < cardVectorSize; i++)
	{
		if (cardVector[i].cardNumberScale(cardNumber) == true)
			return cardVector[i];
	}
}


bool User::changePIN(int cardNumber, int conPIN, int newPIN)
{
	Card * tempCard = findCard(cardNumber);
	tempCard.changePIN(conPIN, newPIN);
}

bool User::cardNumberScale(int cardNumber)
{
	Card * tempCard = findCard(cardNumber);
	if (tempCard != NULL)
		return true;
	else return false;
}

bool User::grantAccessCard(int cardNumber, int conPIN)
{
	Card * tempCard = findCard(cardNumber);
	if (tempCard.grantAccess(conPIN) == true)
		return true;
	else return false;
}

bool User::lockedOut(int cardNumber)
{
	Card * tempCard = findCard(cardNumber);
	if (tempCard.lockedOut() == true)
		return true;
	else return false;
}

bool User::expired(int cardNumber, long long int todaysDate)
{
	Card * tempCard = findCard(cardNumber);
	if (tempCard.expired(todaysDate) == true)
		return true;
	else return false;
}
