#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <fstream>
using namespace std;

/*  Kelsey Dimmick
    12/12/2017
    A charcter creator program.
*/

//File function that takes the string variable file name and the string array to hold all the strings from the file.
int File (string filename, string p[]){

    //Creating an input stream
    ifstream fin;
    
    //Initializing a count to keep track of how many elements are in the file being stored in each array.
    int count = 0;
    
    //To open a text file to get the string information.
    fin.open(filename);
    
    //A check to make sure that the desired file opened.
    if(!fin.is_open()){
        
        cout << "Unable to open file." << endl;
        
    }
    
    //Initializing a incrementation to go through the index's of the array.
    int i = 0;
    
    //While not end of the file.
    while (!fin.eof()){
        
        //Input the file values to the value of each space of the array.
        fin >> p[i];
        
        //Incrementing the array index.
        i++;
        
        //Incrementing the counting tracker.
        count++;
        
    }
    
    //Closing the file when done getting all the information.
    fin.close();
    
    //Makes the function return the count value of how many elements are in the array.
    return count;
}

//The MultiWords function adds spaces to the characteristics when an uppercase letter is encounted to make the outputs have better readability.
//Taking argument of the string wishing to have spaces added to it and the integer value of how long that string is.
string MultiWords (string trait, int count) {
   
   //Starts at 1 to skip the very first uppercase letter and only look for subsequent uppercase letters.
    int i = 1;
    
    //While i is less than the length of the string.
    while (i < count) {
        //At the index i of the string.
        trait.at(i);
        //If at that index there is a capital letter (ASCII) 
        if ((trait.at(i) >= 65) && (trait.at(i) <=90)) {
            //Then insert a space at that index.
            trait.insert(i, " ");
            //Increment i to get out of the if statement.
            i++;
        }
        //Increment i again to continue with the while loop.
        i++;
    }
    //Has the function return the trait string with the included spaces.
    return trait;
    
}

//The character's class designed to generate the random qualities of the character.
class Character {
    private:
        //Creates all the character quality variables to be randomized.
        string era;
        string theme;
        string genre;
        string build;
        string trait;
        string job;
        string quirk;
        string wstate;
        string weapon;
        
    public:
        //Set function to set the era that the character will be in to a random string from the array created from the text file.
        //The set function hs parameters of the length of the array from the text file and the array itself.
        void SetRandEra(int count, string p[]){
            
            //seeds the rand() function.
            srand(time(0));
            //Creates a varaible for the random index that will be used to get the random string from the text file array.
            int random_array_index = rand() % count;
            
            //Stores the random string into the private variable.
            era = p[random_array_index];
            
            return;
            
        }
        //Get function to return the value of the private variable era.
        string GetRandEra(){
            
            return era;
            
        }
        //Set function to set the theme of the character to a random string from the array created from the text file.
        //The set function hs parameters of the length of the array from the text file and the array itself.
        void SetRandTheme(int count, string p[]){
            
            //Seeds the rand() function.
            srand(time(0));
            //Creates a variable for the random index that will be used to get the random string from the text file array.
            int random_array_index = rand() % count;
            
            //Stores the random string into the private variable.
            theme = p[random_array_index];
            
            return;
            
        }
        //Get function to return the value of the private variable theme.
        string GetRandTheme(){
            
            return theme;
            
        }
        //Set function to set the genre of the character to a random string from the array created from the text file.
        //The set function hs parameters of the length of the array from the text file and the array itself.
        void SetRandGenre(int count, string p[]){
            
            //Seeds the rand() function.
            srand(time(0));
            //Creates a variable for the random index that will be used to get the random string from the text file array.
            int random_array_index = rand() % count;
            
            //Stores the random string into the private variable.
            genre = p[random_array_index];
            
            return;
            
        }
        //Get function to return the value of the private variable genre.
        string GetRandGenre(){
            
            return genre;
        }
        //Set function to set the build of the character to a random string from the array created from the text file.
        //The set function hs parameters of the length of the array from the text file and the array itself.
        void SetRandBuild(int count, string p[]){
            
            //Seeds the rand() function.
            srand(time(0));
            //Creates a variable for the random index that will be used to get the random string from the text file array.
            int random_array_index = rand() % count;
            
            //Stores the random string into the private variable.
            build = p[random_array_index];
            
            return;
            
        }
        //Get function to return the value of the private variable build.
        string GetRandBuild(){
            
            return build;
        }
        //Set function to set a trait of the character to a random string from the array created from the text file.
        //The set function hs parameters of the length of the array from the text file and the array itself.
        void SetRandTrait(int count, string p[]){
            
            //Seeds the rand() function.
            srand(time(0));
            //Creates a variable for the random index that will be used to get the random string from the text file array.
            int random_array_index = rand() % count;
            
            //Stores the random string into the private variable.
            trait = p[random_array_index];
            
            return;
            
        }
        //Get function to return the value of the private variable trait.
        string GetRandTrait(){
            
            return trait;
        }
        //Set function to set the character's job to a random string from the array created from the text file.
        //The set function hs parameters of the length of the array from the text file and the array itself.
        void SetRandJob(int count, string p[]){
            
            //Seeds the rand() function.
            srand(time(0));
            //Creates a variable for the random index that will be used to get the random string from the text file array.
            int random_array_index = rand() % count;
            
            //Stores the random string into the private variable.
            job = p[random_array_index];
            
            return;
            
        }
        //Get function to return the value of the private variable job.
        string GetRandJob(){
            
            return job;
        }
        //Set function to set a quirk of the character to a random string from the array created from the text file.
        //The set function hs parameters of the length of the array from the text file and the array itself.
        void SetRandQuirk(int count, string p[]){
            
            //Seeds the rand() function.
            srand(time(0));
            //Creates a variable for the random index that will be used to get the random string from the text file array.
            int random_array_index = rand() % count;
            
            //Stores the random string into the private variable.
            quirk = p[random_array_index];
            
            return;
            
        }
        //Get function to return the value of the private variable quirk.
        string GetRandQuirk(){
            
            return quirk;
        }
        //Set function to set the weapon state of the character to a random string from the array created from the text file.
        //The set function hs parameters of the length of the array from the text file and the array itself.
        void SetRandWstate(int count, string p[]){
            
            //Seeds the rand() function.
            srand(time(0));
            //Creates a variable for the random index that will be used to get the random string from the text file array.
            int random_array_index = rand() % count;
            
            //Stores the random string into the private variable.
            wstate = p[random_array_index];
            
            return;
            
        }
        //Get function to return the value of the private variable wstate.
        string GetRandWstate(){
            
            return wstate;
        }
        //Set function to set the weapon of the character to a random string from the array created from the text file.
        //The set function hs parameters of the length of the array from the text file and the array itself.
        void SetRandWeapon(int count, string p[]){
            
            //Seeds the rand() function.
            srand(time(0));
            //Creates a variable for the random index that will be used to get the random string from the text file array.
            int random_array_index = rand() % count;
            
            //Stores the random string into the private variable.
            weapon = p[random_array_index];
            
            return;
            
        }
        //Get function to return the value of the private variable weapon.
        string GetRandWeapon(){
            
            return weapon;
        }
    
};

