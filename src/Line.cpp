#include <iostream>
#include "../headers/Line.h"
#include<cmath>
#include<fstream>  
using namespace std;
 
Line::Line(Point d1,Point d2)
{
   mandatory=d1;
   this->d2=d2;
}
Line :: ~Line ()
{
   
}
//method that create txt file and take coordinate of shapes
void Line ::plot()
{
    ofstream myFile("textfile/Line.txt");
    myFile << mandatory .x() << " " <<mandatory .y() <<endl;
    myFile << d2 .x() << " " <<d2 .y() <<endl;
}
 
