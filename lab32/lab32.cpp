#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
using namespace std;

/*  Kelsey Dimmick
    10/12/2017
    A program to find a user's income tax and amount owed or to be refunded.
*/

//A class to calculate Income Tax and run through if statements.
class IncomeTax {
    private:
        //Declaring and initializing the private variables for tax exemption values.
        int personal_exemption_ = 4050;
        int single_deduction_ = 6350;
        int married_deduction_ = 12700;
        
        //Declaring and initializing the private variables for the user variant variables.
        char marital_status_ = 'p';
        int tax_withheld_ = 0;
        int gross_wages_ = 0;
    //Stating the public functions and defining them later in the program.
    public:
        void SetGrossWages(int user_gross_wages);
        int GetGrossWages();
        void SetMaritalStatus(char status);
        char GetMaritalStatus();
        void SetTaxWithheld(int tax);
        int GetTaxWithheld();
        void Print();
        
};
//A function related to the Income Tax class to set the marital status of the user.
void IncomeTax::SetMaritalStatus(char status){
    
    switch (status){
        case 's':
        case 'm':
        case 'S':
        case 'M':
            marital_status_ = status;
            break;
        default:
            marital_status_ = 's';
            break;
    }
    
    return;
};
//A function related to the Income Tax class to get the marital status of the user to be used in later conditional statements.
char IncomeTax::GetMaritalStatus(){
    
    return marital_status_;
};
//A function related to the Income Tax class to set the user's gross wage earnings.
void IncomeTax::SetGrossWages(int user_gross_wages){
    
    gross_wages_ = user_gross_wages;
    
    return;
};
//A function related to the Income Tax class to get the user's gross wage earnings and calculate the number based on marital status.
int IncomeTax::GetGrossWages(){
    
    switch (marital_status_){
        case 's':
        case 'S':
            gross_wages_ = (((gross_wages_) - (personal_exemption_)) - (single_deduction_));
            break;
        case 'm':
        case 'M':
            gross_wages_ = (((gross_wages_) - (personal_exemption_)) - (married_deduction_));
            break;
        default:
            break;
    }
    
    return gross_wages_;
    
    
};
//A function related to the Income Tax class to set the taxes withheld from the gross eage earnings
void IncomeTax::SetTaxWithheld(int tax){
    
    //Setting the tax to the tax withheld private variable.
    tax_withheld_ = tax;
    
     //An if statement to calculate the taxes withheld by checking the user's marital status.
    if ((gross_wages_ > 0) && ((marital_status_ == 'm') || (marital_status_ == 'M'))){
        //Tax is owed and calculate from the table. Based on Married or single.
        if ((gross_wages_ <= 18650) && (gross_wages_ >= 0)){
            tax_withheld_ = ((gross_wages_) - ((gross_wages_) * (10/100)));
        }
        else if (gross_wages_ <= 75900){
            tax_withheld_ = ((gross_wages_) - (1865 + ((18650) * (15/100))));
        }
        else if (gross_wages_ <= 153100){
            tax_withheld_ = ((gross_wages_) - (10452.50 + ((75900) * (25/100))));
        }
        else if (gross_wages_ <= 191650){
            tax_withheld_ = ((gross_wages_) - (29752.50 + ((153100) * (28/100))));
        }
        else if (gross_wages_ <= 416700){
            tax_withheld_ = ((gross_wages_) - (52222.50 + ((233350) * (39.6/100))));
        }
        else if (gross_wages_ > 416700){
            tax_withheld_ = ((gross_wages_) - (112728 + ((470700) * (39.6/100))));
        }
    }
    if ((gross_wages_ > 0) && ((marital_status_ == 's') || (marital_status_ == 'S'))){
        
        if ((gross_wages_ <= 9325) && (gross_wages_ >= 0)){
            tax_withheld_ = ((gross_wages_) - ((gross_wages_) * (10/100)));
        }
        else if (gross_wages_ <= 37950){
            tax_withheld_ = ((gross_wages_) - (932.50 + ((9325) * (15/100))));
        }
        else if (gross_wages_ <= 91900){
            tax_withheld_ = ((gross_wages_) - (5226.25 + ((37950) * (25/100))));
        }
        else if (gross_wages_ <= 191650){
            tax_withheld_ = ((gross_wages_) - (18713.75 + ((91900) * (28/100))));
        }
        else if (gross_wages_ <= 416700){
            tax_withheld_ = ((gross_wages_) - (46643.75 + ((191650) * (39.6/100))));
        }
        else if (gross_wages_ > 416700){
            tax_withheld_ = ((gross_wages_) - (120910.25 + ((416700) * (39.6/100))));
        }
    }
        //An if statement to check if a tax refund is required.
    if (gross_wages_ > tax_withheld_){
        //Person owes more tax.
        cout << "You owe: $" << (tax_withheld_) << " in taxes." << endl << endl;
    }
    else {
        //Person gets a refund.
        cout << "You recieve: $" << -(tax_withheld_) << " as a tax refund." << endl << endl;
    }
    return;
    
};

int IncomeTax::GetTaxWithheld(){
    
   
    
    return tax_withheld_;
};

void IncomeTax::Print(){
    cout << "You owe no taxes." << endl << endl;
    
    return;
};

int main () {
    
    //Declaring and initializing variables for user inputs.
    string user_name = "name";
    int tot_wages = 0;
    char marital_stat = 'a';
    int withheld = 0;
    
    //Asking for user to input values.
    cout << "Please input your name: " << endl << endl;
    getline(cin, user_name);
    
    cout << "Please enter your marital status (a 'm' for married and an 's' for single): " << endl << endl;
    cin >> marital_stat;
    cin.ignore(1000, '\n');
    
    cout << "Please enter your total wages: " << endl << endl;
    cin >> tot_wages;
    cin.ignore(1000, '\n');
    
    cout << "Please enter the amount of your wages withheld: " << endl << endl;
    cin >> withheld;
    cin.ignore(1000, '\n');
  
    //Declaring the object from the class declared previously.
    IncomeTax taxes;
    
    taxes.SetGrossWages(tot_wages);
    taxes.SetMaritalStatus(marital_stat);
    taxes.SetTaxWithheld(withheld);
    
    cout << "Gross Wages AGI: $" << taxes.GetGrossWages() << endl << endl;
    cout << "Marital Status: " << taxes.GetMaritalStatus() << endl << endl;
    cout << "Taxes Withheld: $" << taxes.GetTaxWithheld() << endl << endl;
}