// atm-project.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cstring>
#include <string>


int _tmain(int argc, _TCHAR* argv[])
{
	[Testfixture]
	
	[Test]
	Assert.AreEqual(true, User.setName("JJ"));
	Assert.AreEqual(false, User.setName(""));

	[Test]
	Assert.AreEqual(true, User.zipCode(97478));
	Assert.AreEqual(false, User.zipCode(123));

	[Test]
	Assert.AreEqual(true, User.setDob("Feb 8, 1989"));
	Assert.AreEqual(false, User.setDob(""));

	[Test]
	Assert.AreEqual(true, User.addCard(Card));
	Assert.AreEqual(false, User.addCard());
}

