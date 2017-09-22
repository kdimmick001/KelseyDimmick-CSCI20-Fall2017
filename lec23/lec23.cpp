#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

/* Compute Sphere uses the equation to calculate the volume of a sphere based on radius.
   Input: Accepts a single integer for radius.
   Output: None */
void ComputeSphere(int); //int is the parameter for the function ComputeSphere().

void ComputeBox(int, int, int); //int, int, int are three parameters for the function ComputeBox().

void ComputePyramid(int, int); //int, int are two parameters for the function ComputePyramid().

int main()
{
    //initializes and declares the variables used for the functions.
    int length = 1;
    int width = 1;
    int height = 1;

    //putting the previously declared variables in the declared functions.
    ComputeSphere(length); //length is the argument to be computed in the function ComputeSphere().
    ComputeBox(length, width, height); //length, width, height are the arguments to be computed in the function ComputeBox().
    ComputePyramid(length, height); //length, height are the arguments to be computed in the function ComputePyramid().
    
    //getting the input of the variables.
    cin>>length>>width>>height;
    
    ComputeSphere(length); //length is the argument to be computed in the function ComputeSphere().
    ComputeBox(length, width, height); //length, width, height are the arguments to be computed in the function ComputeBox().
    ComputePyramid(length, height); //length, height are the arguments to be computed in the function ComputePyramid().
}
//int is the parameter for the function ComputeSphere().
//This function computes the volume for a sphere with the inputs or length values to output the volume of the sphere.
void ComputeSphere(int l){
    double v = (4.0/3) * 3.14 * (l * l * l);
    cout<<"The volume of a sphere is "<<v<<endl;
}
//int, int, int are three parameters for the function ComputeBox().
//This function computes the volume for a box with the inputs or length, width, and height values to output the volume of the box.
void ComputeBox(int l, int w, int h){
    double v = l * w * h;
    cout<<"The volume of a rectangular box is "<<v<<endl;
}
//int, int are two parameters for the function ComputePyramid().
//This function computes the volume for a pyramid with the inputs or length and height values to output the volume of the pyramid.
void ComputePyramid(int l, int h){
    double v = (1.0/3) * l * h;
    cout<<"The volume of a pyramid is "<<v<<endl;
} 

//Appropriately comment all of the functions.  Make a note to identify the paramters and input.
//Comment the main function as if it was pseudocode.
//   make note of where the functions are called and the arguments.