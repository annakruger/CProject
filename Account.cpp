
#include "Account.h"

using namespace std;

Account::Account(double b) : balance(b) {

  if (balance < 0) {
    balance = 0;
  }
}

double Account::getBalance() { return balance; }

void Account::credit(double c) { balance += c; }

void Account::debit(double c) {
  if (balance - c >= 0) {
    balance -= c;
  } else {
    cout << "Debit amount exceeded account balance.";
  }
}
