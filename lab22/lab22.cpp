#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
using namespace std;

/*  Kelsey Dimmick
    09/21/2017
    A program to generate a random number between 1 and 100.
*/

// Declaring a random number function to find the random number between 1 and 100.
int RandomNumber (int num){
    
    //Setting the random number seed.
    srand(time(0));
    
    //To generate a random number between 1 and 100.
    num = ((rand() % 100) + 1);
    
    //Returning the computed value of the variable num.
    return num;
};

//Main function.
int main () {
    
    //Declaring the variable to store the random number.
    int num_between; 
    
    //Calling the random number function with the declared variable in the main.
    num_between = RandomNumber(num_between);
    
    //Output of the randomly generated number between 1 and 100.
    cout << "Your random number is " << num_between << endl;
    
    return 0;
}

/*

TEST 1:
Your random number is 43

TEST 2:
Your random number is 23

TEST3:
Your random number is 27

TEST 4: 
Your random number is 61

TEST 5:
Your random number is 87

*/