#pragma once
#include "point.h"
#include "Shapes.h"

using namespace Shapes2d;

//Rectangle class declaration of variable members and constructor, destructor and method
class Rectangle : public Shapes
{

    public:
        Rectangle(Point d1,Point d2);
        ~Rectangle();
    
    void Plot();


    private:
        Point mDiagonal;
        // int mD;
        // int breadth;
};
