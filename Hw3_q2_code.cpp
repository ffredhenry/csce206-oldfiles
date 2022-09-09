/*
Henry, Forrest Frederick
623006800
CSCE 206 Section 508
Assignment 3, Question #2: Geometry Calculator
This program creates a menu (via switch statements) that allows the user to select a calculation from these options:
(1): Calculation of a Circle's Area
(2): Calculation of a Rectangle's Area
(3): Calculation of a Triangle's area
Or alternatively, quit the program entirely. The program will continue to loop if the 
user enters invalid numbers such as negaitves or those outside the values on the switch menu
*/

#include <iostream>

using namespace std;

int main() {
	
	bool ender; //terminates the do-while loop when true
	
	do {
	int select; //stores user input
	const int AREA_CIRC = 1, //options for switch statement
			  AREA_RECT = 2,
			  AREA_TRIA = 3,
			  PROG_QUIT = 4;
	
	cout << "\nArea Calculator Program\n";
	cout << "~~~~~~~~~~~~~~~~~~~~~~~\n";
	cout << "Please make a selection: \n";
	cout << "Enter 1 to calculate the area of a circle.\n";
	cout << "Enter 2 to calculate the area of a rectangle.\n";
	cout << "Enter 3 to calculate the are of a triangle.\n";
	cout << "Enter 4 to quit the program\n";
	cin >> select;
	
	
		ender = false; //default case causes loop, otherwise program ends
		
		switch (select) {
			
			case AREA_CIRC: {
				double radius;
				double areaCirc;
				const double PI = 3.14159;				
				cout << "You selected the Circle Area Calculator!\n";
				
				do { //loops for negative inputs
				cout << "Please enter a positive value for the circle's radius: \n";
				cin >> radius;
				
					if (radius >= 0.0f) { //checks for negative values
						areaCirc = PI * (radius * radius);
						cout << "The area of your circle is: \n";
						cout << areaCirc << endl;
					}
					
				} while (radius < 0.0f);
			} break;
			
			case AREA_RECT: {
				double length, width, areaRect;
				cout << "You selected the Rectangle Area Calculator!\n";
				
				do { //loops for negative length and/or width values 
					cout << "Please enter positive values for the \n";
					cout << "rectangle's length and width (in that order): \n";
					cin >> length >> width;
						
						if (length >= 0.0f && width >= 0.0f) {
							areaRect = length * width;
							cout << "The area of your rectangle is: \n";
							cout << areaRect << endl;
						}
				} while (length < 0.0f || width < 0.0f); 
			} break;
			
			case AREA_TRIA: {
				double base, height, areaTria;
				cout << "You selected the Triangle Area Calculator!\n";
				
				do {
					cout << "Please enter positive values for the \n";
					cout << "triangle's base and height (in that order): \n";
					cin >> base >> height;
						
						if (base >= 0.0f && height >= 0.0f) {
							areaTria = 0.5f * base * height;
							cout << "The area of your triangle is: \n";
							cout << areaTria << endl;
						}
				} while (base < 0.0f || height < 0.0f);
			} break;
			
			case PROG_QUIT:{
				cout << "You opted to quit the program.\n";
				cout << "Terminating program...\n";
			} break;
			
			default: {
				cout << "ERROR: Invalid input.\n";
				cout << "Please try again.\n";
				ender = true;
			} break;
		}
		
	} while (ender);
	
	return 0;
}
