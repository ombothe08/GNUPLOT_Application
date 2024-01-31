#include <iostream>
#include "headers/Triangle.h"
#include "headers/Rectangle.h"
#include "headers/Line.h"
#include "headers/Circle.h"
#include "headers/Ellipse.h"
#include "headers/Square.h"
using namespace std;
using namespace Shapes2d;

int main()
{
    while (1)
    {
        cout << "WELCOME" << endl;
        cout << "1.Rectangle " << endl
             << "2.Circle " << endl
             << "3.Triangle " << endl
             << "4.Ellipse " << endl
             << "5.Line " << endl
             << "6.square " << endl
             << "7.to Exit " << endl;

        int choice;
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            cout<< "Rectangle" <<endl;
            double x1,y1,x2,y2;
            cout<<"Enter the 2 point coordinates"<<endl;
            cin>>x1>>y1>>x2>>y2;

            Point d1(x1,y1) ;
            Point d2(x2,y2) ;
           
            Rectangle r1(d1,d2); 
            r1.plot();
            break;
        }
        case 2:
        {
            cout << "Circle" << endl;
            double x1,y1,radius;
            cout<<"Enter the center point coordinates and radius"<<endl;
            cin>>x1>>y1>>radius;
            
            Point d1(x1,y1);

            Circle c1(d1,radius);
            c1.plot();
            break;
        }

        case 3:
        {
           cout<< "Triangle" <<endl;
           double x1,y1,x2,y2,x3,y3;
           cout<<"Enter the three point coordinates"<<endl;
           cin>>x1>>y1>>x2>>y2>>x3>>y3;

            Point d1(x1,y1) ;
            Point d2(x2,y2) ;
            Point d3(x3,y3);
           
           Triangle t1(d1,d2,d3); 
           t1.plot();
           break;
        }
        case 4:
        {
            cout <<"Ellipse"<<endl;
            cout<<"Enter the three point coordinates"<<endl;
            double x1,y1,x2,y2,x3,y3;
            cin>>x1>>y1>>x2>>y2>>x3>>y3;

            Point d1(x1,y1);
            Point d2(x2,y2);
            Point d3(x3,y3);

            Ellipse e1(d1,d2,d3);

            e1.plot();
            cout<<endl;
            break;
        }
        case 5:
        {
            cout <<"Line"<<endl;
            cout<<"Enter the two point coordinates of line"<<endl;
            double x1,y1,x2,y2;
            cin>>x1>>y1>>x2>>y2;

            Point d1(x1,y1);
            Point d2(x2,y2);
            Line l1(d1,d2);

            l1.plot();
            cout<<endl;
            break;
        }
        case 6:
        {
            cout <<"Square"<<endl;
            cout<<"Enter the lenght of the square"<<endl;
            double mlength;
            cin>>mlength;
            Square s1(mlength);

            s1.plot();
            cout<<endl;
            break;
        }
        case 7:
            cout << "Bye" << endl;
            break;
        default:
            cout << "Invalid Input....." << endl;
            break;
        }   
    }
}
