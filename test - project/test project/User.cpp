
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
	if (name != "")
	{
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
	int cardNum[3] = {123456789123, 987654321987, 654321987654};

	for (int i = 0; i < 3; i++)
	{
		if (Card == cardNum[i])
		{
			return true;
		}
	}
	return false;
}