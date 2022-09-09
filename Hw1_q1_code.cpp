/*
Henry, Forrest Frederick
623006800
CSCE 206 Section 508
Assignment #1, Question 1: Distance Conversion
The objective of this program is to take a user input (in miles) and ouput it in kilometers via conversion
factor, and also do a reverse of that operation (kilometers -> miles) in the same format.
*/

# include <iostream>
using namespace std;
int main()
{
	//variable declaration
	double miles;
	double kilometers;
	
	//variable assignment via user input
	cout << "*DISTANCE CONVERSION*" << endl;
	cout << "Please enter a distance in miles: " << endl;
	cin >> miles;
	
	//variable conversion (miles -> kilometers)
	kilometers = miles * 1.61;
	
	//converted variable output
	cout << miles << " miles is equivalent to " << kilometers << " kilometers." << endl;
	
	//reverse variable assignment 
	cout << "Please enter a distance in kilometers: " << endl;
	cin >> kilometers;
	
	//reverse variable conversion (kilometers -> miles)
	miles = kilometers / 1.61;
	
	//reverse converted variable output
	cout << kilometers << " kilometers is equivalent to " << miles << " miles." << endl;
	
	return 0;
}