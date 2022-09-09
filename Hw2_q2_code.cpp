/*
Henry, Forrest Frederick
623006800
CSCE 206 Section 508
Assignment 2, Question #2: Best Burgers
This program asks for the number of burgers sold and computes the total cost of the purchase.
Depending on the quantity of burgers sold, the program calculates in a discount off the total price.
If an invalid data type is given as an input, it prints an error message to the console.
*/

#include <iostream>
#include <iomanip> //manipulator directive
using namespace std;
int main() 
{
	//variable declaration & assignment (D&A)
	const double BURGPRICE = 9.50; //price set to nine dollars fifty cents
	double discount, tentPrice, finalPrice; //tentPrice is for calculation, final for discount
	unsigned int burgQuant;
	
	//Asks for user input quantity
	cout << "How many burgers did you order today?\n";
	cin >> burgQuant;
	
	cout << fixed << setprecision(2) << endl;//see if this works
	
	//if/elseif/else statement
	//use AND statements to lock input into range
	if (burgQuant >= 0 && burgQuant < 10) //0-10
	{	
		discount = 0.0;//no discount applied
		tentPrice = BURGPRICE * burgQuant;
		finalPrice = tentPrice - (discount * tentPrice);
		cout << "Burgers Ordered: " << burgQuant << "\n";
		cout << "Discount: " << (discount * 100) << " %\n";
		cout << "Total Price: $ " << finalPrice << "\n";
	}
	else if (burgQuant >= 10 && burgQuant < 20)//10-19
	{
		discount = 0.1;//10% discount applied
		tentPrice = BURGPRICE * burgQuant;
		finalPrice = tentPrice - (discount * tentPrice);
		cout << "Burgers Ordered: " << burgQuant << "\n";
		cout << "Discount: " << (discount * 100) << " %\n";
		cout << "Total Price: $ " << finalPrice << "\n";
	}
	else if (burgQuant >= 20 && burgQuant < 50)//20-49
	{
		discount = 0.2;//20% discount applied
		tentPrice = BURGPRICE * burgQuant;
		finalPrice = tentPrice - (discount * tentPrice);
		cout << "Burgers Ordered: " << burgQuant << "\n";
		cout << "Discount: " << (discount * 100) << " %\n";
		cout << "Total Price: $ " << finalPrice << "\n";
	}
	else if (burgQuant >= 50 && burgQuant < 100)//50-99
	{
		discount = 0.4;//40% discount applied
		tentPrice = BURGPRICE * burgQuant;
		finalPrice = tentPrice - (discount * tentPrice);
		cout << "Burgers Ordered: " << burgQuant << "\n";
		cout << "Discount: " << (discount * 100) << " %\n";
		cout << "Total Price: $ " << finalPrice << "\n";
	}
	else if (BURGPRICE == 100 || burgQuant > 100)//100 OR beyond
	{
		discount = 0.6;//60% discount applied
		tentPrice = BURGPRICE * burgQuant;
		finalPrice = tentPrice - (discount * tentPrice);
		cout << "Burgers Ordered: " << burgQuant << "\n";
		cout << "Discount: " << (discount * 100) << " %\n";
		cout << "Total Price: $ " << finalPrice << "\n";
	}
	else //used for catching data entry errors
	{
		cout << "ERROR: Improper Data Type.\n";
		cout << "Please run the program again.\n";
	}
	
	return 0;

}