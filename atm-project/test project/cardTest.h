#pragma once
<<<<<<< HEAD
using namespace NUnit::Framework;
ref class cardTest
=======
>>>>>>> ce7e386c3ceaaf0732613e11f4cbc67d8f11e94a
#include "card.h"
<<<<<<< HEAD
using namespace NUnit::Framework;
ref class cardTest
=======

using namespace NUnit::Framework;
>>>>>>> 2ddb29ff9e8735bb4aa922d803d1744f59feca16
{
public:
	cardTest();
	[Test]
	//Is INPUT 4 digits
	void isConPINCorrect()
	{
<<<<<<< HEAD
		Assert::AreEqual(false, testCard.grantAccess(1234213));
		Assert::AreEqual(true, testCard.grantAccess(1234));
=======
		card testCard(10, 1234, 20161209);
		Assert.AreEqual(false, testCard.grantAccess(1234));
		card testCard(113456540546, 12, 20161209);
		Assert.AreEqual(false, testCard.grantAccess(12));
		card testCard(113456540546, 1234, 201209);
		Assert.AreEqual(false, testCard.grantAccess(1234));
>>>>>>> 2ddb29ff9e8735bb4aa922d803d1744f59feca16
	}

	[Test]
	//Is confirmation PIN the correct PIN?
	void isConPINCorrect()
	{
<<<<<<< HEAD
		Assert::AreEqual(true, testCard.grantAccess(1234));
		Assert::AreEqual(false, testCard.grantAccess(2134));
=======
		card testCard(102323498504, 1234, 20161209);
		Assert.AreEqual(true, testCard.grantAccess(1234));
		Assert.AreEqual(false, testCard.grantAccess(2134));
>>>>>>> 2ddb29ff9e8735bb4aa922d803d1744f59feca16
	}

	[Test]
	//Is conformation PIN is the correct PIN was the PIN succesfully changed (Is the new stored PIN different from the old stored PIN)?
	//Is conformation PIN isn't the correct PIN is the PIN left unchanged?
	void isPINchanged()
	{
<<<<<<< HEAD
		Assert::AreEqual(true, testCard.changePIN(1234, 6666));
		Assert::AreEqual(false, testCard.changePIN(2134, 5555));
=======
		card testCard(102323498504, 1234, 20161209);
		Assert.AreEqual(true, testCard.changePIN(1234, 6666));
		Assert.AreEqual(false, testCard.changePIN(2134, 5555));
>>>>>>> 2ddb29ff9e8735bb4aa922d803d1744f59feca16
	}

	[Test]
	//Is conformation PIN isn't the correct PIN 3 times is the system locked?
	void isPINchanged()
	{
<<<<<<< HEAD
		Assert::AreEqual(false, testCard.grantAccess(5643, 6666));
		Assert::AreEqual(false, testCard.grantAccess(2134, 5555));
		Assert::AreEqual(false, testCard.grantAccess(2134, 5555));
		Assert::AreEqual(true, testCard.grantAccess(1234, 5555));
=======
		card testCard(102323498504, 1234, 20161209);
		Assert.AreEqual(false, testCard.grantAccess(5643, 6666));
		Assert.AreEqual(false, testCard.grantAccess(2134, 5555));
		Assert.AreEqual(false, testCard.grantAccess(2134, 5555));
		Assert.AreEqual(true, testCard.grantAccess(1234, 5555));
>>>>>>> 2ddb29ff9e8735bb4aa922d803d1744f59feca16
	}

	//checking if card is valid
	[Test]
	//Is the user-entered PIN the correct PIN stored on the card?
	void isPINchanged()
	{
<<<<<<< HEAD
		Assert::AreEqual(true, testCard.grantAccess(1234));
		Assert::AreEqual(false, testCard.grantAccess(2345));
=======
		card testCard(102323498504, 1234, 20161209);
		Assert.AreEqual(true, testCard.grantAccess(1234));
		Assert.AreEqual(false, testCard.grantAccess(2345));
>>>>>>> 2ddb29ff9e8735bb4aa922d803d1744f59feca16
	}

	[Test]
	//Is the card before it's expiration date?
	void isPINchanged()
	{
<<<<<<< HEAD
		Assert::AreEqual(false, testCard.expired(20150214));
		Assert::AreEqual(false, testCard.expired(20181212));
=======
		card testCard(102323498504, 1234, 20161209);
		Assert.AreEqual(false, testCard.expired(20150214));
		Assert.AreEqual(false, testCard.expired(20181212));
>>>>>>> 2ddb29ff9e8735bb4aa922d803d1744f59feca16
	}

	[Test]
	//Is the card number correct?
	void isNumCorrect
	{
		card testCard(102323498504, 1234, 20161209);
		Assert.AreEqual(true, testCard.checkCardNum(102323498504));
		Assert.AreEqual(false, testCard.checkCardNum(201812120275));

	}
};

