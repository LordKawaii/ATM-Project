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
	Card * findCard(int cardNumber);
	bool changePIN(int cardNumber, int conPIN, int newPIN);
	bool cardNumberScale(int cardNumber);
	bool grantAccessCard(int cardNumber, int conPIN);
	bool lockedOut(int cardNumber);
	bool expired(int cardNumber, long long int todaysDate);


private:
	std::string userName;
	int userZip;
	std::string userDOB;
	int userCard;
	int index;
	std::vector<card> cardVector;
	int cardVectorSize = 0;

};

