// project2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "bankUser.h"
#include "bankAccount.h"
#include <iostream>
#include "Driver.h"
#include <string>
#include <iomanip>

	void displayAccounts(std::vector<bankAccount> takenaccounts)
	{
		std::cout << "NUMBER     BALANCE     NAME     ADDRESS\n";
        //displays account info
		for (int i = 0; i < 3; i++)
		{
			std::cout << takenaccounts[i].getBankNumber() << "      " << "$" << std::fixed << std::setprecision(2) << takenaccounts[i].getBankBalance() << "     ";
			std::cout << takenaccounts[i].getUserName() << "     " << takenaccounts[i].getUserAddress() << std::endl;
		}
	};

	int main()
	{

		//declare account vector
		std::vector<bankAccount> useraccounts;
		//declare 3 users
		bankUser user1("bob", "1215n530w");
		bankUser user2("lob", "private drive");
		bankUser user3("joe", "carnival drive");
		//declare 3 accounts that take users
		bankAccount bankaccount1(12454, 500.00, user1);
		bankAccount bankaccount2(12984, 1000.00, user2);
		bankAccount bankaccount3(12566, 1200.00, user3);
		//push the accounts into the vector
		useraccounts.push_back(bankaccount1);
		useraccounts.push_back(bankaccount2);
		useraccounts.push_back(bankaccount3);
		//add 25$ to each account
		for (int i = 0; i < 3; i++)
		{
			useraccounts[i].addBankBalance(25);
		}
		
		//take away 100$ from each account
		for (int i = 0; i < 3; i++)
		{
			useraccounts[i].minusBankBalance(100);
		}
		displayAccounts(useraccounts);

		system("PAUSE");
		return 0;

	}
	