int main () {
    
    //Creating an object from the class Character to create the user's character.
    Character user;
    
    //Setting a constant integer value to use to initialize the arrays to hold the text file strings.
    const int ELEMENT_NUM = 200;
    
    //Initializing and declaring a variable for a user inputted gender.
    string gender = "neutral"; 
    //Initializing and declaring a variable for a user inputted name.
    string name = "Name Name"; 
    
    //Sets up the Character Creator.
    //Prompts the user to enter their character name and gender.
    cout << "THERE IS A TASK AT HAND" << endl;
    cout << "PREPARE FOR YOUR JOURNEY" << endl << endl;
    cout << "Arm yourself and hone your qualities" << endl;
    cout << "They may come in handy for the road ahead..." << endl << endl;
    
    cout << "What is your name?" << endl;
    getline(cin, name);
    cout << endl;
    
    cout << "What is your gender?" << endl;
    cin >> gender;
    cout << endl << endl << endl;
    
    //Declaring all the file names as string variables to then use to call the File function.
    string era_file = "timeperiod.txt";
    string theme_file = "theme.txt";
    string genre_file = "genre.txt";
    string build_file = "physical.txt";
    string trait_file = "attributes.txt";
    string job_file = "jobs.txt";
    string quirk_file = "quirk.txt";
    string wstate_file = "weaponstate.txt";
    string weapon_file = "weapon.txt";
    
    //Creates arrays to hold the file inputted information.
    string era[ELEMENT_NUM];
    string theme[ELEMENT_NUM];
    string genre[ELEMENT_NUM];
    string build[ELEMENT_NUM];
    string trait[ELEMENT_NUM];
    string job[ELEMENT_NUM];
    string quirk[ELEMENT_NUM];
    string wstate[ELEMENT_NUM];
    string weapon[ELEMENT_NUM];
    
    //Calling the File function to get each file's information and to store it in the array.
    //When the function returns it will store the length of the array in the integer variables.
    int era_count = File(era_file, era);
    int theme_count = File(theme_file, theme);
    int genre_count = File(genre_file, genre);
    int build_count = File(build_file, build);
    int trait_count = File(trait_file, trait);
    int job_count = File(job_file, job);
    int quirk_count = File(quirk_file, quirk);
    int wstate_count = File(wstate_file, wstate);
    int weapon_count = File(weapon_file, weapon);
    
    //Sets all the randomly generated qualities of the character from the Character Class.
    user.SetRandEra(era_count, era);
    user.SetRandTheme(theme_count, theme);
    user.SetRandGenre(genre_count, genre);
    user.SetRandBuild(build_count, build);
    user.SetRandTrait(trait_count, trait);
    user.SetRandJob(job_count, job);
    user.SetRandQuirk(quirk_count, quirk);
    user.SetRandWstate(wstate_count, wstate);
    user.SetRandWeapon(weapon_count, weapon);
    
    //Outputts the Character's random qualities.
    cout << "CHARACTER SUMMARY" << endl << endl;
    //Before it outputs it runs the random qualties from the Get functions through the MultiWords function to improve readability.
    cout << "ERA: " << MultiWords(user.GetRandEra(), user.GetRandEra().length()) << endl;
    cout << "THEME: " << MultiWords(user.GetRandTheme(), user.GetRandTheme().length()) << endl;
    cout << "GENRE: " << MultiWords(user.GetRandGenre(), user.GetRandGenre().length()) << endl;
    cout << "PHYSICAL CHARACTERISTIC: " << MultiWords(user.GetRandBuild(), user.GetRandBuild().length()) << endl;
    cout << "TRAIT: " << MultiWords(user.GetRandTrait(), user.GetRandTrait().length()) << endl;
    cout << "JOB: " << MultiWords(user.GetRandJob(), user.GetRandJob().length()) << endl;
    cout << "QUIRK: " << MultiWords(user.GetRandQuirk(), user.GetRandQuirk().length()) << endl;
    cout << "WEAPON'S STATE: " << MultiWords(user.GetRandWstate(), user.GetRandWstate().length()) << endl;
    cout << "WEAPON: " << MultiWords(user.GetRandWeapon(), user.GetRandWeapon().length()) << endl;
    cout << "_______________________________________________________________________________________" << endl;
    cout << endl;
    
    //Puts all the random qualities into a different readability form.
    cout << "Welcome to your journey " << name << endl << endl;
    
    cout << "You are in a " << MultiWords(user.GetRandEra(), user.GetRandEra().length());
    cout << " " <<  MultiWords(user.GetRandTheme(), user.GetRandTheme().length());
    cout << " " <<  MultiWords(user.GetRandGenre(), user.GetRandGenre().length()) << "." << endl;
    cout << endl;
    
    cout << "You are a " << gender << "." << endl;
    cout << "You have " << MultiWords(user.GetRandQuirk(), user.GetRandQuirk().length()) << "." << endl;
    cout << "Physically, you are " << MultiWords(user.GetRandBuild(), user.GetRandBuild().length()) << "." << endl;
    cout << "Your key trait is that you are " << MultiWords(user.GetRandTrait(), user.GetRandTrait().length()) << "." << endl;
    cout << "In your job you are a " << MultiWords(user.GetRandJob(), user.GetRandJob().length()) << "." << endl;
    cout << endl;
    
    cout << "You have a " << MultiWords(user.GetRandWstate(), user.GetRandWstate().length());
    cout << " " << MultiWords(user.GetRandWeapon(), user.GetRandWeapon().length());
    cout << " to protect yourself.";
    cout << endl;
    
    
    //Creating an output stream to be able to save all the character traits to a file to be used later.
    ofstream fout;
    
    //Creates the file to store the character traits.
    fout.open("Character.txt");

    //A check to make sure that the desired file opened.
    if(!fout.is_open()){
        
        cout << "Unable to open file." << endl;
        
    }
    
    //Outputs the same information obtained above to the output file Character.txt.    
    fout << "CHARACTER SUMMARY" << endl << endl;
    fout << "ERA: " << MultiWords(user.GetRandEra(), user.GetRandEra().length()) << endl;
    fout << "THEME: " << MultiWords(user.GetRandTheme(), user.GetRandTheme().length()) << endl;
    fout << "GENRE: " << MultiWords(user.GetRandGenre(), user.GetRandGenre().length()) << endl;
    fout << "PHYSICAL CHARACTERISTIC: " << MultiWords(user.GetRandBuild(), user.GetRandBuild().length()) << endl;
    fout << "TRAIT: " << MultiWords(user.GetRandTrait(), user.GetRandTrait().length()) << endl;
    fout << "JOB: " << MultiWords(user.GetRandJob(), user.GetRandJob().length()) << endl;
    fout << "QUIRK: " << MultiWords(user.GetRandQuirk(), user.GetRandQuirk().length()) << endl;
    fout << "WEAPON'S STATE: " << MultiWords(user.GetRandWstate(), user.GetRandWstate().length()) << endl;
    fout << "WEAPON: " << MultiWords(user.GetRandWeapon(), user.GetRandWeapon().length()) << endl;
    fout << "_______________________________________________________________________________________" << endl;
    fout << endl;
    
    fout << "Welcome to your journey " << name << endl << endl;
    
    fout << "You are in a " << MultiWords(user.GetRandEra(), user.GetRandEra().length());
    fout << " " <<  MultiWords(user.GetRandTheme(), user.GetRandTheme().length());
    fout << " " <<  MultiWords(user.GetRandGenre(), user.GetRandGenre().length()) << "." << endl;
    fout << endl;
    
    fout << "You are a " << gender << "." << endl;
    fout << "You have " << MultiWords(user.GetRandQuirk(), user.GetRandQuirk().length()) << "." << endl;
    fout << "Physically, you are " << MultiWords(user.GetRandBuild(), user.GetRandBuild().length()) << "." << endl;
    fout << "Your key trait is that you are " << MultiWords(user.GetRandTrait(), user.GetRandTrait().length()) << "." << endl;
    fout << "In your job you are a " << MultiWords(user.GetRandJob(), user.GetRandJob().length()) << "." << endl;
    fout << endl;
    
    fout << "You have a " << MultiWords(user.GetRandWstate(), user.GetRandWstate().length());
    fout << " " << MultiWords(user.GetRandWeapon(), user.GetRandWeapon().length());
    fout << " to protect yourself.";
    fout << endl;
    
    //Closing the output file.
    fout.close();
    
    return 0;
  
}

