#include "point.h"

point::point(int x,int y){

    this->x=x;
    this->y=y;
}
int point::getX()const{
    return x;

}
int point::getY()const{
    return y;

}

void point::setX(const int x){

    this->x=x;

}
void point::setY(const int y){

    this->y=y;
}
void point::print(){
    cout<<"("<<x<<","<<y<<")"<<endl;
}
