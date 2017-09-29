#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
using namespace std;

/*  Kelsey Dimmick
    09/28/2017
    A program to generate two integer values, generate a random number between them, and swap the values stored in the variables.
    As well  as convert pounds to kilograms and vice versa.
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
    cout << "Your second entered value is: " << num_value1 << endl << endl;
    
    return;
};

//Pounds to kilograms function.
double PndToKilo(double pnd){
    
    //Declaring and initializing a kilogram value.
    double kilo = 0.0;
    
    //Equation to convert pounds to kilograms.
    kilo = (2.2 * pnd);

    //Returns the value of kilograms.
    return kilo;
};

//Kilograms to Pounds function.
double KiloToPnd(double kilo) {
    
    //Declaring and initializing a pound value.
    double pnd = 0.0;
    
    //Equation to convert kilograms to pounds.
    pnd = (kilo/2.2);
    
    //Returns the value of pounds
    return pnd;
    
};

//Random number generator function.
int NumGenerator(int& num_value1, int& num_value2){
     
    //Generates a random number from the given inputs.
    srand(time(0));
    
    //Declares variable for the random number between the two values.
    double rand_num = (((rand() % ((num_value2 - num_value1) +1) )) + num_value1);

    //Calls the ValSwap function.
    ValSwap(num_value1, num_value2);


    //Returns the value of a rand_num.
    return rand_num;
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
    
    //Calls the NumGenerator function by using the inputted values and stores the obtained random number from the function in a variable.
    double rand_num = NumGenerator(num_value1, num_value2);
        
    //Output of a random number between the two inputed value.
    cout << "A random number between " << num_value2 << " and " << num_value1 << " is " << rand_num << endl << endl;
    
    //Calling the function with the argument of the rand_num to get an equally random kilogram value and storing that value into a variable.
    double kilos = PndToKilo(rand_num);
    
    //Calling the function with the argument of the pounds from the previous function to get a pound value from the kilogram value and store that value into a variable.
    double pounds = KiloToPnd(kilos);
    
    //Outputs the value of kilograms and pounds obtained.
    cout << kilos << " kilograms is " << pounds << " in pounds.";
    
    return 0;
}

/*

TEST 1:
Please input a smaller integer value: 5

Please input a larger integer value: 10

Your first entered value is: 5

Your second entered value is: 10

A random number between 5 and 10 is 10

22 kilograms is 10 in pounds.


TEST 2:
Please input a smaller integer value: 20

Please input a larger integer value: 500

Your first entered value is: 20

Your second entered value is: 500

A random number between 20 and 500 is 308

677.6 kilograms is 308 in pounds.


TEST 3:
Please input a smaller integer value: 0

Please input a larger integer value: 100

Your first entered value is: 0

Your second entered value is: 100

A random number between 0 and 100 is 66

145.2 kilograms is 66 in pounds.


TEST 4:
Please input a smaller integer value: 60

Please input a larger integer value: 65

Your first entered value is: 60

Your second entered value is: 65

A random number between 60 and 65 is 60

132 kilograms is 60 in pounds.


TEST 5:
Please input a smaller integer value: 500

Please input a larger integer value: 5000

Your first entered value is: 500

Your second entered value is: 5000

A random number between 500 and 5000 is 1625

3575 kilograms is 1625 in pounds.

*/