/*

TEST 1:
THERE IS A TASK AT HAND
PREPARE FOR YOUR JOURNEY

Arm yourself and hone your qualities
They may come in handy for the road ahead...

What is your name?
Kelsey of Clan Dimmick Queen of the Realm

What is your gender?
Female



CHARACTER SUMMARY

ERA: Modern
THEME: Arthurian
GENRE: Sci- Fi
PHYSICAL CHARACTERISTIC: Young
TRAIT: Luck
JOB: Bartender
QUIRK: Blind
WEAPON'S STATE: Overpowered
WEAPON: Butterfly Net
_______________________________________________________________________________________

Welcome to your journey Kelsey of Clan Dimmick Queen of the Realm

You are in a Modern Arthurian Sci- Fi.

You are a Female.
You have Blind.
Physically, you are Young.
Your key trait is that you are Luck.
In your job you are a Bartender.

You have a Overpowered Butterfly Net to protect yourself.

TEST 2:

THERE IS A TASK AT HAND
PREPARE FOR YOUR JOURNEY

Arm yourself and hone your qualities
They may come in handy for the road ahead...

What is your name?
Unknown                                    

What is your gender?
Unknown



CHARACTER SUMMARY

ERA: Modern
THEME: Medieval
GENRE: Horror
PHYSICAL CHARACTERISTIC: Tall
TRAIT: Insane
JOB: Stock Broker
QUIRK: Bipolar
WEAPON'S STATE: Cursed
WEAPON: Khopesh
_______________________________________________________________________________________

Welcome to your journey Unknown

You are in a Modern Medieval Horror.

You are a Unknown.
You have Bipolar.
Physically, you are Tall.
Your key trait is that you are Insane.
In your job you are a Stock Broker.

You have a Cursed Khopesh to protect yourself.

TEST 3:
THERE IS A TASK AT HAND
PREPARE FOR YOUR JOURNEY

Arm yourself and hone your qualities
They may come in handy for the road ahead...

What is your name?
Mr. Man

What is your gender?
Mr.



CHARACTER SUMMARY

ERA: Modern
THEME: Aztec
GENRE: Adventure
PHYSICAL CHARACTERISTIC: Thin
TRAIT: Magic
JOB: Kamikaze
QUIRK: Ambidextrous
WEAPON'S STATE: Poisoned
WEAPON: Club
_______________________________________________________________________________________

Welcome to your journey Mr. Man

You are in a Modern Aztec Adventure.

You are a Mr..
You have Ambidextrous.
Physically, you are Thin.
Your key trait is that you are Magic.
In your job you are a Kamikaze.

You have a Poisoned Club to protect yourself.

TEST 4:
THERE IS A TASK AT HAND
PREPARE FOR YOUR JOURNEY

Arm yourself and hone your qualities
They may come in handy for the road ahead...

What is your name?
Kelsey Dimmick

What is your gender?
Female



CHARACTER SUMMARY

ERA: Ancient
THEME: Pirate
GENRE: Horror
PHYSICAL CHARACTERISTIC: Scarred
TRAIT: Santy
JOB: Drug Cartel
QUIRK: Bearded
WEAPON'S STATE: Normal
WEAPON: Revolver
_______________________________________________________________________________________

Welcome to your journey Kelsey Dimmick

You are in a Ancient Pirate Horror.

You are a Female.
You have Bearded.
Physically, you are Scarred.
Your key trait is that you are Santy.
In your job you are a Drug Cartel.

You have a Normal Revolver to protect yourself.
*/

