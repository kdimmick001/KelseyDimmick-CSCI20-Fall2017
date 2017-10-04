#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
using namespace std;

/*  Kelsey Dimmick
    10/03/2017
    A program to keep a record of information on different types of books.
*/

//A class that creates different book objects. This class stores and outputs information based on inputted book objects arguments. 
class Book
{
    //Sets private variables to store book info into.
    private:
        string title_;
        string author_;
        int copywriteyr_;
    
    //Set public functions.
    public:
    
        //Sets the book title with the mutator function.
        void SetBookTitle(string title)
        {
            title_ = title;
        };
        //Gets the book title with the accessor function. 
        string GetBookTitle()
        {
            return title_;
        };
        //Print function to print out the book title.
        void PrintTitle()
        {
            cout << "Title: " << title_ << endl << endl;
            
            return;
        };
        
        //Sets the book author with the mutator function.
        void SetBookAuthor(string author)
        {
            author_ = author;
        };
        //Gets the book author with the accessor function.
        string GetBookAuthor()
        {
            return author_;
        };
        //Print function to print out the book's author.
        void PrintAuthor()
        {
            cout << "Author: " << author_ << endl << endl;
            
            return;
        };
        
        //Sets the copywrite year with the mutator function.
        void SetCopywriteYr(int year)
        {
            copywriteyr_ = year;
        };
        //Gets the copywrite year with the accessor function.
        int GetCopywriteYr()
        {
            return copywriteyr_;
        };
        //Print function to print out the book's copywrite year.
        void PrintYear()
        {
            cout << "Copywrite Year: " << copywriteyr_ << endl << endl << endl;
            
            return;
        };
};

