#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
using namespace std;

/*  Kelsey Dimmick
    10/05/2017
    A program to calculate specific sales taxes from a purchased item.
    http://www.taxrates.com/state-rates/
*/

//Class to store and calculate the sales taxes from different cities, as well as their other corresponding taxes, based on a starting price.
class SalesTax
{

    //Declaring each variable, respectively, used to calculate the amount of tax.
    
    private:
    
        //The sales tax variables for the city of Chico.
        double tot_chico_ = 0.0;
        double chico_combined_ = (7.25 / 100);
        double california_ = (6.00 / 100);
        double butte_county_ = (0.25 / 100);
        double chico_ = (0.0 / 100);
        double chico_special_ = (1.0 / 100);
        
        //The sales tax variables for the city of Paradise.
        double tot_paradise_ = 0.0;
        double paradise_combined_ = (7.75 / 100);
        double paradise_ = (0.5 / 100);
        double paradise_special_ = (1.0 / 100);
        
        //The sales tax variables for the city of Sacramento.
        double tot_sacramento_ = 0.0;
        double sacramento_combined_ = (8.25 / 100);
        double sacramento_county_ = (0.25 / 100);
        double sacramento_ = (0.5 / 100);
        double sacramento_special_ = (1.5 / 100);
        
        //The sales tax variables for the city of Las Vegas.
        double tot_vegas_ = 0.0;
        double vegas_combined_ = (8.25 / 100);
        double nevada_ = (4.6 / 100);
        double clark_county_ = (3.65 / 100);
        double vegas_ = (0.0 / 100);
        double vegas_special_ = (0.0 / 100);
        
        //The sales tax variables for the city of Phoenix.
        double tot_phoenix_ = 0.0;
        double phoenix_combined_ = (8.6 / 100);
        double arizona_ = (5.6 / 100);
        double maricopa_county_ = (0.7 / 100);
        double phoenix_ = (2.3 / 100);
        double phoenix_special_ = (0.0 / 100);
        
        //The variable for the price of the item.
        double price_ = 0.0;
    
    //Functions to help with the storing, calculation, and printing of values.
    public:
    
        //Sets the price value which is obtained in the main.
        void SetPrice(double cost) {
            
            price_ = cost;
            
            return;
        };
        
        //A function to get the total combined Chico sales tax.
        double GetChicoCombo() {
            
            chico_combined_ = chico_combined_ * price_;
            
            return chico_combined_;
        };
        
        //A function to get the total price of the item with sales tax for Chico.
        double GetTotChico(){
            
            tot_chico_ = price_ + (chico_combined_ * price_);
            
            return tot_chico_;
        };
        
        //A function to print the total price of the item with sales tax for Chico.
        void PrintTotChico(){
            
            cout << "CHICO: " << endl;
            cout << "The total cost for the item with the Sales Tax is: $" << tot_chico_ << endl;
            cout << "Below is the itemized list of tax allocations based on the price of the item." << endl << endl;
            
            return;
        };
        
        //A function to print the total combined Chico sales tax.
        void PrintChicoCombo(){
            
            cout << "Total cost for Combined Chico Sales Tax: $" << chico_combined_ << endl;
            
            return;
        };
        
        //A function to get the state of California sales tax.
        double GetCalifornia(){
            
            california_ = california_ * price_;
            
            return california_;
        };
        
        //A function to print the California sales tax.
        void PrintCalifornia(){
        
            cout << "$" << california_ << " goes to the state of California." << endl;
            
            return;
        };
        
        //A function to get the sales tax for Butte County.
        double GetButte(){
            butte_county_ = butte_county_ * price_;
            
            return butte_county_;
        };
        
        //A function to print the sales tax for Butte County.
        void PrintButte(){
            
            cout << "$" << butte_county_ << " goes to Butte County." << endl;
            
            return;
        };
        
        //A function to get the sales tax for Chico.
        double GetChico(){
            
            chico_ = chico_ * price_;
            
            return chico_;
        };
        
        //A function to print the sales tax for Chico.
        void PrintChico(){
            
            cout << "$" << chico_ << " goes to Chico." << endl;
            
            return;
        };
        
        //A function to get the special sales tax for Chico.
        double GetSpecialChico(){
            
            chico_special_ = chico_special_ * price_;
            
            return chico_special_;
        };
        
