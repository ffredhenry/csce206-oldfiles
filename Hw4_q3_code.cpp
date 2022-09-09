/*
Henry, Forrest Frederick
623006800
CSCE 206 Section 508
Assignment 04, Question #3: 3n+1
This program takes a user-defined (greater than one) and using loop 
statements, returns one plus its triple if odd or its half if even.
This process is repeated until the number is equal to one, printing
to the console the amount of loops taken to reduce it to that amount.
*/

#include <iostream>

using namespace std;

int main(){
	
	bool sntl = true; //sentinel for ending loop
	int loopr = 0; //this stores the amount of loops taken
	int numInput; //user input is stored here
	
	do{//Ask user for input number >1
		cout << "Enter a positive number: ";
		cin >> numInput;
	}while(numInput <=1);
	
	do{//Does 3n+1 / halving until numInput ==1
		if(numInput == 1){
			cout << "It took " << loopr << " loops";
			cout << " to reach 1.\n";
			sntl = false;
		}
		else if(numInput % 2 == 0){
			numInput = numInput / 2;
			loopr++;
		}
		else{
			numInput = (3 * numInput) + 1;
			loopr++;
		}
	}while(sntl);
	
	return 0;
}
