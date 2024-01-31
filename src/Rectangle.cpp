#include<iostream>
#include<cmath>
#include <fstream>
#include "../headers/Rectangle.h"
using namespace std;
using namespace Shapes2d;

Rectangle::Rectangle(Point d1,Point d2)
{
     mandatory=d1; 
     mDiagonal = d2 ; 
}

Rectangle::~Rectangle()
{
    
}

//method that create txt file and take coordinate of shapes
void  Rectangle::plot()
{
        ofstream myfile("textfile/Rectangle.txt");
        // Write the coordinates of the all vertex to the file
        myfile << mandatory .x() << " " <<mandatory .y() <<endl;
        myfile << mDiagonal .x() << " " <<mandatory .y() <<endl;
        myfile << mDiagonal .x() << " " <<mDiagonal . y() <<endl;
        myfile << mandatory .x() << " " <<mDiagonal .y() <<endl;
        myfile << mandatory .x() << " " <<mandatory .y() <<endl;
        myfile.close();
}