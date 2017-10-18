#include <iostream>
using namespace std;

int main()
{
    //Declaring and initializing variables.
    int number = 0, product = 0;
    //A while loop that executes when the number is greater than or equal to 0.
    while (number >=0)
    {   //With the while loop having afor loop inside declaring the variable i with the exit condition with i less than 3 but if that exit condition is not met, i will be iterated until it is.
        for (int i = 0; i<3; i++)
        { 
            //The condition that happens for when i is less than 3.
            product = number * i;
        }
        //Prompts the user to enter a number which is then stored in the variable number.
        cout<<"Please enter a positive integer: ";
        cin >> number;
        
    }
    //A output to tell the user what the product value is from the for loop.
    cout<<"The product is: "<<product<<endl;
}

//Comment the code as pseudocode
//Determine how many times each loop executes if the numbers input are 5, 4, 3, 2, 1,-1
//What is the value of i at the end of the program?

//For a number input of 5: product the output would be 0 : going through the loop 3 times
//For a number input of 4: product the output would be 10 : going through the loop 3 times
//For a number input of 3: product the output would be 8 : going through the loop 3 times
//For a number input of 2: product the output would be 6 : going through the loop 3 times
//For a number input of 1: product the output would be 4 : going through the loop 3 times
//For a number input of -1: product the output would be 2 : going through the loop 3 times