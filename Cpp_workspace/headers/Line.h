#pragma once
#include "Shapes.h"
#include "point.h"

//Line class declaration of variable members and constructor, destructor and method
class Line :public Shapes
{
    public:
        Line(Point d1 , Point d2);
        ~Line();
 
    void Plot();
 
    private:
        Point d2;
 
};