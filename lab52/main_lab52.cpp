#include "main_lab52.h"

// Program starts here
int main() {
  // Create a MyClass Object
  MyClass object;

  //Send a number to the Object
  object.SetNumber(randomNumber());

  // Call the output member function
  object.Output();

  // This ends our program
  return 0;
}

int randomNumber(){
    
   srand(time(0));
   int random_num = rand() % 10 + 1;
   
   return random_num;

}