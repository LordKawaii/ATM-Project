
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
	if (zip.rbegin - zip.rend = 5)
	{
		return true;
	}
	return false;
}

bool User::setDob(std::string DOB)
{
	if (DOB != "")
	{
		return true;
	}
	return false;
}

bool User::addCard(Card card)
{
	for (int i = 0; i < Card; i++)
	{
		if (card == Card[i])
		{
			return true;
		}
	}
	return false;
}