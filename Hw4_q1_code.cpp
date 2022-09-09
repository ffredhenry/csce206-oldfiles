/*
Henry, Forrest Frederick
623006800
CSCE 206 Section 508
Assignment 04, Question #1: What's the Magic Number?
This program generates a random number from 1 to 50, and allows the user to guess the value
with unlimited attempts. The program does not accept numbers outside the range of possible 
choices, including negative numbers. The program specifies whether or not the user is getting 
close to the correct number by outputting "higher" or "lower" to the console
*/

#include <iostream>
#include <cstdlib> //rand and srand functions
#include <ctime> //time function
using namespace std;

int main() {
	//seeding and declaring number generator
	unsigned seed = time(0);
	bool ender = true;
	srand(seed);
	int numActual = (1 + rand() % 50); //formats random number to range
	int numGuess;
	
	cout << "\nI have a number from 1 to 50.\n";
	cout << "Guess which one it is...\n";
	cout << "\nENTER YOUR GUESS BELOW: \n";
				//cout << numActual << endl; //test rig
		do {
				cin >> numGuess;	
					if(numGuess > 50 || numGuess <= 0){
						cout << "\nOnly positive numbers in range.\n";
						cout << "1 to 50 are allowed.\n";
					}
					else if(numGuess < numActual){
						cout << "\nToo low! You need to increase your estimate.\n";
					}
					else if(numGuess > numActual){
						cout << "\nToo high! You need to decrease your estimate.\n";
					}
					else if(numGuess == numActual){
						cout << "\nYou are a genius Aggie!!!\n";
						ender = false;
					}
					else {
						cout << "\nFollow the instructions.\n";
						cout << "You are definitely NOT a genius Aggie!\n";
					}
		} while (ender);
	return 0;
}