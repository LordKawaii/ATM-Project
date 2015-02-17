#pragma once
ref class card
{
private:
	int PIN = 1234;
	int cardNumber = 102323498504;
	int error = 0;
	int expDate = 20161209; //2016 december 9th


public:
	card();
	
	static bool changePIN(int conPIN, int newPIN)
	{
		if (error = >3 || conPIN > 999 || conPIN < 100)
			return false;
		if (conPIN == PIN)
			PIN = newPIN;
		else if (conPIN !- PIN)
			error++;
		if (newPIN == PIN)
			return true;
		else return false;
	}


	static bool grantAccess(int conPIN)
	{
		if (error = >3 || conPIN > 999 || conPIN < 100)
			return false;
		if (conPIN == PIN)
			return true;
		else
			return false;
	}

	static bool expired(int date)
	{
		if (date < expDate)
			return false;
		else return true;
};

