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
	std::string name;
	User tempName;

	std::cout << "Please enter your name: " << endl;
	std::cin >> name;

	tempName.setName(name);

	return 0;
}

