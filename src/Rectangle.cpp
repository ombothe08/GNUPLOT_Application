#include<iostream>
#include<cmath>
#include <fstream>
#include "../headers/Rectangle.h"
using namespace std;
using namespace Shapes2d;

//parameterized constructor 
Rectangle::Rectangle(Point d1,Point d2)
{
     mandatory=d1; //11
     mDiagonal = d2 ; //5 4
}

//Destructor
Rectangle::~Rectangle()
{
    
}

//method that create txt file and take coordinate of shapes
void  Rectangle::Plot()
{
        ofstream myfile("textfile/Rectangle.txt");

        myfile << mandatory .x() << " " <<mandatory .y() <<endl;
        myfile << mDiagonal .x() << " " <<mandatory .y() <<endl;
        myfile << mDiagonal .x() << " " <<mDiagonal . y() <<endl;
        myfile << mandatory .x() << " " <<mDiagonal .y() <<endl;
        myfile << mandatory .x() << " " <<mandatory .y() <<endl;

        myfile.close();
}