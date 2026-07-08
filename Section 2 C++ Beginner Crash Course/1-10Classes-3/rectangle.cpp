#include "rectangle.h"
#include <iostream>
using namespace std;

Rectangle::Rectangle()
{
    cout << "Default Constructor called"<<endl;
    this->length = 5;
    this->width = 5;
}
/*
Rectangle::Rectangle(int w, int l)
{
    cout << "CUSTOM Constructor called"<<endl;
    this->width = w;
    this->length = l;
}
*/

Rectangle::Rectangle(int w, int l):width(w), length(l)
{
    clog << "CUSTOM Constructor called"<<endl;
}
void Rectangle::setWidth(int width)
{
    this->width = width;
}
void Rectangle::setLength(int length)
{
    this -> length = length;
}
