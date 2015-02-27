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
#include "User.h"

using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{

	std::string name, DOB;
	int cardNumberInput;
	int todaysDate = 20150226;


	std::string name, DOB;

	/*std::string name, DOB;
	int zipCode, Card;
>>>>>>> 589806ca4c281d6ae93701c21788070f79f34705

	//User tempName, tempZip, tempDOB, tempCard;
	card * theOneCard = card(1223334444555556, 1234, 20181212); //THE DATABASE OF CARDS

	User theUser.addCard(theOneCard);

/*	std::cout << "Please enter your name: ";
	std::cin >> name;

	tempName.setName(name);

	std::cout << "Please enter your zip code: ";
	std::cin >> zipCode;

	tempZip.setZipcode(zipCode);

	std::cout << "Please enter your date of birth: ";
	std::cin >> DOB;

	tempDOB.setDob(DOB);*/

	std::cout << "Please enter your card number: ";
	std::cin >> cardNumberInput;

	//tempCard.addCard(cardNumberInput);

	if (theUser.cardNumberScale(cardNumberInput) == true)
	{
		if (theUser.expired(cardNumberInput, todaysDate))
		{
			std::cout << "You're card is expired idiot" << endl;
			//do something to get rid of this idiot.
			return -1;
		}
		bool flag = true;
		do 
		{
			if (theUser.lockedOut(cardNumberInput) == true)
			{
				std::cout << "HELP  ME SOMEBODY, SOMEONES TRYING TO ROB ME. GET AWAY FROM ME YOU SCOUNDREL. HEELPP.";
					//do something to get rid of this scoundrel
					return 0;
			}
			std::cout << "Please enter your PIN" << endl;
			int conPIN;
			std::cin >> conPIN;
			if (theUser.grantAccess(cardNumberInput, conPIN) == true)
				flag = false;
		} while (flag == true);
		
		bool secondFlag = true;
		do
		{
			int menuChoice;
			std::cout << "Welcome, you got past all my security procedures, you are now free to roam the menu" << endl;
			std::cout << "Press one for withdraw money." << endl;
			std::cout << "Press two for adding money" << endl;
			std::cout << "Press three for something idk" << endl;
			std::cout << "Press four for changing PIN" << endl;
			std::cin >> menuChoice;

			if (menuChoice == 1)
			{
				
				std::string amount;
				std::cout << "How much do you want to withdraw: ";
				std::cin >> amount;

			}
			else if (menuChoice == 2)
			{

			}
			else if (menuChoice == 3)
			{

			}
			else if (menuChoice == 4)
			{

			}
		}while (secondFlag == true);

	}

	tempCard.addCard(Card);


	return 0;
}

