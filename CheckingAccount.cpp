#include "CheckingAccount.h"

using namespace std;

CheckingAccount::CheckingAccount(double balance, double fee)
    : Account(balance) {
  this->fee = fee;
}

void CheckingAccount::credit(double c) { balance += c - fee; }

void CheckingAccount::debit(double c) {
  if (fee + balance - c >= 0) {
    balance -= c + fee;
  } else {
    cout << "Debit amount exceeded account balance.";
  }
}
