#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
using namespace std;

/*  Kelsey Dimmick
    09/26/2017
    A program to generate two integer values, generate a random number between them, and swap the values stored in the variables.
*/

//Swaping values function.
void ValSwap(int& num_value1, int& num_value2){
    
    //Stores the original values from number generator function into two new variable places.
    int x = num_value1;
    int y = num_value2;
    
    //Uses the two new variables to swap the original variable values.
    num_value1 = y;
    num_value2 = x;
    
    //An output that checks that the two values were swapped.
    cout << "Your first entered value is: " << num_value2 << endl << endl;
    cout << "Your second entered value is: " << num_value1 << endl;
    
    return;
};

//Random number generator function.
void NumGenerator(int& num_value1, int& num_value2){
    

    
    //Generates a random number from the given inputs.
    srand(time(0));
    
    cout << "A random number between " << num_value1 << " and " << num_value2 << " is " << (((rand() % ((num_value2 - num_value1) +1) )) + num_value1) << endl << endl;
    
    //Calls the ValSwap function.
    ValSwap(num_value1, num_value2);
    

    return;
};



//Main function.
int main() {
    
    //Initializes the variables.
    int num_value1 = 0;
    int num_value2 = 0;
    
    //Asks for user input and stores them in the two values needed for the function.
    cout << "Please input a smaller integer value: ";
    cin >> num_value1;
    cout << endl << "Please input a larger integer value: ";
    cin >> num_value2;
    cout << endl;
    
        
    //Calls the NumGenerator function by using the inputted values.
    NumGenerator(num_value1, num_value2);

    
    
    return 0;
}

/*
PROGRAM TEST RUNS:

TEST 1:
Please input a smaller integer value: 1

Please input a larger integer value: 10 

A random number between 1 and 10 is 6

Your first entered value is: 1

Your second entered value is: 10

TEST 2 :
Please input a smaller integer value: 5

Please input a larger integer value: 82

A random number between 5 and 82 is 65

Your first entered value is: 5

Your second entered value is: 82

TEST 3:
Please input a smaller integer value: 22

Please input a larger integer value: 73

A random number between 22 and 73 is 62

Your first entered value is: 22

Your second entered value is: 73

*/