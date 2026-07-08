#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
   int guessNumber, secretNumber;
   // initialize
   srand (time(NULL));

   // generate (1-10)
   secretNumber = rand() % 10 + 1;;

   // ask the user to guess the number
cout << "Guess the number(1-10): ";

    do
    {
    cin >> guessNumber;
    if ( secretNumber < guessNumber)
    {
        cout<<"the number is lower than that..."<<endl;
    }
    if ( secretNumber > guessNumber)
    {
        cout<<"the number is bigger than that..."<<endl;
    }

    }while (guessNumber != secretNumber);

cout<<"Congratulations, the number is: "<<guessNumber<<endl;

    return 0;
}
