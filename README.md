## CSCI 2312: Programming Assignment 1

###_Working with Objects_

* * *

C++ lets us program with _objects_. We describe objects in C++ by declaring and defining _classes_. We _declare_ our class's structure in a header file, just like in C, and _define_ it (that is , write the code that actually does the work) in a corresponding source code file.


###_Description of the Project_

* * *

**_Prompt_**

The objective of this assignment was to clone the provided _2-dimensional_ point class that was obtained from the github repository, and adapt it to work with _3-dimensional_ points. We then were prompted to implement a member function of the point class that would estimate
 the distance between the object that called the method, and the point that was passed in. Next we were instructed to implement a non-member function that would calculate the area of the _3-dimensional_ triangle.
 
**_Description of the Code_**
 
The main function first _instantiates_ three instances of the _Point_ class: _pointA, pointB, pointC_. It then begins a _for loop_ that runs three times, which prompts the user to enter the x, y, and z coordinate values for a single point. At the bottom of the _for loop_, the
 _if statements_ determine which point should be worked with and assigns the temporary x, y, and z coordinate values into the member variables of that point. After the _for loop_ finishes executing the precision is set to 2 decimal places, and the _computeArea()_ global function is
 called, with _pointA, pointB, and pointC_ passed in by reference. This function calls the member function _distanceTo()_ three times to determine each side length of the triangle. Then plugs these values into Heron's formula to determine the area of the triangle. This area is
 printed to the screen along with a message to the user.
 
 
###_Files Included_
 
 * * *
 
 1. pa1.cpp
 2. Point.cpp
 3. Point.h
 
###_Documentation_

* * *

**_Documentation of the Point class. (Also included in Point.h)_**

```

    FILE: Point.h
    CLASS PROVIDED: Point (a class for a point on a three-dimensional plane)

    CONSTRUCTORS for the Point class:
        Point()
            Post condition: An instance of the Point class has been created, but not initialized.

        Point(double x, double y, double z)
            Post condition: An instance of the Point class has ben created, and each of the member
            values have been set to the values passed in.

    MUTATOR MEMBER FUNCTIONS for the Point class:
        void setX(double newX)
            Post condition: The x coordinate is set to newX of the object that called this member function.

        void setY(double newY)
            Post condition: The y coordinate is set to newY of the object that called this member function.

        void setZ(double newZ)
            Post condition: The z coordinate is set to newZ of the object that called this member function.

    CONSTANT ACCESSOR MEMBER FUNCTIONS for the Point class:
        double getX() const
            Post condition: Returns the value of the x coordinate of the object that called this function.

        double getY() const
            Post condition: Returns the value of the y coordinate of the object that called this function.

        double getZ() const
            Post condition: Returns the value of the z coordinate of the object that called this function.

        double distanceTo(Point&) const
            Post condition: Returns the value of the distance between the calling object and the object passed in.
```

**_Documentation of the Global computeArea() function_**

```

Function declaration:

Takes 3 Points by reference, and computes the area of the triangle

    double computeArea(Point& a, Point& b, Point& c)

Function definition:
    
     See simple explanation above the function declaration/prototype
        In depth explanation:
            Computes the length of each side of the triangle, using the distanceTo formula.
            SideA corresponds to the length between point b and c, and so on. The semiperimeter
            is a value used in Heron's formula. The function then uses Heron's formula to
            calculate the area of the triangle, and returns that values to the main function.
     
    
    double computeArea(Point &a, Point &b, Point &c){
        double sideC = a.distanceTo(b);
        double sideA = b.distanceTo(c);
        double sideB = a.distanceTo(c);
        double semiperimeter = (sideA + sideB + sideC) / 2;
        return sqrt(semiperimeter * (semiperimeter - sideA) * (semiperimeter - sideB) * (semiperimeter - sideC));
    }
    
```



###_Compiler_ 

* * *

_g++_


###_Acknowledgements_

* * *

<font size="-1">ACKNOWLEDGEMENT: Modelled after CS11 Lab 1 at Caltech.</font>

<font size="-1">Some content Copyright (C) 2004-2010, California Institute of Technology.</font>