#ifndef POLYGON_H
#define POLYGON_H
#include <integerarray.h>
#include <point.h>
#include <cmath>

#endif // POLYGON_H
class Polygon{

    protected:
        integerarray Points;
        static int numPolygons;
    public:
        Polygon(const point[],const int);
        Polygon(integerarray &);
        ~Polygon();
        virtual  double area()const=0;
        static int getNumPolygon();
        int getNumSides();
        integerarray * getPoints(){return &Points;};

};
class Rectangle :public Polygon{
    public:
        Rectangle(point &, point &);
        Rectangle(int,int,int,int);
        double area()const;

};
class Triangle:public Polygon{
    public:
        Triangle(point,point,point);
        double area()const;

};
