#pragma once
#include <cstring>
#include <string>
ref class User
{
public:
	User();

	bool setName(std::string name = "");
	bool setDob(std::string DOB);
	bool setZipcode(int zip);
	bool addCard(Card card);
};

