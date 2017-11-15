#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <cstring>
using namespace std;

/*  Kelsey Dimmick
    11/14/2017
    A program to create website usernames
    based on the user input and username parameters.
    This one only uses c-string character manipulation. (character arrays)
*/

int main() {
    //Declares constant integers for the array values. Initialized with number values that account for null.
    const int FIRST_NAME_ELEMENT_NUM = 11;
    const int LAST_NAME_ELEMENT_NUM = 21;
    
    //Declares a variable to hold the user's name choice.
    int user_name;
    
    //Declares two character arrays for first and last name.
    char first_name[FIRST_NAME_ELEMENT_NUM];
    char last_name[LAST_NAME_ELEMENT_NUM];
    
    //Declares and initializes the user name option character arrays so that the array is holding known values.
    char option_1[(LAST_NAME_ELEMENT_NUM) + 2];
    for (int i = 0; i < ((LAST_NAME_ELEMENT_NUM) + 2); ++i){
        option_1[i] = '\0';
    }
    
    //Declares and initializes the user name option character arrays so that the array is holding known values.
    char option_2[(FIRST_NAME_ELEMENT_NUM) + (LAST_NAME_ELEMENT_NUM)];
    for (int i = 0; i < ((FIRST_NAME_ELEMENT_NUM) + (LAST_NAME_ELEMENT_NUM)); ++i){
        option_2[i] = '\0';
    }
    
    //Declares and initializes the user name option character arrays so that the array is holding known values.
    char option_3[(LAST_NAME_ELEMENT_NUM) + 1];
    for (int i = 0; i < ((LAST_NAME_ELEMENT_NUM) + 1); ++i){
        option_3[i] = '\0';
    }
   
   //Prompts the user for input for their first name.
    cout << "Please enter your first name." << endl << endl;
    cin >> first_name;
    cout << endl;
    
    //Prompts the user for input for their last name.
    cout << "Please enter your last name." << endl << endl;
    cin >> last_name;
    cout << endl;
    
    //Runs through checks for the first name length.
    while (strlen(first_name) > 10) {
        cout << "You have entered a first name that is larger than the allotted size. Please enter a shorter first name." << endl << endl;
        cin >> first_name;
        cout << endl;
    }
    
    //Runs through checks for the last name length.
    while (strlen(last_name) > 20) {
        cout << "You have entered a last name that is larger than the allotted size. Please enter a shorter last name." << endl << endl;
        cin >> last_name;
        cout << endl;
    }
    
    //Runs through checks to see if the first and last name entered are the same.
    while ((strcmp(first_name, last_name)) == 0){
        cout << "You have inputted the same name for both your first and last name. Please enter a different first name." << endl << endl;
        cin >> first_name;
        cout << endl;
        cout << "Please enter a different last name." << endl << endl;
        cin >> last_name;
        cout << endl;
        //Runs through checks for the first name length.
        while (strlen(first_name) > 10) {
            cout << "You have entered a first name that is larger than the allotted size. Please enter a shorter first name." << endl << endl;
            cin >> first_name;
            cout << endl;
        }
        //Runs through checks for the last name length.
        while (strlen(last_name) > 20) {
            cout << "You have entered a last name that is larger than the allotted size. Please enter a shorter last name." << endl << endl;
            cin >> last_name;
            cout << endl;
        }
    }
    
    //Asks the user which user name they would like from the three options.
    cout << "Which user name would you prefer?" << endl << endl;
    
    //Copying the first two elements of the first_name string to the user name option 1.
    strncat(option_1, first_name, 2);
    //Copies the last name to the user name option 1.
    strcat(option_1, last_name);
    
    //Prints out the first user name option.
    cout << "1: " << option_1 << endl << endl;
   
    //Copies the first and last name to the user name option 2.
    strcat(option_2, first_name);
    strcat(option_2, last_name);
    
    //Prints out the second user name option.
    cout << "2: " << option_2 << endl << endl;
    
    //Copies the first element of the first_name string to the user name option 3.
    strncat(option_3, first_name, 1);
    //Copies the last name to the user name option 3.
    strcat(option_3, last_name);
    
    //Prints out the last user name option.
    cout << "3: " << option_3 << endl << endl;
    
    //Asks the user to choose which user name they would prefer.
    cout << "Enter either 1, 2, or 3, for your choice." << endl << endl;
    cin >> user_name;
    
    //If the user chose the first option then it is displayed.
    if (user_name == 1){
        cout << "Your user name is: " << option_1 << endl << endl;
    }
    //If the user chose the second option then it is displayed.=
    else if (user_name == 2){
        cout << "Your user name is: " << option_2 << endl << endl;
    }
    //If the user chose the last option then it is displayed.
    else if (user_name == 3){
        cout << "Your user name is: " << option_3 << endl << endl;
    }
    //If the user chose an invalid option then the previous prompt is run through again.
    while ((user_name > 3) || (user_name < 1)) {
        cout << "Please choose a valid user name option." << endl << endl;
        cout << "1: " << option_1 << endl;
        cout << "2: " << option_2 << endl;
        cout << "3: " << option_3 << endl;
        cin >>user_name;
        
        if (user_name == 1){
        cout << "Your user name is: " << option_1 << endl << endl;
        }
        else if (user_name == 2){
            cout << "Your user name is: " << option_2 << endl << endl;
        }
        else if (user_name == 3){
            cout << "Your user name is: " << option_3 << endl << endl;
        }
    }
}

/*

TEST 1:
Please enter your first name.

Your name

Please enter your last name.


Which user name would you prefer?

1: Yoname

2: Yourname

3: Yname

Enter either 1, 2, or 3, for your choice.

1
Your user name is: Yoname

TEST 2:
Please enter your first name.

April 

Please enter your last name.

Browne

Which user name would you prefer?

1: ApBrowne

2: AprilBrowne

3: ABrowne

Enter either 1, 2, or 3, for your choice.

2
Your user name is: AprilBrowne

TEST 3:
Please enter your first name.

AnaElizabeth

Please enter your last name.

Hazeltine-Smith

You have entered a first name that is larger than the allotted size. Please enter a shorter first name.

Ana

Which user name would you prefer?

1: AnHazeltine-Smith

2: AnaHazeltine-Smith

3: AHazeltine-Smith

Enter either 1, 2, or 3, for your choice.

2
Your user name is: AnaHazeltine-Smith

TEST 4:
Please enter your first name.

James

Please enter your last name.

James 

You have inputted the same name for both your first and last name. Please enter a different first name.

John

Please enter a different last name.

James

Which user name would you prefer?

1: JoJames

2: JohnJames

3: JJames

Enter either 1, 2, or 3, for your choice.

3
Your user name is: JJames
*/

