#include "integerarray.h"
#include <vector>
integerarray::integerarray(){
    _size=0;
    data=new point[0];


}
integerarray::integerarray(integerarray &o){
    data=new point[o._size];
    _size=o._size;
    for(int i=0;i<_size;i++){
        data[i]=o.data[i];

    }

}
integerarray::integerarray(const point arraPoints[],const int tam){
    data=new point[tam];
    _size=tam;
    for(int i=0;i<tam;i++){
        data[i]=arraPoints[i];

    }




}
integerarray::~integerarray(){

    delete[]data;
}
void integerarray::_insert(const point x,const int pos){
    _resize(_size+1);
    for(int i=_size-1;i>pos;i--){
        data[i]=data[i-1];

    }
    data[pos]=x;
}
void integerarray::_remove(const int pos){
    //if(pos<_size){
        //if(pos==_size-1){
            //cout<<"seee"<<endl;
          //  _resize(_size-1);
        //}
        //else{
            for(int j=pos;j<_size-2;j++){
                data[j]=data[j+1];
            }
            _resize(_size-1);
        //}

}
void integerarray::_resize(int newsize){
    point *pts=new point[newsize];
    int minsize=(newsize>_size)?_size:newsize;
    for(int i=0;i<minsize;i++){
        pts[i]=data[i];

    }
    delete[]data;
    _size=newsize;
    data=pts;

}
void integerarray::_push_back(point p){
    _resize(_size+1);
    data[_size-1]=p;


}
void integerarray::_clear(){

    _resize(0);
}
void integerarray::print(){
    for(int i=0;i<_size;i++){
        data[i].print();
    }

}
point *integerarray::get(const int  pos){
    return (pos>=0 && pos <_size) ? data +pos:NULL;

}
int integerarray::getsize(){
    return _size;

}
