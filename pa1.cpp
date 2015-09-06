//
// Created by Ivo Georgiev on 8/25/15.
//
#include <iostream>
#include "Point.h"

using namespace std;

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

    cout << "The area of the triangle is " << pointA.computeArea(pointA, pointB, pointC);
    return 0;
}
