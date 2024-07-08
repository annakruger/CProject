#include "Car.h"
#include <iomanip>
#include <sstream>
using namespace std;

Car::Car(int gallonsUsed) : CarbonFootprint() {
  this->gallonsUsed = gallonsUsed;
}
// Car function implementation
int Car::getCarbonFootprint() const { return gallonsUsed * 20; }
int Car::getGallonsUsed() { return gallonsUsed; }
