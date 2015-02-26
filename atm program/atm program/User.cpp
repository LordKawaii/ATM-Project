
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
<<<<<<< HEAD
		if (name != "")
		{
			names[index] = index;
			//userName = name;
			return true;
		}
		return false;
	}	
=======
		return true;
	}
	return false;
>>>>>>> origin/master
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
<<<<<<< HEAD
		//userDOB = DOB;
=======
>>>>>>> origin/master
		return true;
	}
	return false;
}

bool User::addCard(int Card)
{
	long int cardNum[3] = {123456789123, 987654321987, 654321987654};

	for (int i = 0; i < 3; i++)
	{
		if (Card == cardNum[i])
		{
<<<<<<< HEAD
			//userCard = Card;
=======
>>>>>>> origin/master
			return true;
		}
	}
	return false;
}