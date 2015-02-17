// test project.h

#pragma once
#include "Account.h"

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
	private:
		Account account;
	};
}