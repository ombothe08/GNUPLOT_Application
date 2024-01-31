#pragma once

namespace Shapes2d
//point class that set the default coordinates of point and some method that return the point coordinates
{
    class Point
    {    
        public: 
            Point();                   
            Point(double x, double y); 
            ~Point();
              
            double x() ; 
            double y() ;

        private:
            double mX;
            double mY;
    };
}