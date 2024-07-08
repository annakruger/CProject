#include "Building.h"
#include <iomanip>
#include <sstream>

using namespace std;

Building::Building(int squareFeet) : CarbonFootprint() {
  this->squareFeet = squareFeet;
}

// Building function implementation
int Building::getCarbonFootprint() const { return squareFeet * 134; }
int Building::getSquareFeet() { return squareFeet; }