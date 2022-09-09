/*
Henry, Forrest Frederick
623006800
CSCE 206, Section 508
Assignment #11, Question 1: Concatenate without using '+' operator
This program takes two strings entered by the user and concatenates 
them without using the '+' operator, creating a third array in the process.
The third array is dynamically allocated, with a whitespace in between the 
two user defined string. The output is the two strings and the combined result.
Take care to delete the allocated memory once the program is finished!
The user defined strings are c++, and the output is C-style 
*/

#include <iostream>
#include <string>
using namespace std;

int main(){
	
	//Get the user-defined string
	string s1, s2;
	cout << "Enter the first string: \n";
	getline(cin,s1);
	cout << "Enter the second string: \n";
	getline(cin,s2);
	
	//Get size of the strings
	int size1 = s1.length();
	int size2 = s2.length();
	
	//Convert C++ strings into C-strings (and pointers)	
	const char* ps1 = s1.c_str();
	const char* ps2 = s2.c_str();
		
    //declare new array and new size
    int size3 = size1 + size2 + 1;
    //char s3[size3];
    char* s3 = new char[size3];
	
    //loop for first half of the array
    for(int i = 0; i < size1; i++){
        *(s3 + i) = *(ps1 + i);
    }
    
    //assign midpoint as whitespace
    s3[size1] = ' ';
    
    //loop for second hald of the array
    //resumes after whitespace
    int resumer = size1 + 1;
    for(int j = 0; j < size2; j++){
        *(s3 + resumer + j) = *(ps2 + j);
    }
    
    //print out all arrays    
    cout << "Strings entered by the user: \n";
    cout << "First string: " << s1 << endl;
    cout << "Second string: " << s2 << endl;
    
    cout << "Third string: ";
    for(int k = 0; k < size3; k++){
        cout << *(s3 + k);
    }
    
    delete [] s3;
    return 0;
}