/* 
(A) Visually, try to find if there are any errors in code and how many?  #errors= ________
(B) Put up comments next to each of those incorrect statements stating why you feel those are incorrect?
(C) Then, compile the code and observe if your error estimate was right?
(D) If, compile fails, try to debug it on your own and re-compile till it successfully compiles
*/

#include <iostream>
using namespace std; //no semicolon at end of statement
int main()
{
	// variable declarations
	double hours = 40.5;
	double grossPay, payRate = 25.0;
	
	// calculation	
	grossPay = hours * payRate;
	
	// display statements to print the values of the variables
	cout << "Hours: " << hours << endl;
	cout << "Payrate: " << payRate << endl;   // after displaying value stored in payRate, we want to move to newline
	cout << "Your gross pay is $" << grossPay << endl; // misspelled grossPay && arrows are wrong direction 
	
	cout << "You've fixed all the errors" << endl;
	return 0;
}
	
/*
9: no semicolon terminating using namespace statement
13: wrong variable type, if we want to define a number with a decimal point we must use float || double || long double, also no semicolon terminator
20: hours is printed as a string literal rather than an invoked variable
21: new line function has wrong slash, should be \n instead or even just endl
22: grossPay is misspelled during invocation, and the cin arrows are being used on a cout function
24: missing output arrows before the endl function and after the string
*/