#include <iostream>
#include <string>
#include <cmath>
using namespace std;

/*  Kelsey Dimmick
    09/19/2017
    A program to calculate wind chill.
*/

int main (){
    //Declaring needed variables for the Wind Chill Formulas.
    double old_wind_chill = 0.0;
    double new_wind_chill = 0.0;
    double temp_f = 0.0;
    double velocity = 0.0;
    double difference = 0.0;

    //Asking for user inputs to calculate the Formulas.
    cout << "Please enter the temperature in degrees Farenheit: ";
    cin >> temp_f;
    cout << endl << endl;
    cout << "Please enter the wind's velocity: ";
    cin >> velocity;
    cout << endl << endl;
        
    //Old Wind Chill formula and new Wind Chill Formula.
    old_wind_chill = 0.081 * (3.71 * sqrt(velocity) + 5.81 - (0.25 * velocity)) * (temp_f - 9.14) + 91.4;
    new_wind_chill = 35.74 + (0.6215 * temp_f) - (35.75 * pow(velocity,0.16)) + (0.4275 * temp_f) * (pow(velocity,0.16));

    //A function used to get the positive difference between two numbers being stored in the variable difference,
    difference = fdim(old_wind_chill, new_wind_chill);
    
    cout << "Wind Speed       Old Formula        New Formula        Difference" << endl;
    cout << "__________       ___________        ___________        __________" << endl <<endl;
    cout << velocity << "              " << old_wind_chill << "              " << new_wind_chill << "             " << difference << "          " << endl;
    
    return 0;
    
}

/*
    
TEST 1:
Please enter the temperature in degrees Farenheit: 30


Please enter the wind's velocity: 4


Wind Speed       Old Formula        New Formula        Difference
__________       ___________        ___________        __________

4              112.065              25.767             86.2975         

TEST 2:
Please enter the temperature in degrees Farenheit: 39.25


Please enter the wind's velocity: 10


Wind Speed       Old Formula        New Formula        Difference
__________       ___________        ___________        __________

10              128.086              32.713             95.3732 

TEST 3:
Please enter the temperature in degrees Farenheit: 100


Please enter the wind's velocity: 2


Wind Speed       Old Formula        New Formula        Difference
__________       ___________        ___________        __________

2              169.094              105.711             63.383    

*/