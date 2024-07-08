#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H
#include "Account.h"

using namespace std;

	class SavingsAccount : public Account {
	public:

		double interestRate;
		SavingsAccount(double a=0, double b=0);
		double calculateInterest();
	};
#endif
