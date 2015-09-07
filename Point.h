//  FILE: Point.h
//  CLASS PROVIDED: Point (a class for a point on a three-dimensional plane)
//
//  CONSTRUCTORS for the Point class:
//      Point()
//          Post condition: An instance of the Point class has been created, but not initialized.
//
//      Point(double x, double y, double z)
//          Post condition: An instance of the Point class has ben created, and each of the member
//          values have been set to the values passed in.
//
//  MUTATOR MEMBER FUNCTIONS for the Point class:
//      void setX(double newX)
//          Post condition: The x coordinate is set to newX of the object that called this member function.
//
//      void setY(double newY)
//          Post condition: The y coordinate is set to newY of the object that called this member function.
//
//      void setZ(double newZ)
//          Post condition: The z coordinate is set to newZ of the object that called this member function.
//
//  CONSTANT ACCESSOR MEMBER FUNCTIONS for the Point class:
//      double getX() const
//          Post condition: Returns the value of the x coordinate of the object that called this function.
//
//      double getY() const
//          Post condition: Returns the value of the y coordinate of the object that called this function.
//
//      double getZ() const
//          Post condition: Returns the value of the z coordinate of the object that called this function.
//
//      double distanceTo(Point&) const
//          Post condition: Returns the value of the distance between the calling object and the object passed in.




// A 3-dimensional point class!
// Coordinates are double-precision floating point.

#ifndef __point_h
#define __point_h

class Point {

private:
    double x;
    double y;
    double z;

public:
    // Constructors
    Point();                                // default constructor
    Point(double x, double y, double z);    // three-argument constructor

    // Destructor
    ~Point();

    // Mutator methods
    void setX(double newX);
    void setY(double newY);
    void setZ(double newZ);

    // Accessor methods
    double getX() const;
    double getY() const;
    double getZ() const;
    double distanceTo(Point&) const; // Calculates the distance between two points
};

#endif // __point_h