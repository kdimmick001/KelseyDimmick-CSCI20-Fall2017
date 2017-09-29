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
void PndToKilo(double pnd){
    
    //Declaring and initializing a kilogram value.
    double kilo = 0.0;
    
    //Equation to convert pounds to kilograms.
    kilo = (2.2 * pnd);
    
    //Outputing the resulting kilogram value.
    cout << pnd << " pounds is " << kilo << " in kilograms.";

    return;
};

//Kilograms to Pounds function.
void KiloToPnd(double kilo) {
    
    //Declaring and initializing a pound value.
    double pnd = 0.0;
    
    //Equation to convert kilograms to pounds.
    pnd = (kilo/2.2);
    
    //Outputing the resulting pound value.
    cout << kilo << " kilograms is " << pnd << " in pounds.";
    
    return;
    
};

//Random number generator function.
void NumGenerator(int& num_value1, int& num_value2){
    
    //Generates a random number from the given inputs.
    srand(time(0));
    
    //Calls the ValSwap function.
    ValSwap(num_value1, num_value2);
    
    //Output of a random number between the two inputed values with the random value equation in the output.
    cout << "A random number between " << num_value2 << " and " << num_value1 << " is " << (((rand() % ((num_value1 - num_value2) +1) )) + num_value2) << endl;
    
    return;
};



//Main function.
int main() {
    
    //Initializes the variables.
    int num_value1 = 0;
    int num_value2 = 0;
    double pnd_val = 0.0;
    double kilo_val = 0.0;
    
    //Asks for user input and stores them in the two values needed for the function.
    cout << "Please input a smaller integer value: ";
    cin >> num_value1;
    cout << endl << "Please input a larger integer value: ";
    cin >> num_value2;
    cout << endl;
    
    //Calls the NumGenerator function by using the inputted values.
    NumGenerator(num_value1, num_value2);
    
    //Input for Pound to Kilogram function.
    cout<< endl << endl <<"Please input a pound value: ";
    cin >> pnd_val;
    cout << endl;
    
    //Call to Pound to Kilogram converter function.
    PndToKilo(pnd_val);
   
    //Input for Kilogram to Pound function.
    cout << endl << endl << "Please input a kilogram value: ";
    cin >> kilo_val;
    cout << endl;
    
    //Call to Kilogram to Pound converter function.
    KiloToPnd(kilo_val);

    
    
    return 0;
}

/*

TEST 1:
Please input a smaller integer value: 5

Please input a larger integer value: 10

Your first entered value is: 5

Your second entered value is: 10

A random number between 5 and 10 is 8


Please input a pound value: 8

8 pounds is 17.6 in kilograms.

Please input a kilogram value: 17.6

17.6 kilograms is 8 in pounds.


TEST 2:
Please input a smaller integer value: 20

Please input a larger integer value: 500

Your first entered value is: 20

Your second entered value is: 500

A random number between 20 and 500 is 42


Please input a pound value: 500.2

500.2 pounds is 1100.44 in kilograms.

Please input a kilogram value: 1100.44

1100.44 kilograms is 500.2 in pounds.


TEST 3:
Please input a smaller integer value: 0

Please input a larger integer value: 100

Your first entered value is: 0

Your second entered value is: 100

A random number between 0 and 100 is 69


Please input a pound value: 0

0 pounds is 0 in kilograms.

Please input a kilogram value: 0

0 kilograms is 0 in pounds.


TEST 4:
Please input a smaller integer value: 60

Please input a larger integer value: 65

Your first entered value is: 60

Your second entered value is: 65

A random number between 60 and 65 is 64


Please input a pound value: 2.2

2.2 pounds is 4.84 in kilograms.

Please input a kilogram value: 4.84

4.84 kilograms is 2.2 in pounds.

*/