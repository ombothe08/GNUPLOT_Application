#include "../headers/Circle.h"
#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
using namespace Shapes2d;

Circle::Circle(Point o, double r)
{
    mandatory = o;
    mRadius = r;
}

Circle :: ~ Circle()
{
    
}

//method that create txt file and take coordinate of shapes
void Circle::plot()
{
    ofstream myFile("textfile/Circle.txt");
    int num_points = 100;
    if (myFile.is_open())
    {
        // Loop through 'num_points' times to generate points in a circular pattern
        for (int i = 0; i < num_points; ++i)
        {
            // Calculate the angle 'angleTheta' for the current point
            double angleTheta = 2.0 * M_PI * i / num_points;
            // Calculate the x and y coordinates of the point
            double x = mandatory.x() + mRadius * cos(angleTheta);
            double y = mandatory.y() + mRadius * sin(angleTheta);
            myFile << x << " " << y << " " << mRadius << endl;
        }
        myFile.close();
    }
}
 
