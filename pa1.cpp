//
// Created by Ivo Georgiev on 8/25/15.
//
#include <iostream>
#include <cmath>
#include "Point.h"

using namespace std;

double computeArea(Point& a, Point& b, Point& c); //Takes pointers to 3 Points, and computes the area

int main(void) {
    Point pointA;
    Point pointB;
    Point pointC;

    cout << "Welcome to the 3D triangle test program." << endl;
    for (int i = 0; i < 3; i++){
        double x;
        double y;
        double z;

        cout << "Please enter the x coordinate of point " << i + 1 << endl;
        cin  >> x;
        cout << "Please enter the y coordinate of point " << i + 1 << endl;
        cin  >> y;
        cout << "Please enter the z coordinate of point " << i + 1 << endl;
        cin  >> z;
        if(i == 0){
            pointA.setX(x);
            pointA.setY(y);
            pointA.setZ(z);
        }
        if(i == 1){
            pointB.setX(x);
            pointB.setY(y);
            pointB.setZ(z);
        }
        if(i == 2){
            pointC.setX(x);
            pointC.setY(y);
            pointC.setZ(z);
        }
    }

    cout << "The area of the triangle is " << computeArea(pointA, pointB, pointC);
    return 0;
}

double computeArea(Point &a, Point &b, Point &c){
    double sideC = a.distanceTo(b);
    double sideA = b.distanceTo(c);
    double sideB = a.distanceTo(c);
    double s = (sideA + sideB + sideC) / 2;
    return sqrt(s*(s-sideA)*(s-sideB)*(s-sideC));
}