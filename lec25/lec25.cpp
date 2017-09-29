#include <iostream> //header
using namespace std;

//Declaration of class Salary that defines the annual salary to be utilized to calculate the total annual salary.
class Salary
{
    //Sets private variables.
    private: 
        
        //Creating a private variable annual to use for salary.
        //Data field that holds the data.
        double annual_;
        
    //Sets public functions.
    public:
        //Declaring a function with parameter of double salary.
        //Mutator function or the "Setter function."
        void SetAnnualSalary(double salary)
        {
            //Setting the variable equal to salary.
            annual_ = salary;
        }
        
        //The "Getter" for the annual salary that gets the value of annual.
        //Accessor function or the "Getter function."
        double GetAnnualSalary()
        {
            //Returns the value of annual.
            return annual_;
        }
        
        //A print function to print out the annual salary.
        void Print()
        {
            //Outputs the annual salary value.
             cout<<"$"<<annual_<<endl;
        }
};

int main(){
    
    //Calls on the class and creates an object in that class of Lackey.
    Salary Lackey;
    
    //Inputs a value with the Mutator Function.
    Lackey.SetAnnualSalary(4000.00);
    
    //Outputs the value with the Accessor Function as well as the print function.
    Lackey.Print();
    cout<< "$" <<Lackey.GetAnnualSalary() << " annual salary for Lackey.";
}

//Comment the class per the class style guide
//Identify the following parts of the class
//      data field
//      mutator function
//      accessor function
//Create a main function that creates an object and runs all of the functions in order