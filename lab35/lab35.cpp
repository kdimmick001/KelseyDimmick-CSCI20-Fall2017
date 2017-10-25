#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
using namespace std;

/*  Kelsey Dimmick
    10/24/2017
    A program for temperature conversion.
*/

//A classs to convert inputted temperatures to Kelvin.
class TemperatureConverter {
    
    private:
        double kelvin_;
    
    public:
        //Default constructor to set Kelvin.
        TemperatureConverter(){
            kelvin_ = 0;
        }
        
        //An overload constructor to accept an initial Kelvin value.
        TemperatureConverter(double k) {
            if (k > 0) {
                kelvin_ = k;
            }
        }
        
        //A mutator function for Kelvin.
        void SetTempFromKelvin(double k){
            
            if (k > 0){
                kelvin_ = k;
            }
            
            return;
            
        }
        //A accessor function for Kelvin.
        double GetTempFromKelvin(){
            
            return kelvin_;
        }
        
        //A mutator function for Celsius.
        void SetTempFromCelsius(double c) {
            //Converts the inputted Celsius value to Kelvin.
            kelvin_ = c + 273.15;
        }
        //A accessor function for Celsius.
        double GetTempAsCelsius(){
            //Returns the Kelvin value only if greater than -273.15.
            if (kelvin_ > -273.15){
                
                return kelvin_;
            }
            else {
                PrintInvalidC();
            }
        }
        
        //A mutator function for Fahrenheit.
        void SetTempFromFahrenheit(double f) {
            //Converts the inputted Fahrenheit value to Kelvin.
            kelvin_ = ((5*(f-32)/9) + 273.15);
            
            return;
        }
        //A accessor function for Fahrenheit.
        double GetTempAsFahrenheit(){
            //Returns the Kelvin value only if greater than -459.67.
            if (kelvin_ > -459.67){
                
                return kelvin_;
            }
            else {
                PrintInvalidF();
            }
        }
        
        //A Print statement to print the value of Kelvin.
        void PrintTemperatures(){
            
            cout << "The temperature in Kelvin is: " << kelvin_ << endl << endl;
            
            return;
        }
        //A Print statement to print out if the numbers for Kelvin from Celsius are invalid.
        void PrintInvalidC(){
            
            cout << "Your inputted value for Celsius is too low. Please input a new value." << endl << endl;
            
            return;
        }
        //A Print statement to print out if the numbers for Kelvin from Fahrenheit are invalid.
        void PrintInvalidF(){
            
            cout << "Your inputted value for Fahrenheit is too low. Please input a new value." << endl << endl;
            
            return;
        }
};

int main ()
{
    TemperatureConverter temp1; //testing default constructor
    TemperatureConverter temp2(274); //testing overloaded constructor
    
    temp1.PrintTemperatures();
    temp2.PrintTemperatures();
    
    temp1.SetTempFromKelvin(400.15); //testing mutator function
    cout<<temp1.GetTempFromKelvin()<<endl;//testing accessor function
    temp1.PrintTemperatures();
    
    temp2.SetTempFromCelsius(32); //testing other functions
    cout<<temp2.GetTempAsCelsius()<<endl;
    temp2.PrintTemperatures();
    
    temp2.SetTempFromFahrenheit(32);
    cout<<temp2.GetTempAsFahrenheit()<<endl;
    temp2.PrintTemperatures();
    
    return 0;
}