        //A function to print the special sales tax for Chico.
        void PrintSpecialChico(){
            
            cout << "$" << chico_special_ << " goes to a special section." << endl << endl;
            
            return;
        };
        
        //A function to get the combined sales tax for Paradise.
        double GetParadiseCombo() {
            
            paradise_combined_ = paradise_combined_ * price_;
            
            return paradise_combined_;
        };
        
        //A function to get the total price of the item with sales tax for Paradise.
        double GetTotParadise(){
            
            tot_paradise_ = price_ + (paradise_combined_ * price_);
            
            return tot_paradise_;
        };
        
        //A function to print the total price of the item with sales tax for Paradise.
        void PrintTotParadise(){
            
            cout << "PARADISE: " << endl;
            cout << "The total cost for the item with the Sales Tax is: $" << tot_paradise_ << endl;
            cout << "Below is the itemized list of tax allocations based on the price of the item." << endl << endl;
            
            return;
        };
        
        //A function to print the combined sales tax for Paradise.
        void PrintParadiseCombo(){
            
            cout << "Total cost for Combined Paradise Sales Tax: $" << paradise_combined_ << endl;
            
            return;
        };
        
        //A function to get the sales tax for Paradise.
        double GetParadise(){
            
            paradise_ = paradise_ * price_;
            
            return paradise_;
        };
        
        //A function to print the sales tax for Paradise.
        void PrintParadise(){
            
            cout << "$" << paradise_ << " goes to Paradise." << endl;
            
            return;
        };
        
        //A function to get the special tax for Paradise.
        double GetSpecialParadise(){
            
            paradise_special_ = paradise_special_ * price_;
            
            return paradise_special_;
        };
        
        //A function to print the special tax for Paradise.
        void PrintSpecialParadise(){
            
            cout << "$" << paradise_special_ << " goes to a special section." << endl << endl;
            
            return;
        };
        
        //A function to get the combined Sacramento sales tax.
        double GetSacramentoCombo() {
            
            sacramento_combined_ = sacramento_combined_ * price_;
            
            return sacramento_combined_;
        };
        
        //A function to get the total price of the item with sales tax for Sacramento.
        double GetTotSacramento(){
            
            tot_sacramento_ = price_ + (sacramento_combined_ * price_);
            
            return tot_sacramento_;
        };
        
        //A function to print the total price of the item with sales tax for Sacramento.
        void PrintTotSacramento(){
            
            cout << "SACRAMENTO: " << endl;
            cout << "The total cost for the item with the Sales Tax is: $" << tot_sacramento_ << endl;
            cout << "Below is the itemized list of tax allocations based on the price of the item." << endl << endl;
            
            return;
        };
        
        //A function to print the combined Sacramento sales tax.
        void PrintSacramentoCombo(){
            
            cout << "Total cost for Combined Sacramento Sales Tax: $" << sacramento_combined_ << endl;
            
            return;
        };
        
        //A function to get the sales tax for Sacramento County.
        double GetSacCounty(){
            sacramento_county_ = sacramento_county_ * price_;
            
            return sacramento_county_;
        };
        
        //A function to print the sales tax for Sacramento County.
        void PrintSacCounty(){
            
            cout << "$" << sacramento_county_ << " goes to Sacramento County." << endl;
            
            return;
        };
        
        //A function to get the sales tax for Sacramento.
        double GetSacramento(){
            
            sacramento_ = sacramento_ * price_;
            
            return sacramento_;
        };
        
        //A function to print the sales tax for Sacramento.
        void PrintSacramento(){
            
            cout << "$" << sacramento_ << " goes to Sacramento." << endl;
            
            return;
        };
        
        //A function to get the special tax for Sacramento.
        double GetSpecialSacramento(){
            
            sacramento_special_ = sacramento_special_ * price_;
            
            return sacramento_special_;
        };
        
        //A function to print the special sales tax for Sacramento.
        void PrintSpecialSacramento(){
            
            cout << "$" << sacramento_special_ << " goes to a special section." << endl << endl;
            
            return;
        };
        
        //A function to get the combined Las Vegas sales tax.
        double GetVegasCombo() {
            
            vegas_combined_ = vegas_combined_ * price_;
            
            return vegas_combined_;
        };
        
