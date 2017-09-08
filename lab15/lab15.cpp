#include <iostream>
#include <string>
using namespace std;

/*  Kelsey Dimmick
    09/07/2017
    A program to play MadLibs: Some Mathematical Rules.
*/

/*
1. When any decimal is divided by a /an (NOUN1), the number of decimal places in the (NOUN2)
is the same as the number of (PLURAL NOUN1) in the dividend.

2. The quotient is unchanged if a divisor and a dividend are each (VERB PAST TENSE1)
by the same (NOUN3).

3. iF ONE (ADJECTIVE1) number is divided by a whole number, the quotient is a/an (ADJECTIVE2)
number.

4. To find the ratio of one number to another, divide that number by the (NOUN4).

5. If you want to (VERB1) two fractions, first reduce the denominators to the lowest common (NOUN5).

6. The perimeter of a rectange is the sum of the lengths of its (PLURAL NOUN2).

7. A/an (ADJECTIVE3) fraction does not have its value changed if (PLURAL NOUN3) are added on its right.
*/

int main()
{
    // Initializing and declaring each of the variables to be entered
    
    string nounOne = "Noun";
    string nounTwo = "Noun";
    string nounThree = "Noun";
    string nounFour = "Noun";
    string nounFive = "Noun";
    
    string pluralNounOne = "Plural";
    string pluralNounTwo = "Plural";
    string pluralNounThree = "Plural";
    
    string pastTenseVerbOne = "Past";
    
    string verbOne = "Verb";
    
    string adjectiveOne = "Adjective";
    string adjectiveTwo = "Adjective";
    string adjectiveThree = "Adjective";
    
    
    //User input to assign the variables
    
    cout << "Welcome to MadLibs!" << endl;
    
    cout << "Please enter a noun: ";
    cin >> nounOne;
    
    cout << "Please enter a noun: ";
    cin >> nounTwo;
    
    cout << "Please enter a plural noun: ";
    cin >> pluralNounOne;
    
    cout << "Please enter a past tense verb: ";
    cin >> pastTenseVerbOne;
    
    cout << "Please enter a noun: ";
    cin >> nounThree;
    
    cout << "Please enter an adjective: ";
    cin >> adjectiveOne;
    
    cout << "Please enter an adjective: ";
    cin >> adjectiveTwo;
    
    cout << "Please enter a noun: ";
    cin >> nounFour;
    
    cout << "Please enter a verb: ";
    cin >> verbOne;
    
    cout << "Please enter a noun: ";
    cin >> nounFive;
    
    cout << "Please enter a plural noun: ";
    cin >> pluralNounTwo;
    
    cout << "Please enter an adjective: ";
    cin >> adjectiveThree;
    
    cout << "Please enter a plural noun: ";
    cin >> pluralNounThree;
    
    //The completed MadLibs with user entries
    cout << "Your MadLibs story is: " << "Some Mathematical Rules" << endl;
    cout << endl;
    cout << "1. When any decimal is divided by a /an " << nounOne << ", the number of decimal places in the " << nounTwo << " is the same as the number of ";
    cout << pluralNounOne << " in the dividend." << endl;
    cout << "2. The quotient is unchanged if a divisor and a dividend are each " << pastTenseVerbOne << " by the same " << nounThree << "." << endl;
    cout << "3. If one " << adjectiveOne << " number is divided by a whole number, the quotient is a/an " << adjectiveTwo << " number." << endl;
    cout << "4. To find the ratio of one number to another, divide that number by the " << nounFour << "." << endl;
    cout << "5. If you want to " << verbOne << " two fractions, first reduce the denominators to the lowest common " << nounFive << "." << endl;
    cout << "6. The perimeter of a rectange is the sum of the lengths of its " << pluralNounTwo << "." << endl;
    cout << "7. A/an " << adjectiveThree << " fraction does not have its value changed if " << pluralNounThree << " are added on its right." << endl;
    
    return 0;
}

/*
Example game:
Welcome to MadLibs!
Please enter a noun: cat
Please enter a noun: dog
Please enter a plural noun: bunnies
Please enter a past tense verb: had
Please enter a noun: elephant
Please enter an adjective: horrible
Please enter an adjective: crazy
Please enter a noun: insect
Please enter a verb: sprinting
Please enter a noun: hat
Please enter a plural noun: yetis
Please enter an adjective: happy
Please enter a plural noun: rats
Your MadLibs story is: Some Mathematical Rules

1. When any decimal is divided by a /an cat, the number of decimal places in the dog is the same as the number of bunnies in the dividend.
2. The quotient is unchanged if a divisor and a dividend are each had by the same elephant.
3. If one horrible number is divided by a whole number, the quotient is a/an crazy number.
4. To find the ratio of one number to another, divide that number by the insect.
5. If you want to sprinting two fractions, first reduce the denominators to the lowest common hat.
6. The perimeter of a rectange is the sum of the lengths of its yetis.
7. A/an happy fraction does not have its value changed if rats are added on its right.
*/