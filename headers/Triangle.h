#pragma once
#include "point.h"

#include "Shapes.h"

using namespace Shapes2d ;

//Triangle class declaration of variable members and constructor, destructor and method
class Triangle : public Shapes 
{   
   public:
    Triangle(Point mVertex1, Point mVertex2 ,Point mVertex3);
    ~Triangle();

    void Plot ();

    private:
        float height;
        float base;
        float side1;
        float side2;
    
        Point mVertex2;
        Point mVertex3; 
};