/*
Henry, Forrest Frederick
623006800
CSCE 206 Section 508
Assignment 06, Question #2: Chocolate Sale
In this program, the total cost of a chocolate sale is calculated.
The cost of the chocolate is defaulted to 8 dollars, however it is
discounted when the user purchases more than 10 chocolate. It makes 
use of a function to compute the total cost through the input of cost 
and quantity of chocolate.
*/

#include <iostream>
#include <cstdlib>
using namespace std;

void ComputeTotalCost(float a, float b = 8){//a is quantity, b is cost
	cout << "Total cost is $" << a * b << endl;
}

int main(){
	bool sntl = true;
	float chocolatesSold, Cost, pOut;
	do{
		cout << "Enter quantity of chocolates sold? ";
		cin >> chocolatesSold;
		if(chocolatesSold > 10 && chocolatesSold != 7777){
			cout << "Enter the price of the chocolate? $";
			cin >> Cost;
			ComputeTotalCost(chocolatesSold,Cost);
		}
		else if(chocolatesSold >= 0 && chocolatesSold <= 10){
			ComputeTotalCost(chocolatesSold);
		}
		else if(chocolatesSold == 7777){
			cout << "Ending program...\n";
			sntl = false;
		}
		else{}
			
	}while(sntl);
	return 0;
}