#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
using namespace std;

/*  Kelsey Dimmick
    10/31/2017
    A class to store integers to then find the min/max/sum/even/odd/search/sort.
*/

//Class for an array.
class ArrayTools {
    
    private:
//Declaring private variables to find the various values for the array.
        int array[];
        int NUM_ELEMENTS;
        int min_val_ = 0;
        int max_val_ = 0;
        int sum_val_ = 0;
        int sort_val_ = 0;
        int search_val_ = 0;

    public:
//Default constructor set the array for use in the class.
        ArrayTools(int myArray[], int SIZE){
            NUM_ELEMENTS = SIZE;
            for (int i = 0; i < NUM_ELEMENTS; ++i){
                array[i] = myArray[i];
            }
        }
//A function to find the minimum value in the array.
        int Find_min(int i, int size){
            min_val_ = array[i];
            
            for (i; i < size; ++i){
                if (array[i] < min_val_) {
                    min_val_ = array[i];
                }
            }
            
            return min_val_;
        }
//A function to find the maximum value in the array.
        int Find_max(int i, int size){
            max_val_ = array[i];
            
            for (i; i < size; ++i){
                if (array[i] > max_val_){
                    max_val_ = array[i];
                }
            }
            
            return max_val_;
        }
//A function to find the sum of the values in the array.
        int Find_sum(){
            for (int i = 0; i < NUM_ELEMENTS; ++i){
                sum_val_ = sum_val_ + array[i];
            }
            return sum_val_;
        }
//A function to find the inputted value for the array.
        int Search(int find){
            for (int i = 0; i < NUM_ELEMENTS; ++i){
                if (array[i] == find){
                    search_val_ = array[i];
                }
            }
            return search_val_;
        }
        int Is_sorted(){
            sort_val_ = array[0];
            for (int i = 0; i < NUM_ELEMENTS; ++i){
                if (sort_val_ > array[i]){
                    array[i] = sort_val_;
                }
            }
            return array[NUM_ELEMENTS];
        }
         void Print(){
            for (int i = 0; i < NUM_ELEMENTS; ++i) {
                cout << array[i] << endl;
            }
            
            return;
        }
};

int main()
{
    const int SIZE = 10;
    int myArray[SIZE];
    
    for(int i = 0; i<SIZE;i++){
        cin>>myArray[i];
    }
    ArrayTools a(myArray,SIZE);
    
    a.Print();
    cout << "Min: " << a.Find_min(0, 4)<<endl;
    cout << "Max: " << a.Find_max(5, 10)<<endl;
    cout << "Sum = " << a.Find_sum()<<endl;
    cout << "Search 10" << a.Search(10)<<endl;
    cout << "Sorted? " << a.Is_sorted()<<endl;
    
    return 0;
}