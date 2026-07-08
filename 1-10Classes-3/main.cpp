#include <iostream>
#include "rectangle.h"
#include "para.h"
#include "square.h"

using namespace std;

int main()
{
    Rectangle r;
    cout << "The area of the default rectangle is: " << r.getArea() << endl;

    Rectangle r1(20,20);
    cout << "The area of the custom rectangle is: " << r1.getArea() << endl;

    Para p(30,30,30);

    Square s(40);


    cout<<"The area of the rectangle is: "<<r.getArea()<<endl;
    cout<<"the volume is " << p.getVolume() <<endl;
    cout<<"The area of the Square is: "<<s.getArea()<<endl;
    return 0;
}
