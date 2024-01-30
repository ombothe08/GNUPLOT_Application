#pragma once
#include "point.h"
#include "Shapes.h"
using namespace Shapes2d ;

//circle class declaration of variable members and constructor, destructor and method
class Circle :public Shapes
{
    public:
        Circle(Point o, double r);
        ~Circle();

    void Plot();

    private :
     float mRadius;

};