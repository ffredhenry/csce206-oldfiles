/*
Henry, Forrest Frederick
623006800
CSCE 206 Section 508
Assignment #5, Question 2: Calculator-
This program performs simple addition, subtraction, multiplication
and division operations on user-defined numbers through the use of
function statements. The user selects through a list of options and 
passes the user inputs to the selected function. It also checks for 
zero as the second input in division operations.
*/

#include <iostream>
#include <iomanip>
using namespace std;

//defining operation functions
double addition(double num1, double num2){
	//adds the inputs together
	return num1 + num2;
}
double subtraction(double num1, double num2){
	//subtracts the 2nd from the 1st input
	return num1 - num2;
}
double multiplication(double num1, double num2){
	//multiplies the inputs
	return num1 * num2;
}
double division(double num1, double num2){
	//divides the 1st by the second
	return num1 / num2;
}

int main(){
	//D&A for int main
	bool sntl = true; //sentinel
	int opt; //user choice
	double num1, num2, oput; //i/o for functions
	
	do{
		//asks for user selection:
		cout << "\nChoose an operation: \n";
		cout << "1.\tAddition\n";
		cout << "2.\tSubtraction\n";
		cout << "3.\tMultiplication\n";
		cout << "4.\tDivision\n";
		
		cin >> opt;
	
	//selector loop
	
		if(opt == 1){
			cout << "Your choice?" << opt << "\n";
			cout << "Enter the first number? ";
			cin >> num1;
			cout << "Enter the second number? ";
			cin >> num2;
			oput = addition(num1,num2);
			cout << "\n" << num1 << " plus " << num2 << " is " << oput << "\n";
			sntl = false;
		}
		else if(opt == 2){
			cout << "Your choice?" << opt << "\n";
			cout << "Enter the first number? ";
			cin >> num1;
			cout << "Enter the second number? ";
			cin >> num2;
			oput = subtraction(num1,num2);
			cout << "\n" << num1 << " minus " << num2 << " is " << oput << "\n";
			sntl = false;
		}
		else if(opt == 3){
			cout << "Your choice?" << opt << "\n";
			cout << "Enter the first number? ";
			cin >> num1;
			cout << "Enter the second number? ";
			cin >> num2;
			oput = multiplication(num1,num2);
			cout << "\n" << num1 << " multiplied by " << num2 << " is " << oput << "\n";
			sntl = false;
		}
		else if(opt == 4){
			bool noZero = true;//sentinel for divide by zero loop
			cout << "Your choice?" << opt << "\n";
			cout << "Enter the first number? ";
			cin >> num1;
			cout << "Enter the second number? ";
			cin >> num2;
				do{
					if(num2 == 0){
						cout << "ERROR: input for divisor not allowed.\n";
						cout << "Enter the second number? ";
						cin >> num2;
					}
					else{
						oput = division(num1,num2);
						cout << "\n" << num1 << " divided by " << num2 << " is " << oput << "\n";
						noZero = false;
					}
				}while(noZero);
			sntl = false;
		}
		else{
			cout << "Please make a valid choice.\n";
		}
	}while(sntl);
return 0;	
}

/*
do{
	if(num2 == 0){
		cout << "ERROR: input for divisor not allowed.\n"
		cout << "Enter another value: ";
		cin >> num2;
	}
	else{
		oput = division(num1,num2);
		cout << "\n" << num1 << " divided by " << num2 << " is " << oput << "\n";
		noZero = false;
	}
}while(noZero);

*/	