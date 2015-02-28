// AtmProject.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <iostream>
#include <sstream>
#include <limits>
#include "User.h"
#include "Account.h"

using namespace std;

void Withdraw(User user);
void Deposit(User user);
void Balance(User user);
std::string typeToString(Account::account_type type);

int _tmain(int argc, _TCHAR* argv[])
{
	std::string name, DOB;
	int cardNumberInput;
	int todaysDate = 20150226;

	User theUser;
	Account * checking = new Account(Account::checking, 500);
	card * theOneCard = new card(1223334444555556, 1234, 20181212, checking); //THE DATABASE OF CARDS
	theUser.addCard(theOneCard);
	theUser.addAccount(checking);

	std::cout << "Please enter your card number: ";
	std::cin >> cardNumberInput;

	if (theUser.cardNumberScale(cardNumberInput) == true)
	{
		if (theUser.expired(cardNumberInput, todaysDate))
		{
			std::cout << "You're card is expired idiot" << endl;
			//do something to get rid of this idiot.
			system("PAUSE");
			return 0;
		}

		bool flag = true;
		while (flag == true)
		{
			if (theUser.lockedOut(cardNumberInput) == true)
			{
				std::cout << "HELP  ME SOMEBODY, SOMEONES TRYING TO ROB ME. GET AWAY FROM ME YOU SCOUNDREL. HEELPP.";
					//do something to get rid of this scoundrel
				break;
			}

			std::cout << "Please enter your PIN \n";
			int conPIN = 0;
			std::string pin;
			cin.clear();
			std::cin >> conPIN;
			if (theUser.findCard(theOneCard->getCardNumber())->grantAccess(conPIN) == true)
			{
				flag = false;
				std::cout << "Welcome, you got past all my security procedures, you are now free to roam the menu" << endl << endl;
			}
		} 
		
		bool secondFlag = true;
		do
		{
			int menuChoice;
			std::cout << "Press one for withdraw money." << endl;
			std::cout << "Press two for adding money" << endl;
			std::cout << "Press three for balance" << endl;
			std::cout << "Press four for changing PIN" << endl;
			std::cout << "Press five to exit" << endl;
			std::cin >> menuChoice;

			if (menuChoice == 1)
			{
				Withdraw(theUser);
			}
			else if (menuChoice == 2)
			{
				Deposit(theUser);
			}
			else if (menuChoice == 3)
			{
				Balance(theUser);
			}
			else if (menuChoice == 4)
			{
				std::cout << "Please enter your PIN again" << endl;
				int conPIN2;
				std::cin >> conPIN2;
				
				std::cout << "Please enter your NEEEEWWWW pin." << endl;
				int newPIN;
				std::cin >> newPIN;

				theUser.changePIN(cardNumberInput, conPIN2, newPIN);
			}
			else if (menuChoice == 5)
			{
				secondFlag = false;
			}

		}while (secondFlag == true);

	}

	system("PAUSE");
	return 0;
}

void Withdraw(User user)
{
	int amount;
	std::vector<Account *> accounts = user.getAccounts();
	int numAccounts = user.getNumAccount();
	int selection;
	int itter = 0;

	std::cout << "Which account do you want to withdraw from: ";
	for (itter = 0; itter < numAccounts; i++)
	{
		cout << itter+1;
		cout << ". ";
		cout << typeToString(accounts[itter]->getAccountType());
		cout << " ";
		cout << accounts[itter]->getAccountNum() << "\n";
	}
	cin >> selection;
	selection -=1;
	std::cout << "How much do you want to withdraw: ";
	std::cin >> amount;
	accounts[selection]->Withdraw(amount);
}

void Deposit(User user)
{
	int amount;
	std::vector<Account *> accounts = user.getAccounts();
	int numAccounts = user.getNumAccount();
	int selection;
	int itter = 0;

	std::cout << "Which account do you want to deposit to: ";
	for (itter = 0; itter < numAccounts; i++)
	{
		cout << itter+1;
		cout << ". ";
		cout << typeToString(accounts[itter]->getAccountType());
		cout << " ";
		cout << accounts[itter]->getAccountNum() << "\n";
	}
	cin >> selection;
	selection -=1;
	std::cout << "How much do you want to deposit: ";
	std::cin >> amount;
	accounts[selection]->Deposit(amount);
}

void Balance(User user)
{
	std::vector<Account *> accounts = user.getAccounts();
	int numAccounts = user.getNumAccount();
	int selection;
	int itter;
	
	std::cout << "Which account do you want the balance of: ";
	for (itter = 0; itter < numAccounts; i++)
	{
		cout << itter+1;
		cout << ". ";
		cout << typeToString(accounts[itter]->getAccountType());
		cout << " ";
		cout << accounts[itter]->getAccountNum() << "\n";
	}
	cin >> selection;
	selection -=1;
	cout << accounts[selection]->getBalance() << "\n";
	system("PAUSE");
}

string typeToString(Account::account_type type)
{
	switch (type)
	{
	case Account::checking:
		return "Cheking";
	case Account::savings:
		return "Savings";
	default:
		return "No such type";
	}
}