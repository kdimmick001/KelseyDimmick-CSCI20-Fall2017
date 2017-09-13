#include <iostream>
#include <string>
using namespace std;

/*  Kelsey Dimmick
    09/07/2017
    A program for a stock portfolio.
*/

struct StockPortfolio {         //Making a struct for the StockPortfolio objects to use later in int main.
    string stockName;
    char sector;
    double currSharePrice;
    int numSharesOwned;
    double totalShareValue;   //Declaring a variable to hold the total value of the shares owned.
};

int main () {
    
    StockPortfolio company1;    //Creates a section in StockPortfolio for each company information.
    StockPortfolio company2;
    StockPortfolio company3;
    StockPortfolio company4;
    StockPortfolio company5;
    StockPortfolio company6;
    
    company1.stockName;         //Ties all the declared objects in the struct StockPortfolio to each company.
    company1.sector;
    company1.currSharePrice;
    company1.numSharesOwned;
    company1.totalShareValue;
    
    company2.stockName;        
    company2.sector;
    company2.currSharePrice;
    company2.numSharesOwned;
    company2.totalShareValue;
    
    company3.stockName;        
    company3.sector;
    company3.currSharePrice;
    company3.numSharesOwned;
    company3.totalShareValue;
    
    company4.stockName;        
    company4.sector;
    company4.currSharePrice;
    company4.numSharesOwned;
    company4.totalShareValue;
    
    company5.stockName;        
    company5.sector;
    company5.currSharePrice;
    company5.numSharesOwned;
    company5.totalShareValue;
    
    company6.stockName;        
    company6.sector;
    company6.currSharePrice;
    company6.numSharesOwned;
    company6.totalShareValue;
    

    cout << "COMPANY 1" << endl;
    cout << "_________" << endl << endl;
    cout << "Please enter the stock name for the first company: ";      //Prompting the user to input the values.
    cin >> company1.stockName;
    cout << endl;
    cout << "Please enter the sector letter for the first company: ";
    cin >> company1.sector;
    cout << endl;
    cout << "Please enter the current price of the stock share for the first company: ";
    cin >> company1.currSharePrice;
    cout << endl;
    cout << "Please enter the number of shares owned from the first company: ";
    cin >> company1.numSharesOwned;
    cout << endl;
    
    cout << "COMPANY 2" << endl;
    cout << "_________" << endl << endl;
    cout << "Please enter the stock name for the second company: ";      
    cin >> company2.stockName;
    cout << endl;
    cout << "Please enter the sector letter for the second company: ";
    cin >> company2.sector;
    cout << endl;
    cout << "Please enter the current price of the stock share for the second company: ";
    cin >> company2.currSharePrice;
    cout << endl;
    cout << "Please enter the number of shares owned from the second company: ";
    cin >> company2.numSharesOwned;
    cout << endl;
    
    cout << "COMPANY 3" << endl;
    cout << "_________" << endl << endl;
    cout << "Please enter the stock name for the third company: ";     
    cin >> company3.stockName;
    cout << endl;
    cout << "Please enter the sector letter for the third company: ";
    cin >> company3.sector;
    cout << endl;
    cout << "Please enter the current price of the stock share for the third company: ";
    cin >> company3.currSharePrice;
    cout << endl;
    cout << "Please enter the number of shares owned from the third company: ";
    cin >> company3.numSharesOwned;
    cout << endl;
    
    cout << "COMPANY 4" << endl;
    cout << "_________" << endl << endl;
    cout << "Please enter the stock name for the fourth company: ";  
    cin >> company4.stockName;
    cout << endl;
    cout << "Please enter the sector letter for the fourth company: ";
    cin >> company4.sector;
    cout << endl;
    cout << "Please enter the current price of the stock share for the fourth company: ";
    cin >> company4.currSharePrice;
    cout << endl;
    cout << "Please enter the number of shares owned from the fourth company: ";
    cin >> company4.numSharesOwned;
    cout << endl;
    
    cout << "COMPANY 5" << endl;
    cout << "_________" << endl << endl;
    cout << "Please enter the stock name for the fifth company: ";  
    cin >> company5.stockName;
    cout << endl;
    cout << "Please enter the sector letter for the fifth company: ";
    cin >> company5.sector;
    cout << endl;
    cout << "Please enter the current price of the stock share for the fifth company: ";
    cin >> company5.currSharePrice;
    cout << endl;
    cout << "Please enter the number of shares owned from the fifth company: ";
    cin >> company5.numSharesOwned;
    cout << endl;
    
    cout << "COMPANY 6" << endl;
    cout << "_________" << endl << endl;
    cout << "Please enter the stock name for the sixth company: ";  
    cin >> company6.stockName;
    cout << endl;
    cout << "Please enter the sector letter for the sixth company: ";
    cin >> company6.sector;
    cout << endl;
    cout << "Please enter the current price of the stock share for the sixth company: ";
    cin >> company6.currSharePrice;
    cout << endl;
    cout << "Please enter the number of shares owned from the sixth company: ";
    cin >> company6.numSharesOwned;
    cout << endl;
    
    
    company1.totalShareValue = (company1.numSharesOwned * company1.currSharePrice); 
    company2.totalShareValue = (company2.numSharesOwned * company2.currSharePrice); 
    company3.totalShareValue = (company3.numSharesOwned * company3.currSharePrice); 
    company4.totalShareValue = (company4.numSharesOwned * company4.currSharePrice); 
    company5.totalShareValue = (company5.numSharesOwned * company5.currSharePrice); 
    company6.totalShareValue = (company6.numSharesOwned * company6.currSharePrice); 


    cout << "COMPANY 1" << endl;
    cout << "_________" << endl << endl;
    cout << "Stock Name     No. of Shares     Current Value     Total Value" << endl;   //Creating a display to show the user all the collected data.
    cout << "-----------    -------------     -------------     -----------" << endl;
    cout << company1.stockName << "            " << company1.numSharesOwned << "                " << company1.currSharePrice << "                " << company1.totalShareValue << endl;
    cout << "Total Portfolio: $" << company1.totalShareValue << endl;
    cout << endl;

    cout << "COMPANY 2" << endl;
    cout << "_________" << endl << endl;
    cout << "Stock Name     No. of Shares     Current Value     Total Value" << endl;   
    cout << "-----------    -------------     -------------     -----------" << endl;
    cout << company2.stockName << "            " << company2.numSharesOwned << "                " << company2.currSharePrice << "                " << company2.totalShareValue << endl;
    cout << "Total Portfolio: $" << company2.totalShareValue << endl;
    cout << endl;

    cout << "COMPANY 3" << endl;
    cout << "_________" << endl << endl;    
    cout << "Stock Name     No. of Shares     Current Value     Total Value" << endl;   
    cout << "-----------    -------------     -------------     -----------" << endl;
    cout << company3.stockName << "            " << company3.numSharesOwned << "                " << company3.currSharePrice << "                " << company3.totalShareValue << endl;
    cout << "Total Portfolio: $" << company3.totalShareValue << endl;
    cout << endl;
    
    cout << "COMPANY 4" << endl;
    cout << "_________" << endl << endl;     
    cout << "Stock Name     No. of Shares     Current Value     Total Value" << endl;   
    cout << "-----------    -------------     -------------     -----------" << endl;
    cout << company4.stockName << "            " << company4.numSharesOwned << "                " << company4.currSharePrice << "                " << company4.totalShareValue << endl;
    cout << "Total Portfolio: $" << company4.totalShareValue << endl;
    cout << endl;
    
    cout << "COMPANY 5" << endl;
    cout << "_________" << endl << endl;
    cout << "Stock Name     No. of Shares     Current Value     Total Value" << endl;   
    cout << "-----------    -------------     -------------     -----------" << endl;
    cout << company5.stockName << "            " << company5.numSharesOwned << "                " << company5.currSharePrice << "                " << company5.totalShareValue << endl;
    cout << "Total Portfolio: $" << company5.totalShareValue << endl;
    cout << endl;
    
    cout << "COMPANY 6" << endl;
    cout << "_________" << endl << endl;
    cout << "Stock Name     No. of Shares     Current Value     Total Value" << endl;   
    cout << "-----------    -------------     -------------     -----------" << endl;
    cout << company6.stockName << "            " << company6.numSharesOwned << "                " << company6.currSharePrice << "                " << company6.totalShareValue << endl;
    cout << "Total Portfolio: $" << company6.totalShareValue << endl;
    cout << endl;

    
    return 0;
    
}

