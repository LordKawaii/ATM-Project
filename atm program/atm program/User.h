#pragma once
#include <cstring>
#include <string>
#include "card.h"
class User
{
public:
	User();

	bool setName(std::string name);
	bool setDob(std::string DOB);
	bool setZipcode(int zip);
	bool addCard(int Card);


private:
	std::string userName;
	int userZip;
	std::string userDOB;
	int userCard;
	int index;

};

