// FILE: Point.cpp
// CLASS IMPLEMENTED: Point

#include "Point.h"
#include <cmath>

// Default constructor
// Initializes the point to (0.0, 0.0, 0.0)
Point::Point() {
  x = 0.0;
  y = 0.0;
  z = 0.0;
}

// Constructor
// Initializes the point to (initX, initY, initZ)
Point::Point(double initX, double initY, double initZ) {
  x = initX;
  y = initY;
  z = initZ;
}

// Destructor
// No dynamic allocation, so nothing to do; if omitted, generated automatically
Point::~Point() {
  // no-op
}

// Mutator methods
// Change the values of private member variables
void Point::setX(double newX) {
  x = newX;
}

void Point::setY(double newY) {
  y = newY;
}

void Point::setZ(double newZ) {
  z = newZ;
}

// Accessors
// Return the current values of private member variables
// Each is declared constant because they do not need to
// change the values of any member variable in an object.
double Point::getX() const {
  return x;
}

double Point::getY() const {
  return y;
}

double Point::getZ() const {
  return z;
}

// Calculates the distance between the point that invokes the method and the point referenced.
double Point::distanceTo(Point& secondPoint) const {
  return sqrt(pow((x - secondPoint.x),2) + pow((y - secondPoint.y),2) + pow((z - secondPoint.z),2));
}