/* Test Run of Program:

COMPANY 1
_________

Please enter the stock name for the first company: FordM

Please enter the sector letter for the first company: A

Please enter the current price of the stock share for the first company: 18.76

Please enter the number of shares owned from the first company: 87

COMPANY 2
_________

Please enter the stock name for the second company: Albertsn

Please enter the sector letter for the second company: C

Please enter the current price of the stock share for the second company: 34.39

Please enter the number of shares owned from the second company: 542

COMPANY 3
_________

Please enter the stock name for the third company: AAPL

Please enter the sector letter for the third company: T

Please enter the current price of the stock share for the third company: 145.91

Please enter the number of shares owned from the third company: 5

COMPANY 4
_________

Please enter the stock name for the fourth company: TSLA

Please enter the sector letter for the fourth company: A

Please enter the current price of the stock share for the fourth company: 375.64

Please enter the number of shares owned from the fourth company: 50

COMPANY 5
_________

Please enter the stock name for the fifth company: WFC

Please enter the sector letter for the fifth company: F

Please enter the current price of the stock share for the fifth company: 53.02

Please enter the number of shares owned from the fifth company: 1368

COMPANY 6
_________

Please enter the stock name for the sixth company: KELTIR

Please enter the sector letter for the sixth company: C

Please enter the current price of the stock share for the sixth company: 1050.00

Please enter the number of shares owned from the sixth company: 12

COMPANY 1
_________

Stock Name     No. of Shares     Current Value     Total Value
-----------    -------------     -------------     -----------
FordM            87                18.76                1632.12
Total Portfolio: $1632.12

COMPANY 2
_________

Stock Name     No. of Shares     Current Value     Total Value
-----------    -------------     -------------     -----------
Albertsn            542                34.39                18639.4
Total Portfolio: $18639.4

COMPANY 3
_________

Stock Name     No. of Shares     Current Value     Total Value
-----------    -------------     -------------     -----------
AAPL            5                145.91                729.55
Total Portfolio: $729.55

COMPANY 4
_________

Stock Name     No. of Shares     Current Value     Total Value
-----------    -------------     -------------     -----------
TSLA            50                375.64                18782
Total Portfolio: $18782

COMPANY 5
_________

Stock Name     No. of Shares     Current Value     Total Value
-----------    -------------     -------------     -----------
WFC            1368                53.02                72531.4
Total Portfolio: $72531.4

COMPANY 6
_________

Stock Name     No. of Shares     Current Value     Total Value
-----------    -------------     -------------     -----------
KELTIR            12                1050                12600
Total Portfolio: $12600

*/

