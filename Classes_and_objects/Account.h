#pragma once
#include <string>
class Account
{
private:
	std::string name;
	double balance;
public:

	Account(std::string n, double bal);
	Account(double bal);
	void set_bal(double bal) { balance = bal; }
	double get_bal() { return balance; }

	void set_name(std::string n);
	std::string get_name();

	bool deposit(double amount);
	bool withdraw(double amount);
	
};

