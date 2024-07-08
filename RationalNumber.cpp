#include "RationalNumber.h"
#include <iostream>
#include <string>

using namespace std;

RationalNumber::RationalNumber(int numerator, int denominator) {
  if (denominator <= 0) {
    denominator = -denominator;
    if (denominator == 0) {
      cout << "Denominator cannot be zero.";
      denominator = 1;
    }
  }
  this->numerator = numerator;
  this->denominator = denominator;
}

string RationalNumber::toString() {
  return std::to_string(numerator) + "/" + std::to_string(denominator);
}

RationalNumber RationalNumber ::operator+(RationalNumber &ratNum) {
  int newNum = this->numerator * ratNum.denominator +
               this->denominator * ratNum.numerator;
  int newDen = this->denominator * ratNum.denominator;
  return RationalNumber(newNum, newDen);
}

RationalNumber RationalNumber ::operator-(RationalNumber &ratNum) {
  int newNum = this->numerator * ratNum.denominator -
               this->denominator * ratNum.numerator;
  int newDen = this->denominator * ratNum.denominator;
  return RationalNumber(newNum, newDen);
}

RationalNumber RationalNumber ::operator*(RationalNumber &ratNum) {
  int newNum = this->numerator * ratNum.numerator;
  int newDen = this->denominator * ratNum.denominator;
  return RationalNumber(newNum, newDen);
}

RationalNumber RationalNumber ::operator/(RationalNumber &ratNum) {
  int newNum = this->numerator * ratNum.denominator;
  int newDen = this->denominator * ratNum.numerator;
  return RationalNumber(newNum, newDen);
}

bool RationalNumber ::operator==(RationalNumber &ratNum) {
  return this->numerator == ratNum.numerator &&
         this->denominator == ratNum.denominator;
}
bool RationalNumber ::operator!=(RationalNumber &ratNum) {
  return this->numerator != ratNum.numerator ||
         this->denominator != ratNum.denominator;
}
// Compile command: g++ -std=c++17
// g++ -std=c++17 RationalNumber.cpp main.cpp -o main