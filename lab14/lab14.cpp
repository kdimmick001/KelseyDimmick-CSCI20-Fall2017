#include <iostream>
using namespace std;

/*  Kelsey Dimmick
    09/05/2017
    A program to calculate amount of money entered plus a service tax.
*/

int main ()
{  
    //Initializing and declaring variables to be used throughout the program.
    
    int quarter = 25;
    int dime = 10;
    int nickel = 5;
    int penny = 1;
    int coinAmount = 0;
    int centsRemaining = 0;
    int quarterAmount = 0;
    int dimeAmount = 0;
    int nickelAmount = 0;
    int pennyAmount = 0;
    int totalAmount = 0;
    double fee = .109;
    double feeCharge = 0;
    
    //User input of coin amount.
    
    cout << "Please enter amount money: ";
    cin >> coinAmount;
    cout << endl;
    
    //To find out how many quarters and what is left over
    centsRemaining = coinAmount % quarter;  
    quarterAmount = coinAmount / quarter;   
    
    //To find out how many dimes and what is left over
    dimeAmount = centsRemaining / dime;
    centsRemaining = centsRemaining % dime;
    
    //To find out how many nickels and what is left over
    nickelAmount = centsRemaining / nickel;
    centsRemaining = centsRemaining % nickel;
    
    //To find out how many pennies and what is left over
    pennyAmount = centsRemaining / penny;
    centsRemaining = centsRemaining % penny;
        
    //To calculate the money the customer would get after the fee
    feeCharge = coinAmount * fee;
    // used later: coinAmount = coinAmount - feeCharge;
    
    //To display the itemized list resulting from the previous equations
    cout << "You you put in : " << endl;
    cout << quarterAmount << " quarters" <<endl;
    cout << dimeAmount << " dimes" << endl;
    cout << nickelAmount << " nickels" << endl;
    cout << pennyAmount << " pennies" << endl;
    cout << "You will recieve a resulting in a cash amount of $" << static_cast<double>(coinAmount-feeCharge) << " after the service fee.";
}