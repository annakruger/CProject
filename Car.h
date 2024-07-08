#ifndef CAR_H
#define CAR_H

#include "CarbonFootprint.h"
#include <iostream>

using namespace std;

class Car : public CarbonFootprint {
public:
  Car(int);
  virtual ~Car() = default; // virtual destructor
  int gallonsUsed;

  // override virtual function
  virtual int getCarbonFootprint() const override;
  int getGallonsUsed();
};
#endif