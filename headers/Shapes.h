#pragma once
#include "point.h"
using namespace Shapes2d;

//parent call in which plot is abstract method and it is inherited by all other shape.
class Shapes
{
   public :
      Shapes()
      {
          
      }
      virtual void plot()=0;

   protected :
     Point mandatory;

};