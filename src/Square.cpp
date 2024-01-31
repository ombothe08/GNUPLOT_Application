#include <iostream>
#include "../headers/Square.h"
#include<iostream>
#include<cmath>
#include <fstream>
using namespace std ;

Square::Square(int mlength)
{
     this->mlength=mlength;
}

Square::~Square()
{
    
}

//method that create txt file and take coordinate of shapes
void  Square::plot()
{
        ofstream myfile("textfile/Square.txt");
        myfile << 0 << " " << 0 <<endl;
        myfile << mlength << " " << 0 <<endl;
        myfile << mlength << " " <<mlength <<endl;
        myfile << 0 << " " << mlength <<endl;
        myfile << 0 << " " << 0 <<endl;
        myfile.close();
}