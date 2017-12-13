#include <iostream>
#include <string>
using namespace std;

/*  Kelsey Dimmick
    09/07/2017
    A program for a stock portfolio.
*/

struct StockPortfolio {         //Making a struct for the StockPortfolio objects to use later in int main.
    string stock_name;
    char sector;
    double curr_share_price;
    int num_shares_owned;
    double total_share_value;   //Declaring a variable to hold the total value of the shares owned.
};

int main () {
    
    StockPortfolio company1;    //Creates a section in StockPortfolio for each company information.
    StockPortfolio company2;
    StockPortfolio company3;
    StockPortfolio company4;
    StockPortfolio company5;
    StockPortfolio company6;
    
    company1.stock_name;         //Ties all the declared objects in the struct StockPortfolio to each company.
    company1.sector;
    company1.curr_share_price;
    company1.num_shares_owned;
    company1.total_share_value;
    
    company2.stock_name;      
    company2.sector;
    company2.curr_share_price;
    company2.num_shares_owned;
    company2.total_share_value;
    
    company3.stock_name;        
    company3.sector;
    company3.curr_share_price;
    company3.num_shares_owned;
    company3.total_share_value;
    
    company4.stock_name;        
    company4.sector;
    company4.curr_share_price;
    company4.num_shares_owned;
    company4.total_share_value;
    
    company5.stock_name;        
    company5.sector;
    company5.curr_share_price;
    company5.num_shares_owned;
    company5.total_share_value;
    
    company6.stock_name;        
    company6.sector;
    company6.curr_share_price;
    company6.num_shares_owned;
    company6.total_share_value;
    

    cout << "COMPANY 1" << endl;
    cout << "_________" << endl << endl;
    cout << "Please enter the stock name for the first company: ";      //Prompting the user to input the values.
    cin >> company1.stock_name;
    cout << endl;
    cout << "Please enter the sector letter for the first company: ";
    cin >> company1.sector;
    cout << endl;
    cout << "Please enter the current price of the stock share for the first company: ";
    cin >> company1.curr_share_price;
    cout << endl;
    cout << "Please enter the number of shares owned from the first company: ";
    cin >> company1.num_shares_owned;
    cout << endl;
    
    cout << "COMPANY 2" << endl;
    cout << "_________" << endl << endl;
    cout << "Please enter the stock name for the second company: ";      
    cin >> company2.stock_name;
    cout << endl;
    cout << "Please enter the sector letter for the second company: ";
    cin >> company2.sector;
    cout << endl;
    cout << "Please enter the current price of the stock share for the second company: ";
    cin >> company2.curr_share_price;
    cout << endl;
    cout << "Please enter the number of shares owned from the second company: ";
    cin >> company2.num_shares_owned;
    cout << endl;
    
    cout << "COMPANY 3" << endl;
    cout << "_________" << endl << endl;
    cout << "Please enter the stock name for the third company: ";     
    cin >> company3.stock_name;
    cout << endl;
    cout << "Please enter the sector letter for the third company: ";
    cin >> company3.sector;
    cout << endl;
    cout << "Please enter the current price of the stock share for the third company: ";
    cin >> company3.curr_share_price;
    cout << endl;
    cout << "Please enter the number of shares owned from the third company: ";
    cin >> company3.num_shares_owned;
    cout << endl;
    
    cout << "COMPANY 4" << endl;
    cout << "_________" << endl << endl;
    cout << "Please enter the stock name for the fourth company: ";  
    cin >> company4.stock_name;
    cout << endl;
    cout << "Please enter the sector letter for the fourth company: ";
    cin >> company4.sector;
    cout << endl;
    cout << "Please enter the current price of the stock share for the fourth company: ";
    cin >> company4.curr_share_price;
    cout << endl;
    cout << "Please enter the number of shares owned from the fourth company: ";
    cin >> company4.num_shares_owned;
    cout << endl;
    
    cout << "COMPANY 5" << endl;
    cout << "_________" << endl << endl;
    cout << "Please enter the stock name for the fifth company: ";  
    cin >> company5.stock_name;
    cout << endl;
    cout << "Please enter the sector letter for the fifth company: ";
    cin >> company5.sector;
    cout << endl;
    cout << "Please enter the current price of the stock share for the fifth company: ";
    cin >> company5.curr_share_price;
    cout << endl;
    cout << "Please enter the number of shares owned from the fifth company: ";
    cin >> company5.num_shares_owned;
    cout << endl;
    
    cout << "COMPANY 6" << endl;
    cout << "_________" << endl << endl;
    cout << "Please enter the stock name for the sixth company: ";  
    cin >> company6.stock_name;
    cout << endl;
    cout << "Please enter the sector letter for the sixth company: ";
    cin >> company6.sector;
    cout << endl;
    cout << "Please enter the current price of the stock share for the sixth company: ";
    cin >> company6.curr_share_price;
    cout << endl;
    cout << "Please enter the number of shares owned from the sixth company: ";
    cin >> company6.num_shares_owned;
    cout << endl;
    
    
    company1.total_share_value = (company1.num_shares_owned * company1.curr_share_price); 
    company2.total_share_value = (company2.num_shares_owned * company2.curr_share_price); 
    company3.total_share_value = (company3.num_shares_owned * company3.curr_share_price); 
    company4.total_share_value = (company4.num_shares_owned * company4.curr_share_price); 
    company5.total_share_value = (company5.num_shares_owned * company5.curr_share_price); 
    company6.total_share_value = (company6.num_shares_owned * company6.curr_share_price); 


    cout << "COMPANY 1" << endl;
    cout << "_________" << endl << endl;
    cout << "Stock Name     No. of Shares     Current Value     Total Value" << endl;   //Creating a display to show the user all the collected data.
    cout << "-----------    -------------     -------------     -----------" << endl;
    cout << company1.stock_name << "            " << company1.num_shares_owned << "                " << company1.curr_share_price << "                " << company1.total_share_value << endl;
    cout << "Total Portfolio: $" << company1.total_share_value << endl;
    cout << endl;

    cout << "COMPANY 2" << endl;
    cout << "_________" << endl << endl;
    cout << "Stock Name     No. of Shares     Current Value     Total Value" << endl;   
    cout << "-----------    -------------     -------------     -----------" << endl;
    cout << company2.stock_name << "            " << company2.num_shares_owned << "                " << company2.curr_share_price << "                " << company2.total_share_value << endl;
    cout << "Total Portfolio: $" << company2.total_share_value << endl;
    cout << endl;

    cout << "COMPANY 3" << endl;
    cout << "_________" << endl << endl;    
    cout << "Stock Name     No. of Shares     Current Value     Total Value" << endl;   
    cout << "-----------    -------------     -------------     -----------" << endl;
    cout << company3.stock_name << "            " << company3.num_shares_owned << "                " << company3.curr_share_price << "                " << company3.total_share_value << endl;
    cout << "Total Portfolio: $" << company3.total_share_value << endl;
    cout << endl;
    
    cout << "COMPANY 4" << endl;
    cout << "_________" << endl << endl;     
    cout << "Stock Name     No. of Shares     Current Value     Total Value" << endl;   
    cout << "-----------    -------------     -------------     -----------" << endl;
    cout << company4.stock_name << "            " << company4.num_shares_owned << "                " << company4.curr_share_price << "                " << company4.total_share_value << endl;
    cout << "Total Portfolio: $" << company4.total_share_value << endl;
    cout << endl;
    
    cout << "COMPANY 5" << endl;
    cout << "_________" << endl << endl;
    cout << "Stock Name     No. of Shares     Current Value     Total Value" << endl;   
    cout << "-----------    -------------     -------------     -----------" << endl;
    cout << company5.stock_name << "            " << company5.num_shares_owned << "                " << company5.curr_share_price << "                " << company5.total_share_value << endl;
    cout << "Total Portfolio: $" << company5.total_share_value << endl;
    cout << endl;
    
    cout << "COMPANY 6" << endl;
    cout << "_________" << endl << endl;
    cout << "Stock Name     No. of Shares     Current Value     Total Value" << endl;   
    cout << "-----------    -------------     -------------     -----------" << endl;
    cout << company6.stock_name << "            " << company6.num_shares_owned << "                " << company6.curr_share_price << "                " << company6.total_share_value << endl;
    cout << "Total Portfolio: $" << company6.total_share_value << endl;
    cout << endl;
    
    cout << "Total combined stock value: " << company1.total_share_value + company2.total_share_value + company3.total_share_value + company4.total_share_value + company5.total_share_value + company6.total_share_value << endl;
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

