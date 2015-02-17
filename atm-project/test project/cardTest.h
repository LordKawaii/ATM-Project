#pragma once
<<<<<<< HEAD
<<<<<<< HEAD
using namespace NUnit::Framework;
ref class cardTest
=======
>>>>>>> ce7e386c3ceaaf0732613e11f4cbc67d8f11e94a
#include "card.h"
=======
>>>>>>> 66ae5e97a1e3aa075331e6e9939a7e6d85cd9ad4
<<<<<<< HEAD

=======
>>>>>>> 66edf0661c9c7d6ac2b1e092da5cd6a951867579
#include "card.h"

using namespace NUnit::Framework;
ref class cardTest
<<<<<<< HEAD
=======


using namespace NUnit::Framework;

>>>>>>> 66edf0661c9c7d6ac2b1e092da5cd6a951867579
{
public:
	cardTest();
	[Test]
	//Is INPUT 4 digits
	void inputCorrectLength()
	{
<<<<<<< HEAD
		card testCard(10, 1234, 20161209);
		Assert::AreEqual(false, testCard.grantAccess(1234));
		card testCard2(113456540546, 12, 20161209);
		Assert::AreEqual(false, testCard2.grantAccess(12));
		card testCard3(113456540546, 1234, 201209);
		Assert::AreEqual(false, testCard3.grantAccess(1234));
=======

		Assert::AreEqual(false, testCard.grantAccess(1234213));
		Assert::AreEqual(true, testCard.grantAccess(1234));

>>>>>>> 66edf0661c9c7d6ac2b1e092da5cd6a951867579
	}

	[Test]
	//Is confirmation PIN the correct PIN?
	void isConPINCorrect()
	{
<<<<<<< HEAD
		card testCard(102323498504, 1234, 20161209);
=======

>>>>>>> 66edf0661c9c7d6ac2b1e092da5cd6a951867579
		Assert::AreEqual(true, testCard.grantAccess(1234));
		Assert::AreEqual(false, testCard.grantAccess(2134));
	}

	[Test]
	//Is conformation PIN is the correct PIN was the PIN succesfully changed (Is the new stored PIN different from the old stored PIN)?
	//Is conformation PIN isn't the correct PIN is the PIN left unchanged?
	void isPINchanged()
	{
<<<<<<< HEAD
		card testCard(102323498504, 1234, 20161209);
=======

>>>>>>> 66edf0661c9c7d6ac2b1e092da5cd6a951867579
		Assert::AreEqual(true, testCard.changePIN(1234, 6666));
		Assert::AreEqual(false, testCard.changePIN(2134, 5555));
	}

	[Test]
	//Is conformation PIN isn't the correct PIN 3 times is the system locked?
	void isLockoutWorking()
	{
<<<<<<< HEAD
		card testCard(102323498504, 1234, 20161209);
		Assert::AreEqual(false, testCard.changePIN(5643, 6666));
		Assert::AreEqual(false, testCard.changePIN(2134, 5555));
		Assert::AreEqual(false, testCard.changePIN(2134, 5555));
		Assert::AreEqual(true, testCard.changePIN(1234, 5555));
=======

		Assert::AreEqual(false, testCard.grantAccess(5643, 6666));
		Assert::AreEqual(false, testCard.grantAccess(2134, 5555));
		Assert::AreEqual(false, testCard.grantAccess(2134, 5555));
		Assert::AreEqual(true, testCard.grantAccess(1234, 5555)); 
>>>>>>> 66edf0661c9c7d6ac2b1e092da5cd6a951867579
	}

	//checking if card is valid
/*	[Test]
	//Is the user-entered PIN the correct PIN stored on the card?
	void isPINchanged()
	{
<<<<<<< HEAD
		card testCard(102323498504, 1234, 20161209);
		Assert::AreEqual(true, testCard.grantAccess(1234));
		Assert::AreEqual(false, testCard.grantAccess(2345));
	}*/
=======

		Assert::AreEqual(true, testCard.grantAccess(1234));
		Assert::AreEqual(false, testCard.grantAccess(2345));
	}
>>>>>>> 66edf0661c9c7d6ac2b1e092da5cd6a951867579

	[Test]
	//Is the card before it's expiration date?
	void isExpired()
	{
<<<<<<< HEAD
		card testCard(102323498504, 1234, 20161209);
=======

>>>>>>> 66edf0661c9c7d6ac2b1e092da5cd6a951867579
		Assert::AreEqual(false, testCard.expired(20150214));
		Assert::AreEqual(false, testCard.expired(20181212));
	}

	[Test]
	//Is the card number correct?
	void isNumCorrect()
	{
		card testCard(102323498504, 1234, 20161209);
		Assert::AreEqual(true, testCard.checkCardNum(102323498504));
		Assert::AreEqual(false, testCard.checkCardNum(201812120275));

	}
};

