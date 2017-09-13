//Created By: April Browne
 //Created On: 8/22/2016
 
 #include <iostream>
 using namespace std;
 //*Important: How to declare a struct
 struct monster{
  string head;
  string eyes;
  string ears;//?Are these calling to a different already declared library variable? Or are we just declaring empty variables?
  string mouth;
  string nose;
 };
 
 int main() //?Why is the main function declared as an int? Does it save the code as an integer value?
 {
    //*Important: How to call the struct
   monster monsterA; //?Why is the format monster monsterA? When the struct is only monster? Is this how you declare the struct in int main?
   monsterA.head = "Zombus";
   monsterA.eyes = "Vegitas";
   monsterA.ears = "Wackus";//Are these strings already saved in a library somewhere to pull? How do they relate to create the object?
   monsterA.nose = "Vegitas";
   monsterA.mouth = "Wackus";
   
   monster monsterB;
   monsterB.head = "Happy";
   monsterB.eyes = "Vegitas";
   monsterB.ears = "Vegitas";
   monsterB.nose = "Spritem";
   monsterB.mouth = "Vegitas";
   
   //*Important: How to cout the variable objects
   cout<<"Head:"<<monsterA.head<<endl;
   cout<<"Eyes:"<<monsterA.eyes<<endl;//?Will this output be an object or just string text because that is what is stored in int main?
   cout<<"Ears:"<<monsterA.ears<<endl;
   cout<<"Nose:"<<monsterA.nose<<endl;
   cout<<"Mouth:"<<monsterA.mouth<<endl;
   cout << endl;
   cout<<"Head:"<<monsterB.head<<endl;
   cout<<"Eyes:"<<monsterB.eyes<<endl;
   cout<<"Ears:"<<monsterB.ears<<endl;
   cout<<"Nose:"<<monsterB.nose<<endl;
   cout<<"Mouth:"<<monsterB.mouth<<endl;
  
    return 0;
 }