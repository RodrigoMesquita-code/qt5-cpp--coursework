#include <iostream>
#include <string>

int main()
{
    // 1.cout
    std::cout << "Hello World!" << std::endl;


    //2.cerr
    std::cerr << "There was an error"<< std::endl;


    //3.clog
    std::clog<<"This is a log message" <<std::endl;

    //4.cin
    std::string name;
    std::cout << "Plese type your first name: ";
    std::cin >> name;

    std::cout << "Your first name is " << name <<std::endl;

        return 0;
}
