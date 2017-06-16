#include <iostream>
#include <integerarray.h>
#include <Polygon.h>

using namespace std;

void printAttributes(Polygon *p){
    cout<<"p es area: "<<p->area()<<endl;
    integerarray*pa=p->getPoints();
    for(int i=0;i<pa->getsize();i++){
        cout<<"("<<pa->get(i)->getX()<<","<<pa->get(i)->getY()<<")";

    }
}
int main(){

    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    point p1(x1,y1),p2(x2,y2);
    Rectangle r(p1,p2);

    printAttributes(&r);
/*
    int i1,j1,i2,j2,i3,j3;
    cin>>i1>>j1>>i2>>j2>>i3>>j3;
    point t1(i1,j1),t2(i2,j2),t3(i3,j3);
    Triangle t(t1,t2,t3);

    printAttributes(&t);

*/
    return 0;
}
