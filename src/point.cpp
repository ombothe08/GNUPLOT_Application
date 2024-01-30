#include "../headers/Point.h"
#include <iostream>
using namespace Shapes2d;

//constructor that set the default coordinate to 0
Point :: Point()
{
    mX = 0.0;
    mY = 0.0;
}

//parameterized constructor 
Point::Point(double x, double y)
{
    mX = x;
    mY = y;
}

//Destructor
Point::~Point() {}

//method to return the x coordinate value
double Point::x() 
{
    return mX;
}

//method to return the uy coordinate value
double Point::y() 
{
    return mY;
}
