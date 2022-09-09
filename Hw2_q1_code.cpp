/* 
Henry, Forrest Frederick
623006800
CSCE 206 Section 508
Assignment 2, Question #1: Card Shuffling
This program draws 2 cards from a virtual deck of 52 and prints the result
to the console. It utilizes the srand function with a seed value equivalent
to the current system time. In between draws, the program waits for the user
to press the 'ENTER' key to execute the final draw as well as return 0 to the 
system.
*/

#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int main()
{
	cout << "Shuffling deck...\n";
	cout << "Press ENTER when ready...\n";
	
	srand(time(0));
	cout << 1 + (rand() % 52) << endl;

	getchar();
	
	cout << "Shuffling deck again...\n";
	cout << "Press ENTER again when ready...\n";
	
	srand(time(0));
	cout << 1 + (rand() % 52) << endl;

	getchar();
	
	return 0;
}