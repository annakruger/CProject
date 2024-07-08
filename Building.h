#ifndef BUILDING_H
#define BUILDING_H

#include "CarbonFootprint.h"

class Building : public CarbonFootprint {
public:
  Building(int);
  virtual ~Building() = default; // virtual destructor

  // override virtual function
  virtual int getCarbonFootprint() const override;
  int squareFeet;
  int getSquareFeet();
};
#endif