int main()
{
    //Creating 5 different book objects to use in the class function.
    Book book1;
    Book book2;
    Book book3;
    Book book4;
    Book book5;
    
    //Creating variables to hold the all the book's respective information.
    string book1_title;

    string book2_title;
    
    string book3_title;
    
    string book4_title;
    
    string book5_title;
    
    string book1_author;
    
    string book2_author;
    
    string book3_author;
    
    string book4_author;
    
    string book5_author;
    
    int book1_year;
    
    int book2_year;
    
    int book3_year;
    
    int book4_year;
    
    int book5_year;
    
    //Asking for inputs to then use as arguments in the above stated functions for the first book object.
    cout << "Please enter a book title for your first book: " << endl << endl;
    getline(cin, book1_title);
    
    cout << endl << "Please enter the author of your first book: " << endl << endl;
    getline(cin, book1_author);
    
    cout << endl << "Please enter the copywrite year of your first book: " << endl << endl;
    cin >> book1_year;
    cin.ignore(1000, '\n');
    
    //Asking for inputs to then use as arguments in the above stated functions for the second book object.
    cout << endl << "Please enter a book title for your second book: " << endl << endl;
    getline(cin, book2_title);
    
    cout << endl << "Please enter the author of your second book: " << endl << endl;
    getline(cin, book2_author);
    
    cout << endl << "Please enter the copywrite year of your second book: " << endl << endl;
    cin >> book2_year;
    cin.ignore(1000, '\n');
    
    //Asking for inputs to then use as arguments in the above stated functions for the third book object.
    cout << endl << "Please enter a book title for your third book: " << endl << endl;
    getline(cin, book3_title);
    
    cout << endl << "Please enter the author of your third book: " << endl << endl;
    getline(cin, book3_author);
    
    cout << endl << "Please enter the copywrite year of your third book: " << endl << endl;
    cin >> book3_year;
    cin.ignore(1000, '\n');
    
    //Asking for inputs to then use as arguments in the above stated functions for the fourth book object.
    cout << endl << "Please enter a book title for your fourth book: " << endl << endl;
    getline(cin, book4_title);
    
    cout << endl << "Please enter the author of your fourth book: " << endl << endl;
    getline(cin, book4_author);
    
    cout << endl << "Please enter the copywrite year of your fourth book: " << endl << endl;
    cin >> book4_year;
    cin.ignore(1000, '\n');
    
    //Asking for inputs to then use as arguments in the above stated functions for the fifth book object.
    cout << endl << "Please enter a book title for your fifth book: " << endl << endl;
    getline(cin, book5_title);
    
    cout << endl << "Please enter the author of your fifth book: " << endl << endl;
    getline(cin, book5_author);
    
    cout << endl << "Please enter the copywrite year of your fifth book: " << endl << endl;
    cin >> book5_year;
    cin.ignore(1000, '\n');
    
    //Setting all arguments for the first book.
    book1.SetBookTitle(book1_title);
    book1.SetBookAuthor(book1_author);
    book1.SetCopywriteYr(book1_year);
    
    //Setting all arguments for the second book.
    book2.SetBookTitle(book2_title);
    book2.SetBookAuthor(book2_author);
    book2.SetCopywriteYr(book2_year);
    
    //Setting all arguments for the third book.
    book3.SetBookTitle(book3_title);
    book3.SetBookAuthor(book3_author);
    book3.SetCopywriteYr(book3_year);
    
    //Setting all arguments for the fourth book.
    book4.SetBookTitle(book4_title);
    book4.SetBookAuthor(book4_author);
    book4.SetCopywriteYr(book4_year);
    
    //Setting all arguments for the fifth book.
    book5.SetBookTitle(book5_title);
    book5.SetBookAuthor(book5_author);
    book5.SetCopywriteYr(book5_year);
    
    //Gets all the information for the first book.
    book1.GetBookTitle();
    book1.GetBookAuthor();
    book1.GetCopywriteYr();
    
    //Gets all the information for the second book.
    book2.GetBookTitle();
    book2.GetBookAuthor();
    book2.GetCopywriteYr();
    
    //Gets all the information for the third book.
    book3.GetBookTitle();
    book3.GetBookAuthor();
    book3.GetCopywriteYr();
    
    //Gets all the information for the fourth book.
    book4.GetBookTitle();
    book4.GetBookAuthor();
    book4.GetCopywriteYr();
    
    //Gets all the information for the fifth book.
    book5.GetBookTitle();
    book5.GetBookAuthor();
    book5.GetCopywriteYr();
    
    //Prints all the information for the first book.
    book1.PrintTitle();
    book1.PrintAuthor();
    book1.PrintYear();
    
    //Prints all the information for the second book.
    book2.PrintTitle();
    book2.PrintAuthor();
    book2.PrintYear();
    
    //Prints all the information for the third book.
    book3.PrintTitle();
    book3.PrintAuthor();
    book3.PrintYear();
    
    //Prints all the information for the fourth book.
    book4.PrintTitle();
    book4.PrintAuthor();
    book4.PrintYear();
    
    //Prints all the information for the fifth book.
    book5.PrintTitle();
    book5.PrintAuthor();
    book5.PrintYear();
    
    return 0;
    
}

/*

TEST:
Please enter a book title for your first book: 

Dracula

Please enter the author of your first book: 

Bram Stoker

Please enter the copywrite year of your first book: 

1897

Please enter a book title for your second book: 

Treasure Island

Please enter the author of your second book: 

Robert Louis Stevenson

Please enter the copywrite year of your second book: 

1882

Please enter a book title for your third book: 

Lord of the Rings

Please enter the author of your third book: 

J.R.R Tolkien

Please enter the copywrite year of your third book: 

1954

Please enter a book title for your fourth book: 

The Canterbury Tales

Please enter the author of your fourth book: 

Geoffrey Chaucer

Please enter the copywrite year of your fourth book: 

1476

Please enter a book title for your fifth book: 

The Odyssey 

Please enter the author of your fifth book: 

Homer

Please enter the copywrite year of your fifth book: 

800
Title: Dracula

Author: Bram Stoker

Copywrite Year: 1897


Title: Treasure Island

Author: Robert Louis Stevenson

Copywrite Year: 1882


Title: Lord of the Rings

Author: J.R.R Tolkien

Copywrite Year: 1954


Title: The Canterbury Tales

Author: Geoffrey Chaucer

Copywrite Year: 1476


Title: The Odyssey

Author: Homer

Copywrite Year: 800

*/