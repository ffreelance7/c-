#ifndef POINT_H
#define POINT_H
#include <iostream>
using namespace std;

class point{

    public:
        point(int x=0,int y=0);
        int  getX ()const;
        int  getY ()const;
        void setX(const int);
        void setY(const int);
        void print();
    private:
        int x;
        int y;

};

#endif // POINT_H
