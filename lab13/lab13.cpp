#include <iostream>
using namespace std;

/*  Kelsey Dimmick
    08/29/2017
    A program to calculate the future U.S. population
    http://www.census.gov/popclock/
*/

int main ()
{   // Calculations done for per year

    // double birth = ((60 * 60 * 24 * 365) / 8);                                            
    // double death = -((60 * 60 * 24 * 365) / 12);               
    // double international_migrant = ((* 60 * 60 * 24 * 365) / 33);
    
    int person_net_gain = ((60 * 60 * 24 * 365) / 12);            
    int current_year = 2017;
    int current_population = 325365189;
    int future_year = 0;
    
    cout << "Enter a future year: ";
    cin >> future_year;
    future_year = future_year - current_year;
    int future_population = ((future_year * person_net_gain) + current_population);
    cout << endl;
    cout << "The population in " << future_year << " years" << " will be: " << future_population << endl;
    
    return 0;

}