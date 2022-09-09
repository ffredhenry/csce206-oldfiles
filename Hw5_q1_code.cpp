/*
Henry, Forrest Frederick
623006800
CSCE 206 Section 508
Assignment #5, Question 1: Random Number Generator-
This program takes two user inputs for a minimum and maximum, 
and generates a random number in between the two integers. 
In addition, it also checks that the second integer is higher than
the first.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int printRandomNumber(int a,int b){//random number generator with twin parameters
	bool rndobool = true;
	srand(time(0));//seed to current pc time
	do{
		int rndo = rand() % b + 1; //modulus by the upper bound value
		if(rndo > a && rndo < b){
			return rndo;
			rndobool = false;
		}
	}while(rndobool);//sentinel, loops if true and stores in return if false
}

int main(){
	int limitH, limitL, rando;
	
	cout << "\nEnter the lower number? ";
	cin >> limitL;
	do{
	cout << "Enter the higher number? ";
	cin >> limitH;
	}while(limitH < (limitL + 2));//no sentinel here, just direct comparison 
	rando = printRandomNumber(limitL, limitH);//call
	cout << "\nYour random number is " << rando;
	
	return 0;
}

