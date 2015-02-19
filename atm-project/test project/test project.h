// test project.h

#pragma once
#include "Account.h"
#include "User.h"

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
			Assert::AreEqual(true, User.setName("JJ"));
			Assert::AreEqual(false, User.setName(""));
		}

		[Test]
		void testSetZip()
		{
			Assert::AreEqual(true, User.setZip(97478));
			Assert::AreEqual(false, User.setZip(9747));
		}

		[Test]
		void testSetDOB()
		{
			Assert::AreEqual(true, User.setDob("12/07/1992"));
			Assert::AreEqual(false, User.setDob(""));
		}

		[Test]
		void testAddCard()
		{
			Assert::AreEqual(true, User.addCard(123456789123));
			Assert::AreEqual(false, User.addCard());
		}
	private:
		Account account;
	};
}