        //A function to get the total price of the item with sales tax for Las Vegas.
        double GetTotVegas(){
            
            tot_vegas_ = price_ + (vegas_combined_ * price_);
            
            return tot_vegas_;
        };
        
        //A function to print the total price of the item with sales tax for Las Vegas.
        void PrintTotVegas(){
            
            cout << "LAS VEGAS:" << endl;
            cout << "The total cost for the item with the Sales Tax is: $" << tot_vegas_ << endl;
            cout << "Below is the itemized list of tax allocations based on the price of the item." << endl << endl;
            
            return;
        };
        
        //A function to print the combined Las Vegas sales tax.
        void PrintVegasCombo(){
            
            cout << "Total cost for Combined Las Vegas Sales Tax: $" << vegas_combined_ << endl;
            
            return;
        };
        
        //A function to get the sales tax for the state of Nevada.
        double GetNevada(){
            
            nevada_ = nevada_ * price_;
            
            return nevada_;
        };
        
        //A function to print the sales tax for Nevada.
        void PrintNevada(){
        
            cout << "$" << nevada_ << " goes to the state of Nevada." << endl;
            
            return;
        };
        
        //A function to get the sales tax for Clark County.
        double GetClarkCounty(){
            clark_county_ = clark_county_ * price_;
            
            return clark_county_;
        };
        
        //A function to print the sales tax for Clark County.
        void PrintClarkCounty(){
            
            cout << "$" << clark_county_ << " goes to Clark County." << endl;
            
            return;
        };
        
        //A function to get the sales tax for Las Vegas.
        double GetVegas(){
            
            vegas_ = vegas_ * price_;
            
            return vegas_;
        };
        
        //A function to print the sales tax for Las Vegas.
        void PrintVegas(){
            
            cout << "$" << vegas_ << " goes to Las Vegas." << endl;
            
            return;
        };
        
        //A function to get the special tax for Las Vegas.
        double GetSpecialVegas(){
            
            vegas_special_ = vegas_special_ * price_;
            
            return vegas_special_;
        };
        
        //A function to print the special tax for Las Vegas.
        void PrintSpecialVegas(){
            
            cout << "$" << vegas_special_ << " goes to a special section." << endl << endl;
            
            return;
        };
        
        //A function to get the combined Phoenix sales tax.
        double GetPhoenixCombo() {
            
            phoenix_combined_ = phoenix_combined_ * price_;
            
            return phoenix_combined_;
        };
        
        //A function to get the total price of the item with sales tax for Phoenix.
        double GetTotPhoenix(){
            
            tot_phoenix_ = price_ + (phoenix_combined_ * price_);
            
            return tot_phoenix_;
        };
        
        //A function to print the total price of the item with sales tax for Phoenix.
        void PrintTotPhoenix(){
            
            cout << "PHOENIX: " << endl;
            cout << "The total cost for the item with the Sales Tax is: $" << tot_phoenix_ << endl;
            cout << "Below is the itemized list of tax allocations based on the price of the item." << endl << endl;
            
            return;
        };
        
        //A function to print the combined Phoenix sales tax.
        void PrintPhoenixCombo(){
            
            cout << "Total cost for Combined Phoenix Sales Tax: $" << phoenix_combined_ << endl;
            
            return;
        };
        
        //A function to get the sales tax of Arizona.
        double GetArizona(){
            
            arizona_ = arizona_ * price_;
            
            return arizona_;
        };
        
        //A function to print the sales tax for Arizona.
        void PrintArizona(){
        
            cout << "$" << arizona_ << " goes to the state of Arizona." << endl;
            
            return;
        };
        
        //A function to get the sales tax for Maricopa County.
        double GetMaricopaCounty(){
            maricopa_county_ = maricopa_county_ * price_;
            
            return maricopa_county_;
        };
        
        //A function to print the sales tax for Maricopa County.
        void PrintMaricopaCounty(){
            
            cout << "$" << maricopa_county_ << " goes to Maricopa County." << endl;
            
            return;
        };
        
        //A function to get the sales tax for Phoenix.
        double GetPhoenix(){
            
            phoenix_ = phoenix_ * price_;
            
            return phoenix_;
        };
        
