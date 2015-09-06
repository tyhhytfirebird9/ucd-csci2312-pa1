#include "Point.h"
#include <cmath>

// Default constructor
// Initializes the point to (0.0, 0.0)
Point::Point() {
  x = 0.0;
  y = 0.0;
  z = 0.0;
}

// Constructor
// Initializes the point to (initX, initY)
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

double Point::getX() const {
  return x;
}

double Point::getY() const {
  return y;
}

double Point::getZ() const {
  return z;
}

double Point::distanceTo(Point& secondPoint) const {
  return sqrt(pow((x + secondPoint.x),2) + pow((y + secondPoint.y),2) + pow((z + secondPoint.z),2));
}

double Point::computeArea(Point &a, Point &b, Point &c) const {
  double sideC = a.distanceTo(b);
  double sideA = b.distanceTo(c);
  double sideB = a.distanceTo(c);
  double s = (sideA + sideB + sideC) / 2;
  return sqrt(s*(s-sideA)*(s-sideB)*(s-sideC));
}