#pragma once
#include <string>
class User
{
public:
	User();
	~User();
	bool setName(std::string name);
	bool setDob(std::string DOB);
	bool setZipcode(int zip);
	bool addCard(int Card);

private:
	std::string userName;
	int userZip;
	std::string userDOB;
	int userCard;
};

