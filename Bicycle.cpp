
#include "Bicycle.h"
#include <iomanip>
#include <sstream>
using namespace std;

Bicycle::Bicycle() : CarbonFootprint() {}

// Bicycle function implementation
int Bicycle::getCarbonFootprint() const { return 0; }
int Bicycle::getWheelSize() { return wheelSize; }
void Bicycle::setWheelSize(int wheelSize) { this->wheelSize = wheelSize; }