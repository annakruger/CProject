#ifndef BICYCLE_H
#define BICYCLE_H

#include "CarbonFootprint.h"
#include <iostream>

using namespace std;

class Bicycle : public CarbonFootprint {
public:
  Bicycle();
  virtual ~Bicycle() = default; // virtual destructor
  int wheelSize;
  
  // override virtual function 
  virtual int getCarbonFootprint() const override;
  int getWheelSize();
  void setWheelSize(int);
};
#endif