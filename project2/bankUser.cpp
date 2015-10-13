#include "stdafx.h"
#include "bankUser.h"
#include <iostream>

bankUser::bankUser()
{
}
bankUser::bankUser(std::string n, std::string a)
{
	name = n;
	address = a;
};
std::string bankUser::getAddress()
{
	return address;
};
std::string bankUser::getName()
{
	return name;
};

bankUser::~bankUser()
{
}
