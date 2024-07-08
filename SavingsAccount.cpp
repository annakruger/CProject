#include <iostream>
#include "SavingsAccount.h"

SavingsAccount::SavingsAccount(double balance, double interestRate) : Account(balance) {
	this->interestRate = interestRate;

}

double SavingsAccount::calculateInterest(){
	double earnedInterest = balance * interestRate;
	return earnedInterest;
}
