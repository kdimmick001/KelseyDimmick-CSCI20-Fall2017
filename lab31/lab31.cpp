#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
using namespace std;

/*  Kelsey Dimmick
    10/10/2017
    A program to find a specified cell phone plan based on the user's usage.
*/

int main() 
{
    
    //Declaring and initializing the variables for the user inputs.
    int num_phones = 0;
    int num_tablets = 0;
    int data_gb = 0;
    
    //Declaring and initializing variables to hold the values for each of the plan costs based on the user inputs from the above variables.
    int att_upp_plan_cost = 0;
    int att_ucp_plan_cost = 0;
    int att_fp_plan_cost = 0;
    int ver_un_plan_cost = 0;
    int spr_un_plan_cost = 0;
    int spr_two_plan_cost = 0;
    
    //Getting the user input for the number of phones in the plan.
    cout << "WELCOME TO YOUR PERSONALIZED VALUE DATA PLAN!" << endl << endl << "Please enter the number of phones that will be in this plan: " << endl << endl;
    cin >> num_phones;
    cout << endl;
    
    //Getting the user input for the number of tablets in the plan.
    cout << "Please enter the number of tablets that will be in this plan: " << endl << endl;
    cin >> num_tablets;
    cout << endl;
    
    //Getting the user data usage.
    cout << "Please enter the amount of data you wish to have on this plan: " << endl << endl;
    cin >> data_gb;
    cout << endl;
    
    
    //If statements to determine for ATT Unlimited Plus Plan.
    if ((num_phones <= 10) && (num_phones >= 1)){
        
        att_upp_plan_cost = att_upp_plan_cost + 90;
        
    }
    if ((num_phones <= 10) && (num_phones >= 2)){
        
        att_upp_plan_cost = att_upp_plan_cost + 145;
        
    }
    if ((num_phones <= 10) && (num_phones > 2)){
        
        att_upp_plan_cost = att_upp_plan_cost + ((num_phones - 2) * 20);
        
    }
    if ((num_tablets >= 1)){
        
        att_upp_plan_cost = att_upp_plan_cost + (num_tablets * 10);
        
    }
    
    //If statements to determine for ATT Unlimited Choice Plan.
    
    if ((num_phones <= 10) && (num_phones >= 1)){
        
        att_ucp_plan_cost = att_ucp_plan_cost + 60;
        
    }
    if ((num_phones <= 10) && (num_phones >= 2)){
        
        att_ucp_plan_cost = att_ucp_plan_cost +115;
       
    }
    if ((num_phones <= 10) && (num_phones > 2)){
        
        att_ucp_plan_cost = att_ucp_plan_cost + ((num_phones - 2) * 20);
        
    }
    if ((num_tablets >= 1)){
        
        att_ucp_plan_cost = att_ucp_plan_cost + (num_tablets * 10);
        
    }
    
    //If statements to determine for ATT Family Plans.
    
    if ((data_gb <= 1) && (data_gb != 0)){
        
        att_fp_plan_cost = 30;
        
    }
    if ((data_gb <= 3) && (data_gb > 1)){
        
        att_fp_plan_cost = 40;
        
    }
    if ((data_gb <= 6) && (data_gb > 3)){
        
        att_fp_plan_cost = 60;
        
    }
    if ((data_gb <= 10) && (data_gb > 6)){
        
        att_fp_plan_cost = 80;
        
    }
    if ((data_gb <= 16) && (data_gb > 10)){
        
        att_fp_plan_cost = 90;
        
    }
    if ((data_gb <= 25) && (data_gb > 16)){
        
        att_fp_plan_cost = 110;
        
    }
    if ((num_phones >= 1) || (num_tablets >= 1)){
        
        att_fp_plan_cost = att_fp_plan_cost + (num_phones * 20) + (num_tablets * 10);
        
    }
    
    //If statements to determine for Verizon Unlimited.
    
    if ((num_phones >= 1)){
        
        ver_un_plan_cost = ver_un_plan_cost + 80;
        ver_un_plan_cost = ver_un_plan_cost + (num_phones * 20) + (num_tablets *10);
        
    }
    if ((num_phones > 1)){
        
        ver_un_plan_cost = ver_un_plan_cost + 110;
        
    }

    //If statements to determine for Sprint Unlimited.
    
    if ((num_phones >= 1)){
        
        spr_un_plan_cost = spr_un_plan_cost + 60;
        
    }
    if ((num_phones >= 2)){
        
        spr_un_plan_cost = spr_un_plan_cost + 40;
        
    }
    if ((num_phones > 2)){
        
        spr_un_plan_cost = spr_un_plan_cost + ((num_phones - 2) * 30);
        
    }
    
    //If statements to determine for Sprint 2GB Plan.
    
    if ((data_gb <= 2) && (num_phones >= 1)){
        
        spr_two_plan_cost = num_phones * 40;
        
    }
    
    //If statement for no phone.
    
    if (num_phones == 0){
        
        cout << "You have no phone. You do not require a phone plan." << endl << endl;
        
    }
    
    //To print an itemized list of all the plans with the cost that would be associated based on user inputs
    
    cout << "The costs for all the plans with your requirements would be: " << endl << endl << endl;
    cout << "ATT Unlimited Plus Plan: $" << att_upp_plan_cost <<" per month" << endl << endl;
    cout << "ATT Unlimited Choice Plan: $" << att_ucp_plan_cost << " per month" << endl << endl;
    cout << "ATT Family Plan: $" << att_fp_plan_cost << " per month" << endl << endl;
    cout << "Verison Unlimited Plan: $" << ver_un_plan_cost << " per month" << endl << endl;
    cout << "Sprint Unlimited Plan: $" << spr_un_plan_cost << " per month" << endl << endl;
    
    //To only print to value of the plan if it is not equal to zero.
    if (spr_two_plan_cost !=0 ){
       
        cout << "Sprint 2GB Plan: $" << spr_two_plan_cost << " per month" << endl << endl;
    }
    
    return 0;
    
}

/*

TEST 1:
WELCOME TO YOUR PERSONALIZED VALUE DATA PLAN!

Please enter the number of phones that will be in this plan: 

2

Please enter the number of tablets that will be in this plan: 

0

Please enter the amount of data you wish to have on this plan: 

5

The costs for all the plans with your requirements would be: 


ATT Unlimited Plus Plan: $235 per month

ATT Unlimited Choice Plan: $175 per month

ATT Family Plan: $100 per month

Verison Unlimited Plan: $230 per month

Sprint Unlimited Plan: $100 per month


TEST 2:
WELCOME TO YOUR PERSONALIZED VALUE DATA PLAN!

Please enter the number of phones that will be in this plan: 

3

Please enter the number of tablets that will be in this plan: 

1

Please enter the amount of data you wish to have on this plan: 

15

The costs for all the plans with your requirements would be: 


ATT Unlimited Plus Plan: $265 per month

ATT Unlimited Choice Plan: $205 per month

ATT Family Plan: $160 per month

Verison Unlimited Plan: $260 per month

Sprint Unlimited Plan: $130 per month

TEST 3:
WELCOME TO YOUR PERSONALIZED VALUE DATA PLAN!

Please enter the number of phones that will be in this plan: 

1

Please enter the number of tablets that will be in this plan: 

0

Please enter the amount of data you wish to have on this plan: 

0

The costs for all the plans with your requirements would be: 


ATT Unlimited Plus Plan: $90 per month

ATT Unlimited Choice Plan: $60 per month

ATT Family Plan: $20 per month

Verison Unlimited Plan: $100 per month

Sprint Unlimited Plan: $60 per month

Sprint 2GB Plan: $40 per month
*/