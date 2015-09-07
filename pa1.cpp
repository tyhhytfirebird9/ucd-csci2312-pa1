//
// Created by Ivo Georgiev on 8/25/15.
// Edited by Alex Foreman

// Required directives
#include <iostream>
#include <iomanip>      // required for setprecision()
#include <cmath>        // required for sqrt() and pow()
#include "Point.h"      // required to use the Point class

using namespace std;

// Takes 3 Points by reference, and computes the area of the triangle
double computeArea(Point& a, Point& b, Point& c);

int main(void) {
    Point pointA;   // Creates 3 points whose
    Point pointB;   // coordinates are set by
    Point pointC;   // the for loop.

    cout << "Welcome to the 3D triangle test program." << endl;

    // For loop iterates 3 times to gather user input and assign values to each point
    for (int i = 0; i < 3; i++){
        double xCoord;      // Temporary x-coordinate value to be stored in a point object
        double yCoord;      // Temporary y-coordinate value to be stored in a point object
        double zCoord;      // Temporary z-coordinate value to be stored in a point object

        cout << "Please enter the x coordinate of point " << i + 1 << endl;
        cin  >> xCoord;
        cout << "Please enter the y coordinate of point " << i + 1 << endl;
        cin  >> yCoord;
        cout << "Please enter the z coordinate of point " << i + 1 << endl;
        cin  >> zCoord;

        /*
         * The following if statements assign the temporary
         * x, y, and z coordinate values into a point. The
         * iterator value i is used to determine to which of
         * the three points coordinates should be assigned.
         */
        if(i == 0){
            pointA.setX(xCoord);
            pointA.setY(yCoord);
            pointA.setZ(zCoord);
        }
        if(i == 1){
            pointB.setX(xCoord);
            pointB.setY(yCoord);
            pointB.setZ(zCoord);
        }
        if(i == 2){
            pointC.setX(xCoord);
            pointC.setY(yCoord);
            pointC.setZ(zCoord);
        }
    }

    // Sets decimal places to 2, and calls computeArea function passing in
    // the three points set up in the for loop.
    cout << "The area of the triangle is ";
    cout << fixed << setprecision(2) << computeArea(pointA, pointB, pointC);
    return 0;
}

/*
 * See simple explanation above the function declaration/prototype
 * In depth explanation:
 *      Computes the length of each side of the triangle, using the distanceTo formula.
 *      SideA corresponds to the length between point b and c, and so on. The semiperimeter
 *      is a value used in Heron's formula. The function then uses Heron's formula to
 *      calculate the area of the triangle, and returns that values to the main function.
 */

double computeArea(Point &a, Point &b, Point &c){
    double sideC = a.distanceTo(b);
    double sideA = b.distanceTo(c);
    double sideB = a.distanceTo(c);
    double semiperimeter = (sideA + sideB + sideC) / 2;
    return sqrt(semiperimeter * (semiperimeter - sideA) * (semiperimeter - sideB) * (semiperimeter - sideC));
}