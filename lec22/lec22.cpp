#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void guessingGame (); //? Why are we voiding guessingGame().

int main() //Body of the code.
{
    cout<<"We are going to play the guessing game 3 times"<<endl;
    guessingGame(); //? Why is the guessingGame() function defined below int main and voided above.
    guessingGame(); //Function call.
    guessingGame();//*Important to call the function in int main().
}

//Function declaration and definition.
void guessingGame () //? Why are we voiding guessingGame() twice.
{
    srand(time(0)); //* Important to seed the rand with time.
    int randomNumber = rand() % 10 + 1;

    int userNumber = 0;
    cout<<"Please choose a number between 1 and 10";
    cin>>userNumber;

    cout<<"You picked: "<<userNumber<<"  The number was: "<<randomNumber<<endl; //? Why is there no return in the function or in the int main.
}

//Identify with //* 2-4 items that are important
//Identify with //? 2-4 items that are incorrect, unclear, or you have questions on.
//Comment the function appropriately
//Identify the following parts of the function:
//  definition
//  declaration
//  body
//  function call