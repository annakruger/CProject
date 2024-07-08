#ifndef CARBONFOOTPRINT_H
#define CARBONFOOTPRINT_H

#include <iostream>

using namespace std;

class CarbonFootprint {
public:
  CarbonFootprint();
  virtual int getCarbonFootprint() const = 0; // virtual function
  virtual ~CarbonFootprint() = default;       // virtual default constructor
  int carbonFootprint;
};
#endif