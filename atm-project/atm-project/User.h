#pragma once
#include <string>
#include <cstring>
class User
{
public:
	User();
	~User();

	bool setName(std::string name = "");
	bool setDob(std::string DOB);
	bool setZipcode(int zip);
	bool addCard(Card card);
};