        //A function to print the sales tax for Phoenix.
        void PrintPhoenix(){
            
            cout << "$" << phoenix_ << " goes to Phoenix." << endl;
            
            return;
        };
        
        //A function to get the special sales tax for Phoenix.
        double GetSpecialPhoenix(){
            
            phoenix_special_ = phoenix_special_ * price_;
            
            return phoenix_special_;
        };
        
        //A function to print the special sales tax for Phoenix.
        void PrintSpecialPhoenix(){
            
            cout << "$" << phoenix_special_ << " goes to a special section." << endl << endl;
            
            return;
        };
};

int main()
{   
    //Creating the object cost for the class Sales Tax.
    SalesTax cost;
    
    //Initializing and declaring the variable price.
    double price = 0.0;
    
    //Getting the input of the price and storing it in the variable of price.
    cout << "Please enter a price value : $";
    cin >> price;
    cout << endl << endl;
    
    //To set the inputted price.
    cost.SetPrice(price);
    
    //Getters for Chico.
    cost.GetTotChico();
    cost.GetChicoCombo();
    cost.GetCalifornia();
    cost.GetButte();
    cost.GetChico();
    cost.GetSpecialChico();
    
    //Getters for Paradise.
    cost.GetTotParadise();
    cost.GetParadiseCombo();
    cost.GetParadise();
    cost.GetSpecialParadise();
    
    //Getters for Sacramento.
    cost.GetTotSacramento();
    cost.GetSacramentoCombo();
    cost.GetSacCounty();
    cost.GetSacramento();
    cost.GetSpecialSacramento();
    
    //Getters for Las Vegas.
    cost.GetTotVegas();
    cost.GetVegasCombo();
    cost.GetNevada();
    cost.GetClarkCounty();
    cost.GetVegas();
    cost.GetSpecialVegas();
    
    //Getters for Phoenix.
    cost.GetTotPhoenix();
    cost.GetPhoenixCombo();
    cost.GetArizona();
    cost.GetMaricopaCounty();
    cost.GetPhoenix();
    cost.GetSpecialPhoenix();
    
    //Prints for Chico.
    cost.PrintTotChico();
    cost.PrintChicoCombo();
    cost.PrintCalifornia();
    cost.PrintButte();
    cost.PrintChico();
    cost.PrintSpecialChico();
    
    //Prints for Paradise.
    cost.PrintTotParadise();
    cost.PrintParadiseCombo();
    cost.PrintCalifornia();
    cost.PrintButte();
    cost.PrintParadise();
    cost.PrintSpecialParadise();
    
    //Prints for Sacramento.
    cost.PrintTotSacramento();
    cost.PrintSacramentoCombo();
    cost.PrintCalifornia();
    cost.PrintSacCounty();
    cost.PrintSacramento();
    cost.PrintSpecialSacramento();
    
    //Prints for Las Vegas.
    cost.PrintTotVegas();
    cost.PrintVegasCombo();
    cost.PrintNevada();
    cost.PrintClarkCounty();
    cost.PrintVegas();
    cost.PrintSpecialVegas();
    
    //Prints for Phoenix.
    cost.PrintTotPhoenix();
    cost.PrintPhoenixCombo();
    cost.PrintArizona();
    cost.PrintMaricopaCounty();
    cost.PrintPhoenix();
    cost.PrintSpecialPhoenix();
    
    return 0;
}

