#pragma once
#include <iostream>
#include "bankUser.h"
class bankAccount
{
private:
	int bankNumber;
	double bankBalance;
	bankUser takenuser;
public:

	//empy constructor
	bankAccount();

	//parameterized constructor
	bankAccount(int BN, double BB, bankUser user);

	//Member function returns the accounts's bank number
	int getBankNumber(void);
	

	//Member function returns the account's bank balance
	double getBankBalance(void);

	//adds money to the account
	void addBankBalance(double aBB);
	//takes money from the account
	void minusBankBalance(double mBB);
	//gets user objects params
	std::string getUserName(void);
	std::string getUserAddress(void);
	
	//deconstructor
	~bankAccount();
};

