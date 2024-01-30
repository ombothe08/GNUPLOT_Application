#pragma once
#include "Shapes.h"

//Square class declaration of variable members and constructor, destructor and method
class Square : public Shapes
{
    public:
        Square(int mlength);
        ~Square();
    
    void Plot();

    private:
        int mlength;
        // int mD;
        // int breadth;
};
