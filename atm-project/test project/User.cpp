#include "stdafx.h"
#include "User.h"
#include "nunit.framework"


User::User()
{
}

User::setName(std::string name)
{
	if (name != "")
	{
		return true;
	}
	return false;
}

User::setZipcode(int zip)
{
	if (zip.rbegin - zip.rend = 5)
	{
		return true;
	}
	return false;
}

User::setDob(std::string DOB)
{
	if (DOB != "")
	{
		return true;
	}
	return false;
}

User::addCard(Card card)
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