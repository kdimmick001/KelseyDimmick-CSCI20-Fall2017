#include <iostream>
using namespace std;

int main()
{
  
char mystring[20] = "my test string";
//Can't just set one array equal to another need a for loop
char mystring2[20] = mystring;

char myString3[20] = "my test string";
if (myString3 == "my test string")
{
   cout<<"The same"<<endl;
}

 
char myString4[20] = "my test string";
int i = 0; 
int spaceCount = 0;
//Counts the spaces in between the words
while (i < 20)
{
   if (myString4[i] == ' ')
   {
        spaceCount++;
   }
   i++;
}
//Can't hold all of the string when the size is only 2 so the loop will error.
char myString5[2] = "my test string";
i = 0;
while (myString5[i] != '\0')
{
   cout<<myString5[i];
   i++;
}
//Adds "!" to space 14
char myString6[20] = "my test string";
myString6[14] = '!';
cout<<myString6<<endl;
}

//run the code
//what should each of these do?  Do they do them?