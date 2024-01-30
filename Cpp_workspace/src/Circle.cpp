#include "../headers/Circle.h"
#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
using namespace Shapes2d;

//parameterized constructor 
Circle::Circle(Point o, double r)
{
    mandatory = o;
    mRadius = r;
}

//Destructor
Circle :: ~ Circle()
{
    
}

//method that create txt file and take coordinate of shapes
void Circle::Plot()
{
    ofstream myFile("textfile/Circle.txt");
    int num_points = 100;
    if (myFile.is_open())
    {
        for (int i = 0; i < num_points; ++i)
        {
            double angleTheta = 2.0 * M_PI * i / num_points;
            double x = mandatory.x() + mRadius * cos(angleTheta);
            double y = mandatory.y() + mRadius * sin(angleTheta);
            myFile << x << " " << y << " " << mRadius << endl;
        }
        myFile.close();
    }
}
 
