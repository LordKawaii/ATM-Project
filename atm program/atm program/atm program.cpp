// atm program.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <string>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <iostream>
#include "User.h"

using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{

	std::string name, DOB;
	int zipCode, cardNumberInput;
	int todaysDate = 20150226;


	/*std::string name, DOB;
	int zipCode, Card;
>>>>>>> 52666a2cf6d0a4b465304e4d5a9016cf5a54032f
	User tempName, tempZip, tempDOB, tempCard;
	card * theOneCard = card(1223334444555556, 1234, 20181212);

	std::cout << "Please enter your name: ";
	std::cin >> name;

	tempName.setName(name);

	std::cout << "Please enter your zip code: ";
	std::cin >> zipCode;

	tempZip.setZipcode(zipCode);

	std::cout << "Please enter your date of birth: ";
	std::cin >> DOB;

	tempDOB.setDob(DOB);

	std::cout << "Please enter your card number: ";
	std::cin >> cardNumberInput;

	tempCard.addCard(cardNumberInput);

	if (theOneCard.cardNumberScale(cardNumberInput) == true)
	{
		if (theOneCard.expired(todaysDate))
		{
			std::cout << "You're card is expired idiot" << endl;
			//do something to get rid of this idiot.
		}
		if (theOneCard.lockedOut() == true)
		std::cout << "Please enter your PIN" << endl;

	}

	tempCard.addCard(Card);*/


	return 0;
}

