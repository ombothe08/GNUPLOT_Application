#include <iostream>
#include <fstream>
#include "../headers/Triangle.h"

using namespace std;

//parameterized constructor 
Triangle::Triangle(Point mVertex1, Point mVertex2 ,Point mVertex3)
{
   mandatory=mVertex1;
   this->mVertex2=mVertex2;
   this->mVertex3=mVertex3;
}

//Destructor 
Triangle::~Triangle()
{

}

//method that create txt file and take coordinate of shapes
void Triangle :: Plot()
{
    ofstream myfile("textfile/Triangle.txt");

        myfile << mandatory .x() << " " <<mandatory .y() <<endl;
        myfile << mVertex2 .x() << " " <<mVertex2 .y() <<endl;
        myfile << mVertex3 .x() << " " <<mVertex3 . y() <<endl;
        myfile << mandatory .x() << " " <<mandatory .y() <<endl;       

        myfile.close();          
}
