#pragma once
#include <cstring>
#include <string>
#include <iostream>
#include <vector>
#include "card.h"
class User
{
public:
	User();

	bool setName(std::string name);
	bool setDob(std::string DOB);
	bool setZipcode(int zip);
	bool addCard(int Card);
<<<<<<< HEAD
=======

>>>>>>> 027b3f19ff2cf4954c4cb4040f04cceffb624237

private:
	std::string userName;
	int userZip;
	std::string userDOB;
	int userCard;
	int index;
<<<<<<< HEAD
	std::vector<card> cardVector;
	int cardVectorSize = 0;
=======

>>>>>>> 027b3f19ff2cf4954c4cb4040f04cceffb624237
};

