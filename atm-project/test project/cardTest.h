#pragma once
using namespace NUnit::Framework;
ref class cardTest
#include "card.h"
{
public:
	cardTest();
	[Test]
	//Is INPUT 4 digits
	void isConPINCorrect()
	{
		Assert.AreEqual(false, testCard.grantAccess(1234213));
		Assert.AreEqual(true, testCard.grantAccess(1234));
	}

	[Test]
	//Is confirmation PIN the correct PIN?
	void isConPINCorrect()
	{
		Assert.AreEqual(true, testCard.grantAccess(1234));
		Assert.AreEqual(false, testCard.grantAccess(2134));
	}

	[Test]
	//Is conformation PIN is the correct PIN was the PIN succesfully changed (Is the new stored PIN different from the old stored PIN)?
	//Is conformation PIN isn't the correct PIN is the PIN left unchanged?
	void isPINchanged()
	{
		Assert.AreEqual(true, testCard.changePIN(1234, 6666));
		Assert.AreEqual(false, testCard.changePIN(2134, 5555));
	}

	[Test]
	//Is conformation PIN isn't the correct PIN 3 times is the system locked?
	void isPINchanged()
	{
		Assert.AreEqual(false, testCard.grantAccess(5643, 6666));
		Assert.AreEqual(false, testCard.grantAccess(2134, 5555));
		Assert.AreEqual(false, testCard.grantAccess(2134, 5555));
		Assert.AreEqual(true, testCard.grantAccess(1234, 5555));
	}

	//checking if card is valid
	[Test]
	//Is the user-entered PIN the correct PIN stored on the card?
	void isPINchanged()
	{
		Assert.AreEqual(true, testCard.grantAccess(1234));
		Assert.AreEqual(false, testCard.grantAccess(2345));
	}

	[Test]
	//Is the card before it's expiration date?
	void isPINchanged()
	{
		Assert.AreEqual(false, testCard.expired(20150214));
		Assert.AreEqual(false, testCard.expired(20181212));
	}
};

