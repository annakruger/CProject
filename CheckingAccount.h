#ifndef CHECKINGACCOUNT_H
#define CHECKINGACCOUNT_H
#include <iostream>
#include "Account.h"

using namespace std;

class CheckingAccount : public Account{
public:
	CheckingAccount(double a=0, double b=0);
	double fee;
	void credit(double c);
	void debit(double d);

};
#endif