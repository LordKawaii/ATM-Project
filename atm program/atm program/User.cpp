#include "stdafx.h"
#include "User.h"
#include <cstring>
#include <string>


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
		counter++;
		newZip /= 10;
	}
	return (counter == 5);
}

bool User::setDob(std::string DOB)
{
	if (DOB != "")
	{
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
			return true;
		}
	}
	return false;
}