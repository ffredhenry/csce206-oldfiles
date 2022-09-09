/*
Henry, Forrest Frederick
623006800
CSCE 206 508
Assignment 10, Question #1: swap() by passing pointers
This function takes only pointers for two integer values as parameters
and swaps their contents without creating any additional variables or 
pointers. The result is displayed in the main function.
*/

#include <iostream>
using namespace std;

void swap(int*, int*);

int main(){
	
    //---variable and pointer D&A
    int* n1 = new int;
    int* n2 = new int;
    
    //get the user values
    cout << "Enter n1: ";
    cin >> *n1;
    cout << "Enter n2: ";
    cin >> *n2;
    
    //function call and printout results
    swap(n1,n2);
    cout << "After swapping, n1=" << *n1 << " and n2=" << *n2 << "\n";
    
	return 0;
}

void swap(int* a, int* b){
	//math trick for switching up values
    *a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}