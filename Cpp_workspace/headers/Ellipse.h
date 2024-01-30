#pragma once
#include "Shapes.h"

using namespace Shapes2d ;

//Ellipse class declaration of variable members and constructor, destructor and method
class Ellipse : public Shapes
{
    public :
        Ellipse(Point o , Point mMajorRadius , Point mMinorRadius); 
        ~Ellipse();
    
    void Plot();
 
    private :
        Point mMinorRadius;
        Point mMajorRadius ;
};