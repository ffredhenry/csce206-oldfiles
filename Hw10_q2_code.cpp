/*
Henry, Forrest Frederick
623006800
CSCE 206 508
Assignment 10, Question #2: Array shifter using pointers
This program has a function that takes an array and its size as arguments,
defined in the main function by the user. This program shifts all the elements 
of the array one over (elt zero becomes elt one) using only pointer notation.
The modified element is displayed alongside the original in the main function.
*/

#include <iostream>
using namespace std;

//dynamically create an array that grows with user definition

/*
cin >> size

int* iptr1 = new int[size];

--fill up array from here

int* iptr2 = new int [size+1];


delete[] iptr1;
delete[] iptr2;

*/

int main(){
	
	//------variables------
	int* iptr1;
	int* iptr2;
	int size;
	
	//------user defined size for array + DMA
	cout << "Enter the size of the array: ";
	cin >> size;
	iptr1 = new int[size];

	//------input loop for first DMA array------
	for(int i = 0; i < size; i++){
		cout << "Enter value for element #" << (i+1) << ": ";
		cin >> *(iptr1 + i);
	}
    
    //-----output loop for first DMA array------
	cout << "\n\nOriginal Array: ";
    for(int i = 0; i < size; i++){
        cout << *(iptr1 + i) << " ";
    }
	
	//------shifted array definition and element assignment------
    iptr2 = new int[size+1];
    *(iptr2) = 0; //initalize first element
    for(int i = 1; i <= size; i++){
        //i is set one elt ahead, so original is set one back
        *(iptr2 + i) = *(iptr1 + (i-1));
    }
    
    //------print shifted array------
    cout << "\n\nShifted Array: ";
    for(int i = 0; i <= size; i++){
        cout << *(iptr2 + i) << " ";
    }
	return 0;
}
