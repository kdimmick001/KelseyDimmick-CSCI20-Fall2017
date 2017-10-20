#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
using namespace std;

/*  Kelsey Dimmick
    10/19/2017
    A program for checking letter case.
*/

// This program reads in a letter and reports whether
// it is an uppercase letter, a lowercase letter, or neither.
// it should continue reading in values until the user enters a -1.

int main() {
    
    // Read a character input.
    string ch = "?";
        
    cout << "Please enter a character: ";
    cin  >> ch;

while (ch != ("-1")) {
    
    //Checking for the program exiting condition.
    // check -- is it a letter??
    
    if ((ch >= "A") && (ch <= "Z")) {

        cout << "Yes, that is a uppercase letter." << endl;
        cout << "Please enter a character: ";
        cin  >> ch;
        
    }
    else if ((ch >= "a") && (ch <= "z")) {
        
        cout << "Yes, that is a lowercase letter" << endl;
        cout << "Please enter a character: ";
        cin  >> ch;
        
    }
    else {       
           
        cout << "Not a letter" << endl;
        cout << "Please enter a character: ";
        cin  >> ch;
        
    }

}
      
      return 0; 
      
}


/*

TEST:

Please enter a character: F
Yes, that is a uppercase letter.
Please enter a character: f
Yes, that is a lowercase letter
Please enter a character: Z
Yes, that is a uppercase letter.
Please enter a character: 3
Not a letter
Please enter a character: -1

*/
          