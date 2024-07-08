#include <iostream>

using namespace std;

class RationalNumber {
public:
  RationalNumber(int, int);
  string toString();
  RationalNumber operator+(RationalNumber &ratNum);
  RationalNumber operator-(RationalNumber &ratNum);
  RationalNumber operator*(RationalNumber &ratNum);
  RationalNumber operator/(RationalNumber &ratNum);
  bool operator==(RationalNumber &ratNum);
  bool operator!=(RationalNumber &ratNum);

private:
  int numerator, denominator;
};