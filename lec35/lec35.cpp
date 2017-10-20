#include <iostream>
using namespace std;

//A class that calculates the annual salary by using the private variable annual_ with the subsequent public functions.
class Salary
{
    //Declaring the private variable of annual_.
    private: 
        double annual_;
    //The public section of the class declaring the functions to be used with the previously stated variable.
    public:
        //The constructor to the Salary class that initializes the annual variable value to 0.
        Salary()
        {
            annual_ = 0;    
        }
        //The constructor overload that accepts a starting value when the object is created for the class.
        Salary(double salary)
        {   if (salary < 0) {
                annual_ = salary;
        } else{
            annual_ = 0;
        }
        }
        //The function to set (mutator) the private variable if there is an input.
        void SetAnnualSalary(double salary)
        {
            if (salary > 0){
                annual_ = salary;
            }
            else
                annual_ = 0;
        }
        //The function to get (accessor) the private variable value.
        double GetAnnualSalary()
        {
            return annual_;
        }
        //The function to print the private variable value.
        void Print()
        {
             cout<<"$"<<annual_<<endl;
        }
};

int main(){
    
    //Creates an object within the class Salary with no initial input.
    Salary Lackey;
    
    //Creates an object within the class Salary with a negative initial input.
    Salary Slacker(-100);
    
    //Prints the salaries for both the Lackey and the Slacker objects.
    Lackey.Print();
    Slacker.Print();
    
    return 0;

}

//Comment the class per the class style guide
//Identify the following parts of the class
//      constructor
//      overload the constructor to accept an input for salary 
//      and set the salary to the input
//Create a main function that creates an object with no input
//  creates an object with input that is negative
//  and creates an object with input that is appropriate.
//and outputs the salary for each object.