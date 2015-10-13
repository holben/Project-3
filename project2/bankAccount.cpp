#include "stdafx.h"
#include "bankAccount.h"
#include "bankUser.h"

bankAccount::bankAccount()
{
}

	//parameterized constructor
bankAccount::bankAccount(int BN, double BB, bankUser user)
{
	takenuser = user;
	bankNumber = BN;
	bankBalance = BB;
}

	//Member function returns the accounts's bank number
int bankAccount::getBankNumber(void)
{
	return bankNumber;
}

	//Member function returns the account's bank balance
double bankAccount::getBankBalance(void)
{
	return bankBalance;
}
//adds money to the bank account
void bankAccount::addBankBalance(double aBB)
{
	bankBalance += aBB;
}

//takes money from the bank account
void bankAccount::minusBankBalance(double mBB)
{
	bankBalance -= mBB;
}
std::string bankAccount::getUserName(void)
{
	return takenuser.getName();
}

std::string bankAccount::getUserAddress(void)
{
	return takenuser.getAddress();
}
bankAccount::~bankAccount()
{
}
