/*
Henry, Forrest Frederick
623006800
CSCE 206 Section 508
Assignment #1, Question 3: Shoe Store
This program takes a user input for the quantities of shoes and socks sold, and then prints to the console
a report listing the total revenue from each , as well as the quantity of each item sold. The numbers on the 
output are all aligned with each, and dollar amounts include cents
*/

#include <iostream>
#include <iomanip>
using namespace std;
	
int main()
{
	//variable D&A for the unit prices, quantities, and revenue of socks and shoes 
	double priceShoes, priceSocks, revShoes, revSocks, revTotal;
	int quantShoes, quantSocks;
	
	priceShoes = 49.95;
	priceSocks = 13.75;
	
	//Asks user to input the quantity of units sold
	cout << "Please enter the quantity of shoes sold: \n";
	cin >> quantShoes;
	cout << "Please enter the quantity of socks sold: \n";
	cin >> quantSocks;
	
	//Calculates the revenue from each and also sum
	revShoes = quantShoes * priceShoes;
	revSocks = quantSocks * priceSocks;
	revTotal = revShoes + revSocks;
	
	//prints to console the quantities and revenues from sold goods
	cout << "\nSales Report\n";
	cout << "------------\n";
	cout << "Shoes sold: " << setw(12) << quantShoes << endl;
	cout << "Socks sold: " << setw(12) << quantSocks << endl;
	cout << setprecision(2) << fixed; //fixed and setprecision manipulators used to give dollars and cents $xxx.xx
	cout << "Revenue from shoes: " << setw(2) << "$" << revShoes << endl;
	cout << "Revenue from socks: " << setw(2) << "$" << revSocks << endl;
	cout << "Total revenue: " << setw(7) << "$" << revTotal << endl;
	
	return 0;
}

	