#pragma once
#include <iostream>
class bankUser
{
private:
	std::string name;
	std::string address;
public:
	bankUser();
	bankUser(std::string n, std::string a);
	std::string getAddress();
	std::string getName();
	~bankUser();
};

