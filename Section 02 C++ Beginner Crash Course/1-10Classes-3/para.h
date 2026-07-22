#ifndef PARA_H
#define PARA_H
#include <iostream>
#include "rectangle.h"

using namespace std;

// Para class
class Para
{
public:
    Para(int w, int l, int h):r(w,l), height(h)
    {
        cout<<"Para Constructor Called"<<endl;
    }

    int getVolume()
    {
        return r.getArea() * height;
    }

private:
    Rectangle r;
    int height;
};


#endif // PARA_H
