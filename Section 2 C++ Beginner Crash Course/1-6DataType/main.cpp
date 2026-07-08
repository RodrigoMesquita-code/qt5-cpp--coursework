#include <iostream>
# include <string>

using namespace std;

int main()
{
    string hello = "Hello World!!";
    int count = 7;

    cout<<"The message is: " << hello<<endl;
    cout <<"the count is: " <<count<<endl;

    cout<<"Size of int: " <<sizeof(int) << "bytes" <<endl;
    cout<<"Size of char: " <<sizeof(char) << "bytes" <<endl;
    cout<<"Size of bool: " <<sizeof(bool) << "bytes" <<endl;
    cout<<"Size of float: " <<sizeof(float) << "bytes" <<endl;
    cout<<"Size of double: " <<sizeof(double) << "bytes" <<endl;
    cout<<"Size of wchar_t: " <<sizeof(wchar_t) << "bytes" <<endl;


    return 0;
}
