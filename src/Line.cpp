#include <iostream>
#include "../headers/Line.h"
#include<cmath>
#include<fstream>  
 
using namespace std;
 
 //parameterized constructor 
Line::Line(Point d1,Point d2)
{
   mandatory=d1;
   this->d2=d2;
}

//Destructor
Line :: ~Line ()
{
   
}

//method that create txt file and take coordinate of shapes
void Line ::Plot()
{
    ofstream myFile("textfile/Line.txt");
 
    myFile << mandatory .x() << " " <<mandatory .y() <<endl;
    myFile << d2 .x() << " " <<d2 .y() <<endl;
}
 
