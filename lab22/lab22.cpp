#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
using namespace std;

/*  Kelsey Dimmick
    09/21/2017
    A program to generate a random number between 1 and 100.
*/

int main () {
    //Declaring the variable to store the random number as well as the randome number seed.
    srand(time(0));
    int numBetween; 
    
    //To generate a random number between 1 and 100.
    numBetween = ((rand() % 100) + 1);
    
    //Output of the randomly generated number between 1 and 100.
    cout << "Your random number is " << numBetween << endl;
    
    return 0;
}

/*

TEST 1:
Your random number is 80

TEST 2:
Your random number is 36

TEST3:
Your random number is 31

TEST 4: 
Your random number is 2

TEST 5:
Your random number is 95

*/