#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
using namespace std;

/*  Kelsey Dimmick
    10/17/2017
    A program for a guessing numbers game.
*/

int main(){
    
    //Initializing and declaring the variables.
    // Preparing the random computer-generated number.
    srand(time(0));
    int comp_num = ((rand()) % ((50 - 1) + 1) + 1);
    
    //Variable for the user inputted number.
    int user_num = 0;
    int i = 0;
    
    //Asking a user inputted number.
    cout << "WELCOME TO THE \"ARE YOU SMARTER THAN A COMPUTER\" GUESSING GAME!" << endl << endl;
    cout << "TEST YOUR LUCK..." << endl << "If the computer is too smart for you and you want to give up, just hit '0' to quit." << endl << endl; 
    cout << "Enter your number guess between 1 and 50 that the computer is thinking: " << endl << endl;
    cin >> user_num;
    cout << endl << endl;
    while (user_num == user_num)
    //Checking to see if the user's guess is correct.
    if (user_num == comp_num){
        
        //A for loop count down mechanism.
        for (i = 1; i < 6 ; ++i) {
                
        cout << i << endl;
                
        }
        
        cout << "CONGRATULATIONS! YOU GUESSED THE NUMBER!" << endl << endl;
        
    }
    
    //A while loop to check incorrect answer and respond accordingly. 
    while ((user_num != comp_num) && (user_num != 0)) {
            
            //An if statement to check if the number is within the possible range.
            if ((user_num > 50) || (user_num < 1)){
                
                cout << "Please enter a possible number: " << endl << endl;
                cin >> user_num;
                
            }
            
            cout << "Let's see if you are correct..." << endl;
            
            //A for loop count down mechanism.
            for (i = 1; i < 6 ; ++i) {
                
                cout << i << endl;
                
                }
            
            //An if statement to output if the user's guess if too high.    
            if (user_num < comp_num){    
                cout << endl << "OH! So SORRY! You should have guessed higher!" << endl << endl;
                //Prompting the user to enter a new number.
                cout << "Go ahead and try a different number...i'm sure you'll get it this time." << endl << endl;
                cout << "And remember you can always his '0' to quit." << endl << endl;
                cout << "Enter your number guess between 1 and 50 that the computer is thinking: " << endl << endl;
                cin >> user_num;
            }
            //The else part that tells if the user's guess was too low.
            else {
                cout << endl << "OH! So SORRY! You should have guessed lower!" << endl << endl;
                //Prompting the user to enter a new number.
                cout << "Go ahead and try a different number...i'm sure you'll get it this time." << endl << endl;
                cout << "And remember you can always his '0' to quit." << endl << endl;
                cout << "Enter your number guess between 1 and 50 that the computer is thinking: " << endl << endl;
                cin >> user_num;
            }
            
            
    }
    
    return 0;
    
}

/*

TEST:

WELCOME TO THE "ARE YOU SMARTER THAN A COMPUTER" GUESSING GAME!

TEST YOUR LUCK...
If the computer is too smart for you and you want to give up, just hit '0' to quit.

Enter your number guess between 1 and 50 that the computer is thinking: 

24


Let's see if you are correct...
1
2
3
4
5

OH! So SORRY! You should have guessed higher! You should have guessed: 34

Go ahead and try a different number...i'm sure you'll get it this time.

And remember you can always his '0' to quit.

Enter your number guess between 1 and 50 that the computer is thinking: 

50
Let's see if you are correct...
1
2
3
4
5

OH! So SORRY! You should have guessed lower! You should have guessed: 27

Go ahead and try a different number...i'm sure you'll get it this time.

And remember you can always his '0' to quit.

Enter your number guess between 1 and 50 that the computer is thinking: 

90
Please enter a possible number: 

20
Let's see if you are correct...
1
2
3
4
5

OH! So SORRY! You should have guessed lower! You should have guessed: 1

Go ahead and try a different number...i'm sure you'll get it this time.

And remember you can always his '0' to quit.

Enter your number guess between 1 and 50 that the computer is thinking: 

3
Let's see if you are correct...
1
2
3
4
5

OH! So SORRY! You should have guessed higher! You should have guessed: 31

Go ahead and try a different number...i'm sure you'll get it this time.

And remember you can always his '0' to quit.

Enter your number guess between 1 and 50 that the computer is thinking: 

0

*/