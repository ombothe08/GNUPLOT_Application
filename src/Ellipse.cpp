#include<iostream>
#include<fstream>
# include <cmath>
#include "../headers/Ellipse.h"
using namespace std;

Ellipse ::Ellipse(Point o,Point mMajorRadius, Point mMinorRadius )
{
    mandatory=o;
    this->mMinorRadius=mMinorRadius;
    this->mMajorRadius=mMajorRadius;
}

Ellipse ::~Ellipse()
{

}

//method that create txt file and take coordinate of shapes
void Ellipse :: plot()
{
    ofstream myFile("textfile/Ellipse.txt");
    int num_points = 100;

    //use to read the file if open
    if (myFile.is_open())
    {
        // Loop through 'num_points' times to generate points in an elliptical pattern
        for (int i = 0; i < num_points; ++i)
        {
            // Calculate the angle 'angleTheta' for the current point
            double angleTheta = 2.0 * M_PI * i / num_points;
            double x = mandatory.x() + mMajorRadius.x()* cos(angleTheta);
            double y = mandatory.y() + mMinorRadius.y()* sin(angleTheta);
            myFile << x << " " << y << " " << mMajorRadius.x()<< " " << mMinorRadius.y() << std::endl;
        }
        myFile.close();
    }
}

