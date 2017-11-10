#include <iostream>
using namespace std;

int main(){
//Stores the string in the variable 
string mystring = "my test string";
//Copies the contents of that variable into another variable
string mystring2 = mystring;
//Declares a new variable equal to the same thing
string myString3 = "my test string";
if (myString3 == "my test string")
{
    //It is equal so it prints out the statment
   cout<<"The same"<<endl;
}
//Declares a new variable with the same string
string myString4 = "my test string";
int i = 0, spaceCount = 0;
//Tries to make the variable an array
while (i < 20)
{
   if (myString4[i] == ' ')
   {
        spaceCount++;
   }
   i++;
}
//Declares a new variable with the same string
string myString5 = "my test string";
i = 0;
//Tries to make the variable an array and print out anything that isn't empty inside the array
while (myString5[i] != '\0')
{
   cout<<myString5[i];
   i++;
}
//Declares a new variable with the same string
string myString6 = "my test string";
//Tries to make the variable an array to set the 14th space to !
myString6[14] = '!';
cout<<myString6<<endl;
}

//run the code
//what should each of these do?  Do they do them?