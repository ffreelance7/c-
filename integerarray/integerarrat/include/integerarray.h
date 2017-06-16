#ifndef INTEGERARRAY_H
#define INTEGERARRAY_H
#include <point.h>

class integerarray
{
    public:
        integerarray();
        integerarray(integerarray &);
        integerarray(const point[],const int);

        ~integerarray();
        void _insert(const point,const int);
        point *get(const int);
        void _remove(const int);
        void _push_back(point);
        int getsize();
        void _clear();
        void print();
    private:
        void _resize(int);
        int _size;
        point  *data;
};

#endif // INTEGERARRAY_H
