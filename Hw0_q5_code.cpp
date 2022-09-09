/*
Forrest Henry
CSCE 206-508
HW0-Q5
This program takes user defined variables, calculates them, and prints the results to the console.
*/

#include <iostream>
using namespace std;
int main()
{
	//force, area, and pressure declared as double to handle wide range of inputs
	double force, area, pressure;
	
	//Asks user to input a value for force and assigns it to the variable
	cout << "Please enter a value of the force: \n";
	cin >> force;
	
	//Asks user to input a value for area and assigns it to the variable
	cout << "Please enter a value for the area: \n";
	cin >> area;
	
	//Calculates the pressure
	pressure = force / area;
	
	//Prints result to console
	cout << "force = " << force << endl;
	cout << "area = " << area << endl;
	cout << "pressure = " << force << " / " << area << " = " << pressure << endl;
	
	return 0;
}