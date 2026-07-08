#include <iostream>

using namespace std;

int main()
{
    /*
     * give lamba functiona name and call it
    auto func = [](){
            cout << "Hello World!" << endl;
    };

    func();
    */


    /* // call the lambda function directly after definition
    [](){
                    cout << "Hello World!" << endl;
    }();
    */

    /*
    // define lambda function that takes parameters
    [](int a, int b){
        cout <<" a + b = " << a + b<< endl;
    }(7,3);
    */

       /*
    // define a lambda that returns something
    int sum = [](int a, int b)->int{
        return a + b;
    }(7,3);

    cout << "Them sum is: " <<  [](int a, int b)->int{
        cout <<" a + b = " << a + b<< endl;
    }(7,3)<<endl; */


    /*
    // capture lists
    int a = 7;
    int b = 3;

    [a,b]()
    {
        cout << "A is: " << a <<endl;
                cout << "B is: " << b <<endl;
                        cout <<" a + b = " << a + b<< endl;

    }()
    ; */


    /*
    // capture by alue
    int c = 42;

    auto func = [c](){
        cout <<"The inner value of C is: "<< c <<endl;
    };

    for (int i = 1; i <5; i++)
    {
        cout<<"The outer value of C is: "<< c <<endl;
        func();
        c = c+1;
    } */



    /*
    // capturing by reference
    int c = 42;

    auto func = [&c](){
        cout <<"The inner value of C is: "<< c <<endl;
    };

    for (int i = 1; i <5; i++)
    {
        cout<<"The outer value of C is: "<< c <<endl;
        func();
        c = c+1;
    }
    */



    // capture everything by value
    /*
    int c = 42;
    int d = 6;

    auto func = [=](){
        cout <<"The inner value of C is: "<< c <<endl;
                cout <<"The inner value of D is: "<< d <<endl;
    };

    for (int i = 1; i <5; i++)
    {
        cout<<"The outer value of C is: "<< c <<endl;
        func();
        c = c+1;
    }
    */


    int c = 42;
    int d = 6;

    auto func = [&](){
        cout <<"The inner value of C is: "<< c <<endl;
                cout <<"The inner value of D is: "<< d <<endl;
    };

    for (int i = 1; i <5; i++)
    {
        cout<<"The outer value of C is: "<< c <<endl;
        func();
        c = c+1;
    }




    return 0;
}
