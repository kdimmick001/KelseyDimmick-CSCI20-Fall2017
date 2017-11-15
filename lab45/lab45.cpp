#include <iostream>
#include <string>
using namespace std;

/*  Kelsey Dimmick
    11/14/2017
    A program to create website usernames
    based on the user input and username parameters.
*/

int main() {
    //Declares and initializes a variable to hold the user's name choice.
    int user_name = 0;
    
    //Declares and initializes the strings to hold the user's first and last name.
    string first_name = "first";
    string last_name = "last";
    
    //Declares and initializes variables to hold the various user name options.
    string option_1 = "option";
    string option_2 = "option";
    string option_3 = "option";
   
    //Asks for the user for input for their first and last name.
    cout << "Please enter your first name." << endl << endl;
    cin >> first_name;
    cout << endl;
    cout << "Please enter your last name." << endl << endl;
    cin >> last_name;
    cout << endl;
    
    //Runs through checks for the first name length.
    while (first_name.length() > 10){
        cout << "You have entered a first name that is larger than the allotted size. Please enter a shorter first name." << endl << endl;
        cin >> first_name;
        cout << endl;
    }
    //Runs through checks for the last name length.
    while (last_name.length() > 20){
        cout << "You have entered a last name that is larger than the allotted size. Please enter a shorter last name." << endl << endl;
        cin >> last_name;
        cout << endl;
    }
    
    //Runs through checks to see if the first and last name entered are the same.
    while (first_name == last_name){
        cout << "You have inputted the same name for both your first and last name. Please enter a different first name." << endl << endl;
        cin >> first_name;
        cout << endl;
        cout << "Please enter a different last name." << endl << endl;
        cin >> last_name;
        cout << endl;
        //Runs through checks for the first name length.
        while (first_name.length() > 10){
            cout << "You have entered a first name that is larger than the allotted size. Please enter a shorter first name." << endl << endl;
            cin >> first_name;
            cout << endl;
        }
        //Runs through checks for the last name length.
        while (last_name.length() > 20){
            cout << "You have entered a last name that is larger than the allotted size. Please enter a shorter last name." << endl << endl;
            cin >> last_name;
            cout << endl;
        }
    }
    
    //Asks the user which user name they would like from the three options.
    cout << "Which user name would you prefer?" << endl << endl;
    
    //Assigns the substring composed of the first two elements of the first_name string as well as the whole last_name string to the first option.
    option_1 = ((first_name.substr(0, 2)) + last_name);
    //Prints out the first option.
    cout << "1: " << option_1 << endl << endl;
  
    //Assigns the first_name string and the last_name string to the second option.
    option_2 = (first_name + last_name);
    //Prints out the second option.
    cout << "2: " << option_2 << endl << endl;
    
    //Assigns the substring composed of the first element of the first_name string as well as the whole last_name string to the last option.
    option_3 = ((first_name.substr(0, 1) + last_name));
    //Prints out the last option.
    cout << "3: " << option_3 << endl << endl;
    
    //Asks the user to choose which user name they would prefer.
    cout << "Enter either 1, 2, or 3, for your choice." << endl << endl;
    cin >> user_name;
    
    //If the user chose the first option then it is displayed.
    if (user_name == 1){
        cout << "Your user name is: " << option_1 << endl << endl;
    }
    //If the user chose the second option then it is displayed.
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

Your

Please enter your last name.

name

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