/*

TEST1:
Please enter a price value : $28.55


CHICO: 
The total cost for the item with the Sales Tax is: $30.6199
Below is the itemized list of tax allocations based on the price of the item.

Total cost for Combined Chico Sales Tax: $2.06987
$1.713 goes to the state of California.
$0.071375 goes to Butte County.
$0 goes to Chico.
$0.2855 goes to a special section.

PARADISE: 
The total cost for the item with the Sales Tax is: $30.7626
Below is the itemized list of tax allocations based on the price of the item.

Total cost for Combined Paradise Sales Tax: $2.21263
$1.713 goes to the state of California.
$0.071375 goes to Butte County.
$0.14275 goes to Paradise.
$0.2855 goes to a special section.

SACRAMENTO: 
The total cost for the item with the Sales Tax is: $30.9054
Below is the itemized list of tax allocations based on the price of the item.

Total cost for Combined Sacramento Sales Tax: $2.35537
$1.713 goes to the state of California.
$0.071375 goes to Sacramento County.
$0.14275 goes to Sacramento.
$0.42825 goes to a special section.

LAS VEGAS:
The total cost for the item with the Sales Tax is: $30.9054
Below is the itemized list of tax allocations based on the price of the item.

Total cost for Combined Las Vegas Sales Tax: $2.35537
$1.3133 goes to the state of Nevada.
$1.04207 goes to Clark County.
$0 goes to Las Vegas.
$0 goes to a special section.

PHOENIX: 
The total cost for the item with the Sales Tax is: $31.0053
Below is the itemized list of tax allocations based on the price of the item.

Total cost for Combined Phoenix Sales Tax: $2.4553
$1.5988 goes to the state of Arizona.
$0.19985 goes to Maricopa County.
$0.65665 goes to Phoenix.
$0 goes to a special section.

TEST2:
Please enter a price value : $55.87


CHICO: 
The total cost for the item with the Sales Tax is: $59.9206
Below is the itemized list of tax allocations based on the price of the item.

Total cost for Combined Chico Sales Tax: $4.05057
$3.3522 goes to the state of California.
$0.139675 goes to Butte County.
$0 goes to Chico.
$0.5587 goes to a special section.

PARADISE: 
The total cost for the item with the Sales Tax is: $60.1999
Below is the itemized list of tax allocations based on the price of the item.

Total cost for Combined Paradise Sales Tax: $4.32992
$3.3522 goes to the state of California.
$0.139675 goes to Butte County.
$0.27935 goes to Paradise.
$0.5587 goes to a special section.

SACRAMENTO: 
The total cost for the item with the Sales Tax is: $60.4793
Below is the itemized list of tax allocations based on the price of the item.

Total cost for Combined Sacramento Sales Tax: $4.60928
$3.3522 goes to the state of California.
$0.139675 goes to Sacramento County.
$0.27935 goes to Sacramento.
$0.83805 goes to a special section.

LAS VEGAS:
The total cost for the item with the Sales Tax is: $60.4793
Below is the itemized list of tax allocations based on the price of the item.

Total cost for Combined Las Vegas Sales Tax: $4.60928
$2.57002 goes to the state of Nevada.
$2.03925 goes to Clark County.
$0 goes to Las Vegas.
$0 goes to a special section.

PHOENIX: 
The total cost for the item with the Sales Tax is: $60.6748
Below is the itemized list of tax allocations based on the price of the item.

Total cost for Combined Phoenix Sales Tax: $4.80482
$3.12872 goes to the state of Arizona.
$0.39109 goes to Maricopa County.
$1.28501 goes to Phoenix.
$0 goes to a special section.

TEST3:
Please enter a price value : $84.12


CHICO: 
The total cost for the item with the Sales Tax is: $90.2187
Below is the itemized list of tax allocations based on the price of the item.

Total cost for Combined Chico Sales Tax: $6.0987
$5.0472 goes to the state of California.
$0.2103 goes to Butte County.
$0 goes to Chico.
$0.8412 goes to a special section.

PARADISE: 
The total cost for the item with the Sales Tax is: $90.6393
Below is the itemized list of tax allocations based on the price of the item.

Total cost for Combined Paradise Sales Tax: $6.5193
$5.0472 goes to the state of California.
$0.2103 goes to Butte County.
$0.4206 goes to Paradise.
$0.8412 goes to a special section.

SACRAMENTO: 
The total cost for the item with the Sales Tax is: $91.0599
Below is the itemized list of tax allocations based on the price of the item.

Total cost for Combined Sacramento Sales Tax: $6.9399
$5.0472 goes to the state of California.
$0.2103 goes to Sacramento County.
$0.4206 goes to Sacramento.
$1.2618 goes to a special section.

LAS VEGAS:
The total cost for the item with the Sales Tax is: $91.0599
Below is the itemized list of tax allocations based on the price of the item.

Total cost for Combined Las Vegas Sales Tax: $6.9399
$3.86952 goes to the state of Nevada.
$3.07038 goes to Clark County.
$0 goes to Las Vegas.
$0 goes to a special section.

PHOENIX: 
The total cost for the item with the Sales Tax is: $91.3543
Below is the itemized list of tax allocations based on the price of the item.

Total cost for Combined Phoenix Sales Tax: $7.23432
$4.71072 goes to the state of Arizona.
$0.58884 goes to Maricopa County.
$1.93476 goes to Phoenix.
$0 goes to a special section.

TEST4:
Please enter a price value : $32.31


CHICO: 
The total cost for the item with the Sales Tax is: $34.6525
Below is the itemized list of tax allocations based on the price of the item.

Total cost for Combined Chico Sales Tax: $2.34247
$1.9386 goes to the state of California.
$0.080775 goes to Butte County.
$0 goes to Chico.
$0.3231 goes to a special section.

PARADISE: 
The total cost for the item with the Sales Tax is: $34.814
Below is the itemized list of tax allocations based on the price of the item.

Total cost for Combined Paradise Sales Tax: $2.50402
$1.9386 goes to the state of California.
$0.080775 goes to Butte County.
$0.16155 goes to Paradise.
$0.3231 goes to a special section.

SACRAMENTO: 
The total cost for the item with the Sales Tax is: $34.9756
Below is the itemized list of tax allocations based on the price of the item.

Total cost for Combined Sacramento Sales Tax: $2.66558
$1.9386 goes to the state of California.
$0.080775 goes to Sacramento County.
$0.16155 goes to Sacramento.
$0.48465 goes to a special section.

LAS VEGAS:
The total cost for the item with the Sales Tax is: $34.9756
Below is the itemized list of tax allocations based on the price of the item.

Total cost for Combined Las Vegas Sales Tax: $2.66558
$1.48626 goes to the state of Nevada.
$1.17932 goes to Clark County.
$0 goes to Las Vegas.
$0 goes to a special section.

PHOENIX: 
The total cost for the item with the Sales Tax is: $35.0887
Below is the itemized list of tax allocations based on the price of the item.

Total cost for Combined Phoenix Sales Tax: $2.77866
$1.80936 goes to the state of Arizona.
$0.22617 goes to Maricopa County.
$0.74313 goes to Phoenix.
$0 goes to a special section.

TEST5:
Please enter a price value : $67.89


CHICO: 
The total cost for the item with the Sales Tax is: $72.812
Below is the itemized list of tax allocations based on the price of the item.

Total cost for Combined Chico Sales Tax: $4.92202
$4.0734 goes to the state of California.
$0.169725 goes to Butte County.
$0 goes to Chico.
$0.6789 goes to a special section.

PARADISE: 
The total cost for the item with the Sales Tax is: $73.1515
Below is the itemized list of tax allocations based on the price of the item.

Total cost for Combined Paradise Sales Tax: $5.26147
$4.0734 goes to the state of California.
$0.169725 goes to Butte County.
$0.33945 goes to Paradise.
$0.6789 goes to a special section.

SACRAMENTO: 
The total cost for the item with the Sales Tax is: $73.4909
Below is the itemized list of tax allocations based on the price of the item.

Total cost for Combined Sacramento Sales Tax: $5.60093
$4.0734 goes to the state of California.
$0.169725 goes to Sacramento County.
$0.33945 goes to Sacramento.
$1.01835 goes to a special section.

LAS VEGAS:
The total cost for the item with the Sales Tax is: $73.4909
Below is the itemized list of tax allocations based on the price of the item.

Total cost for Combined Las Vegas Sales Tax: $5.60093
$3.12294 goes to the state of Nevada.
$2.47798 goes to Clark County.
$0 goes to Las Vegas.
$0 goes to a special section.

PHOENIX: 
The total cost for the item with the Sales Tax is: $73.7285
Below is the itemized list of tax allocations based on the price of the item.

Total cost for Combined Phoenix Sales Tax: $5.83854
$3.80184 goes to the state of Arizona.
$0.47523 goes to Maricopa County.
$1.56147 goes to Phoenix.
$0 goes to a special section.

TEST6:
Please enter a price value : $8.47


CHICO: 
The total cost for the item with the Sales Tax is: $9.08408
Below is the itemized list of tax allocations based on the price of the item.

Total cost for Combined Chico Sales Tax: $0.614075
$0.5082 goes to the state of California.
$0.021175 goes to Butte County.
$0 goes to Chico.
$0.0847 goes to a special section.

PARADISE: 
The total cost for the item with the Sales Tax is: $9.12643
Below is the itemized list of tax allocations based on the price of the item.

Total cost for Combined Paradise Sales Tax: $0.656425
$0.5082 goes to the state of California.
$0.021175 goes to Butte County.
$0.04235 goes to Paradise.
$0.0847 goes to a special section.

SACRAMENTO: 
The total cost for the item with the Sales Tax is: $9.16878
Below is the itemized list of tax allocations based on the price of the item.

Total cost for Combined Sacramento Sales Tax: $0.698775
$0.5082 goes to the state of California.
$0.021175 goes to Sacramento County.
$0.04235 goes to Sacramento.
$0.12705 goes to a special section.

LAS VEGAS:
The total cost for the item with the Sales Tax is: $9.16878
Below is the itemized list of tax allocations based on the price of the item.

Total cost for Combined Las Vegas Sales Tax: $0.698775
$0.38962 goes to the state of Nevada.
$0.309155 goes to Clark County.
$0 goes to Las Vegas.
$0 goes to a special section.

PHOENIX: 
The total cost for the item with the Sales Tax is: $9.19842
Below is the itemized list of tax allocations based on the price of the item.

Total cost for Combined Phoenix Sales Tax: $0.72842
$0.47432 goes to the state of Arizona.
$0.05929 goes to Maricopa County.
$0.19481 goes to Phoenix.
$0 goes to a special section.

TEST7:
Please enter a price value : $69.98


CHICO: 
The total cost for the item with the Sales Tax is: $75.0536
Below is the itemized list of tax allocations based on the price of the item.

Total cost for Combined Chico Sales Tax: $5.07355
$4.1988 goes to the state of California.
$0.17495 goes to Butte County.
$0 goes to Chico.
$0.6998 goes to a special section.

PARADISE: 
The total cost for the item with the Sales Tax is: $75.4035
Below is the itemized list of tax allocations based on the price of the item.

Total cost for Combined Paradise Sales Tax: $5.42345
$4.1988 goes to the state of California.
$0.17495 goes to Butte County.
$0.3499 goes to Paradise.
$0.6998 goes to a special section.

SACRAMENTO: 
The total cost for the item with the Sales Tax is: $75.7534
Below is the itemized list of tax allocations based on the price of the item.

Total cost for Combined Sacramento Sales Tax: $5.77335
$4.1988 goes to the state of California.
$0.17495 goes to Sacramento County.
$0.3499 goes to Sacramento.
$1.0497 goes to a special section.

LAS VEGAS:
The total cost for the item with the Sales Tax is: $75.7534
Below is the itemized list of tax allocations based on the price of the item.

Total cost for Combined Las Vegas Sales Tax: $5.77335
$3.21908 goes to the state of Nevada.
$2.55427 goes to Clark County.
$0 goes to Las Vegas.
$0 goes to a special section.

PHOENIX: 
The total cost for the item with the Sales Tax is: $75.9983
Below is the itemized list of tax allocations based on the price of the item.

Total cost for Combined Phoenix Sales Tax: $6.01828
$3.91888 goes to the state of Arizona.
$0.48986 goes to Maricopa County.
$1.60954 goes to Phoenix.
$0 goes to a special section.

TEST8:
Please enter a price value : $57.79


CHICO: 
The total cost for the item with the Sales Tax is: $61.9798
Below is the itemized list of tax allocations based on the price of the item.

Total cost for Combined Chico Sales Tax: $4.18978
$3.4674 goes to the state of California.
$0.144475 goes to Butte County.
$0 goes to Chico.
$0.5779 goes to a special section.

PARADISE: 
The total cost for the item with the Sales Tax is: $62.2687
Below is the itemized list of tax allocations based on the price of the item.

Total cost for Combined Paradise Sales Tax: $4.47872
$3.4674 goes to the state of California.
$0.144475 goes to Butte County.
$0.28895 goes to Paradise.
$0.5779 goes to a special section.

SACRAMENTO: 
The total cost for the item with the Sales Tax is: $62.5577
Below is the itemized list of tax allocations based on the price of the item.

Total cost for Combined Sacramento Sales Tax: $4.76768
$3.4674 goes to the state of California.
$0.144475 goes to Sacramento County.
$0.28895 goes to Sacramento.
$0.86685 goes to a special section.

LAS VEGAS:
The total cost for the item with the Sales Tax is: $62.5577
Below is the itemized list of tax allocations based on the price of the item.

Total cost for Combined Las Vegas Sales Tax: $4.76768
$2.65834 goes to the state of Nevada.
$2.10933 goes to Clark County.
$0 goes to Las Vegas.
$0 goes to a special section.

PHOENIX: 
The total cost for the item with the Sales Tax is: $62.7599
Below is the itemized list of tax allocations based on the price of the item.

Total cost for Combined Phoenix Sales Tax: $4.96994
$3.23624 goes to the state of Arizona.
$0.40453 goes to Maricopa County.
$1.32917 goes to Phoenix.
$0 goes to a special section.

TEST9:
Please enter a price value : $1000.00


CHICO: 
The total cost for the item with the Sales Tax is: $1072.5
Below is the itemized list of tax allocations based on the price of the item.

Total cost for Combined Chico Sales Tax: $72.5
$60 goes to the state of California.
$2.5 goes to Butte County.
$0 goes to Chico.
$10 goes to a special section.

PARADISE: 
The total cost for the item with the Sales Tax is: $1077.5
Below is the itemized list of tax allocations based on the price of the item.

Total cost for Combined Paradise Sales Tax: $77.5
$60 goes to the state of California.
$2.5 goes to Butte County.
$5 goes to Paradise.
$10 goes to a special section.

SACRAMENTO: 
The total cost for the item with the Sales Tax is: $1082.5
Below is the itemized list of tax allocations based on the price of the item.

Total cost for Combined Sacramento Sales Tax: $82.5
$60 goes to the state of California.
$2.5 goes to Sacramento County.
$5 goes to Sacramento.
$15 goes to a special section.

LAS VEGAS:
The total cost for the item with the Sales Tax is: $1082.5
Below is the itemized list of tax allocations based on the price of the item.

Total cost for Combined Las Vegas Sales Tax: $82.5
$46 goes to the state of Nevada.
$36.5 goes to Clark County.
$0 goes to Las Vegas.
$0 goes to a special section.

PHOENIX: 
The total cost for the item with the Sales Tax is: $1086
Below is the itemized list of tax allocations based on the price of the item.

Total cost for Combined Phoenix Sales Tax: $86
$56 goes to the state of Arizona.
$7 goes to Maricopa County.
$23 goes to Phoenix.
$0 goes to a special section.

TEST10:
Please enter a price value : $15.00


CHICO: 
The total cost for the item with the Sales Tax is: $16.0875
Below is the itemized list of tax allocations based on the price of the item.

Total cost for Combined Chico Sales Tax: $1.0875
$0.9 goes to the state of California.
$0.0375 goes to Butte County.
$0 goes to Chico.
$0.15 goes to a special section.

PARADISE: 
The total cost for the item with the Sales Tax is: $16.1625
Below is the itemized list of tax allocations based on the price of the item.

Total cost for Combined Paradise Sales Tax: $1.1625
$0.9 goes to the state of California.
$0.0375 goes to Butte County.
$0.075 goes to Paradise.
$0.15 goes to a special section.

SACRAMENTO: 
The total cost for the item with the Sales Tax is: $16.2375
Below is the itemized list of tax allocations based on the price of the item.

Total cost for Combined Sacramento Sales Tax: $1.2375
$0.9 goes to the state of California.
$0.0375 goes to Sacramento County.
$0.075 goes to Sacramento.
$0.225 goes to a special section.

LAS VEGAS:
The total cost for the item with the Sales Tax is: $16.2375
Below is the itemized list of tax allocations based on the price of the item.

Total cost for Combined Las Vegas Sales Tax: $1.2375
$0.69 goes to the state of Nevada.
$0.5475 goes to Clark County.
$0 goes to Las Vegas.
$0 goes to a special section.

PHOENIX: 
The total cost for the item with the Sales Tax is: $16.29
Below is the itemized list of tax allocations based on the price of the item.

Total cost for Combined Phoenix Sales Tax: $1.29
$0.84 goes to the state of Arizona.
$0.105 goes to Maricopa County.
$0.345 goes to Phoenix.
$0 goes to a special section.

*/