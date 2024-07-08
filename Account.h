#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <iostream>

using namespace std;

class Account {

public:
	Account(double a=0);
	double balance;
	double getBalance();
	void credit(double b);
	void debit(double c);
};
#endif