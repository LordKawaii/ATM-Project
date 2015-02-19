// test project.h

#pragma once
#include "Account.h"
#include "User.h"
#include "card.h"

using namespace NUnit::Framework;

namespace testproject {
	
	[TestFixture]
	public ref class Class1
	{
		// TODO: Add your methods for this class here.
	public:
		[Test]
		void TestWithdraw()
		{
			
			int balance = 0;
			account.Deposit(10);
			balance = account.getBalance();
			balance -= 10;
			account.Withdraw(10);
			Assert::AreEqual(balance, account.getBalance());
		}

		[Test]
		void TestOverWithdraw()
		{
			int balance = 0;
			balance = account.getBalance();
			balance += 10;
			account.Withdraw(10);
		}

		[Test]
		void TestDisposit()
		{
			int balance = 0;
			balance = account.getBalance();
			balance += 10;
			account.Deposit(10);
			Assert::AreEqual(balance, account.getBalance());
		}

		[Test]
		void GetBalance()
		{
			Account tempAccount;
			int balance = tempAccount.getBalance();
			Assert::AreEqual(balance, 0);
		}

		[Test]
		void testSetName()
		{
			Assert::AreEqual(true, user.setName("JJ"));
			Assert::AreEqual(false, user.setName(""));
		}

		[Test]
		void testSetZip()
		{
			Assert::AreEqual(true, user.setZipcode(97478));
			Assert::AreEqual(false, user.setZipcode(9747));
		}

		[Test]
		void testSetDOB()
		{
			Assert::AreEqual(true, user.setDob("12/07/1992"));
			Assert::AreEqual(false, user.setDob(""));
		}

		[Test]
		void testAddCard()
		{
			Assert::AreEqual(true, user.addCard(123456789123));
			Assert::AreEqual(false, user.addCard(894654));
		}

		//CARDTEST AHEAD
		//
		//
		//

		//Is INPUT 4 digits
		[Test]
		void inputCorrectLength()
		{
			card testCard(10, 1234, 20161209);
			Assert::AreEqual(false, testCard.grantAccess(1234));
			card testCard2(113456540546, 12, 20161209);
			Assert::AreEqual(false, testCard2.grantAccess(12));
			card testCard3(113456540546, 1234, 201209);
			Assert::AreEqual(false, testCard3.grantAccess(1234));
		}

		[Test]
		//Is confirmation PIN the correct PIN?
		void isConPINCorrect()
		{
			card testCard2(102323498504, 1234, 20161209);
			Assert::AreEqual(true, testCard2.grantAccess(1234));
			Assert::AreEqual(false, testCard2.grantAccess(2134));
		}

		[Test]
		//Is conformation PIN is the correct PIN was the PIN succesfully changed (Is the new stored PIN different from the old stored PIN)?
		//Is conformation PIN isn't the correct PIN is the PIN left unchanged?
		void isPINchanged()
		{
			card testCard3(102323498504, 1234, 20161209);
			Assert::AreEqual(true, testCard3.changePIN(1234, 6666));
			Assert::AreEqual(true, testCard3.grantAccess(6666));
		}

		[Test]
		//Is conformation PIN isn't the correct PIN 3 times is the system locked?
		void isLockoutWorking()
		{
			card testCard4(102323498504, 1234, 20161209);
			Assert::AreEqual(false, testCard4.changePIN(5643, 6666));
			Assert::AreEqual(false, testCard4.changePIN(2134, 5555));
			Assert::AreEqual(false, testCard4.changePIN(2134, 5555));
			Assert::AreEqual(false, testCard4.changePIN(1234, 5555));
		}

		[Test]
		//Is the card before it's expiration date?
		void isExpired()
		{
			card testCard5(102323498504, 1234, 20161209);
			Assert::AreEqual(true, testCard5.expired(20150214));
			Assert::AreEqual(false, testCard5.expired(20181212));
		}

		[Test]
		//Is the card number correct?
		void isNumCorrect()
		{
			card testCard6(102323498504, 1234, 20161209);
			Assert::AreEqual(true, testCard6.checkCardNum(102323498504));
			Assert::AreEqual(false, testCard6.checkCardNum(201812120275));

		}
	private:
		Account account;
		User user;
	};
}
