#include "stdafx.h"
#include "User.h"
#include <string>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <iostream>


User::User()
{
}


User::~User()
{
}

bool User::setName(std::string name = "")
{
	if (name != "")
	{
		userName = name;
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
		userZip = zip;
		counter++;
		newZip /= 10;
	}
	return (counter == 5);
}

bool User::setDob(std::string DOB)
{
	if (DOB != "")
	{
		userDOB = DOB;
		return true;
	}
	return false;
}

bool User::addCard(int Card)
{
	long int cardNum[3] = { 123456789123, 987654321987, 654321987654 };

	for (int i = 0; i < 3; i++)
	{
		if (Card == cardNum[i])
		{
			userCard = Card;
			return true;
		}
		else if (Card != cardNum[i])
		{
			std::cout << "That is not a valid card number.";
		}
	}
	return false;
}