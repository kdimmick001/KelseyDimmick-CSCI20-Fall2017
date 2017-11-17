#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <fstream>
using namespace std;

/*  Kelsey Dimmick
    11/16/2017
    A program to open a html file to show a student's transcript. 
*/


int main(){
    
    const int ELEMENT_NUM = 20;
    string student_name;
    int num_class;
    int class_units[ELEMENT_NUM];
    char grade[ELEMENT_NUM];
    
    string line;
    ifstream fin;
    ofstream fout;
    
    string first;
    string last;
    
    fin.open("Student.txt");
    fout.open("Student_Transcript.html");
    
  while(!fin.eof()){  
      
    fin >>first>>last;
    cout << "Name: " << first<< " " <<last << endl;
    
    fin >> num_class;
    cout << "Number of classes: " << num_class << endl;
    
        for (int i = 0; i < num_class; ++i) {
            fin >> class_units[i];
            cout << "Units: " << class_units[i] << " ";
            fin >> grade[i];
            cout << "Grade: " << grade[i] << endl;
        }
        char next;
//        fin.ignore();
        //getline(fin, line);
        //fin.ignore(1, '\n');
        //fin.ignore(1,'\n'); 
//        while (next != '\n'){
 //           getline()
  //      }
 // fin>>next;
        
}
   
//fout << 
//<!DOCTYPE html>
//<html>
//<head>
//<title>Transcript</title>
//</head>
//<body>

//<h1>x Transcript</h1>
//<h2> ------------------------ </h2>
//<p>This semester's GPA: y</p>
//<p>Overall GPA: z</p>

//</body>
//</html>

    
    //while(!fin.eof()) {
        
        //getline(fin, line);
        //fout<<line<<endl;
        
    //}
   
   //fout << "Transcript";
    
    fin.close();
    fout.close();
    
    return 0;
}