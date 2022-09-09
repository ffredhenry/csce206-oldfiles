/*
Henry, Forrest Frederick
623006800
CSCE 206 Section 508
Assignment 06, Question #1: I'm a Reference
This program computes the total cost for the number of software licenses bought.
It uses two user intialized variables that are read by a function to calculate the
total cost of the software license purchase.
*/

#include <iostream>

using namespace std;

void ReadUserInput(float&,float&);

int main(){//main function initialized to zero
	float numlicense = 0, costPerLicense = 0;
	ReadUserInput(numlicense, costPerLicense);
	cout << "\nYou bought " << numlicense << " at $";
	cout << costPerLicense << " each, and the total cost is = $";
	cout << numlicense * costPerLicense;
	return 0;
}

void ReadUserInput(float &a, float &b){//reference function
	cout << "How many licenses did you buy? ";
	cin >> a;
	cout << "What is the cost of each license? ";
	cin >> b;
	
	return;
}