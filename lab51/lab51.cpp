#include <iostream> //Only need one #include <iostream>
#include <iostream> 
#include <cstring> 
using namespace std;   

int main() {
    int nameLength = 0;
    char * name = new char[1000]; //Declares a pointer name. Then dynamically allocates a character and load address to the array.
                            //Creates a dynamic array of character pointers that can be.
                            //Points to the first element of the array.

    cout << "Please enter a 10 letter word or less" << endl;
    cin >> name; // Holds the user entered name.

    char * head  = name; //Creates a pointer head that points to the first element of name array.
                        //Assigns head to the first character of name.
    char * tail = name; //Creates a pointer tail that points to the first element of name array.
                        //Assigns tail to the first character of name.

    nameLength = strlen(name); //Accessing the value of name to use to compute the length of name. 
                                //But is just getting the length of the first element and not the whole array because of the pointer.
                                //Cant get the length with the pointer pointing to one element.
    cout << "Your word is " << name << endl; //Outputs when the first string is but first string is not defined. So change to name.

    if (nameLength<10) //If the length of the name is less than 10
    {                   //And while the dereference (the data to which the variable points) of the pointer variable is not equall to the null operator.
         while (*head != '\0')  //Print the data that the variable points to and then incriment that value until the null operator is reached.
         {
                cout << *head;
                head++;
         }
     }
     else //Else if the length of the name is too large, print out a prompt.
     {
          cout << "WARNING WORD TOO BIG TO DISPLAY!!" << endl;
     }

     cout << endl; //Prints an end line.

     tail = &name[strlen(name) - 1]; //Assigns tail to the reference operator (variable's address) of the name array element of the length of the name minus one.
                                    //Gets the last letter of the word.
     if (nameLength < 10) //If the length of the name is less than 10
     {                  //And while the variable tail does not equal the name
          while (tail != name) //Print out the data that the variable tail points to and decrement the value of tail
          {
                 cout << *tail;
                 tail--;
          }
     }
     cout << endl; //Prints an end line

     head = name; //Sets the first element of head equal to the first element of name
                //Sets head equal to the first letter.
     tail = &name[strlen(name) - 1]; //Sets tail equal to the last letter
        
     head++; //Increments the head 
     tail--; //Decrements the tail 

     if (*head == *tail) //If the head pointer equals the tail pointer then the letters are the same forewards and backwards
     {  
         cout << "It is an palindrome!" << endl; //And it prints out it is a palindrome.
     }
     else
     {
         cout << "It is not an palindrome" << endl; //Else if they don't match it prints it is not a palindrome.
     }

     return 0; 
}