#include "Polygon.h"
int Polygon::numPolygons=0;

Polygon::Polygon(integerarray &pa):Points(pa){
    ++numPolygons;

}
Polygon::Polygon(const point pointarr[],const int numpoints):Points(pointarr,numpoints){
    ++numPolygons;
}
Polygon:: ~Polygon(){
    --numPolygons;
}
int Polygon::getNumPolygon(){
    return numPolygons;

}
int Polygon::getNumSides(){
    return Points.getsize();

}
/*REctangle*/

point constructorPoints[4];

point *updateConstructorPoints(const point &p1, const point &p2, const point &p3, const point &p4 = point(0,0))
{
    //MATRIS GLOBAL
    constructorPoints[0] = p1;
    constructorPoints[1] = p2;
    constructorPoints[2] = p3;
    constructorPoints[3] = p4;

    return constructorPoints;
}
//la coordenada inferior izquierda y la coordenada superior derecha
Rectangle::Rectangle(point &p1, point &p2): Polygon(updateConstructorPoints(p1, point(p1.getX(), p2.getY()),
                                            p2, point(p2.getX(), p1.getY())), 4){}


Rectangle::Rectangle(int x1,int y1,int x2,int y2): Polygon(updateConstructorPoints(point(x1,y1),point(x1,y2),
                                                                        point(x2,y2), point(x2, y1)) ,4){}

double Rectangle::area()const{

    double base = constructorPoints[3].getX() - constructorPoints[0].getX();
    double altura = constructorPoints[1].getY() - constructorPoints[0].getY();

    cout << "Area del rectangulo = ";
    return base * altura;
}
/*Triangle*/

point constructor[3];

point * updateConstructor(const point &p1, const point &p2, const point &p3)
{
    constructor[0] = p1;
    constructor[1] = p2;
    constructor[2] = p3;

    return constructor;
}

Triangle::Triangle(point p1, point p2, point p3) : Polygon(updateConstructor(p1,p2,p3) ,3){}

double Triangle::area()const{

    double d1, d2, d3, s, area;

    d1 = sqrt(pow(constructor[1].getY() - constructor[0].getY(), 2) +
                pow(constructor[1].getX() - constructor[0].getX(), 2));

    d2 = sqrt(pow(constructor[2].getY() - constructor[1].getY() , 2) +
                pow(constructor[2].getX() - constructor[1].getX(), 2));

    d3 = sqrt(pow(constructor[0].getY() - constructor[2].getY() , 2) +
                pow(constructor[0].getX() - constructor[2].getX(), 2));

    s = (d1 + d2 + d3)/2;
    area = sqrt(s*(s - d1)*(s - d2)*(s - d3));

    cout << "Area del triangulo = ";
    return area;
}
