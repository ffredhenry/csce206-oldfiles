/*
Henry, Forrest Frederick
623006800
CSCE 206 Section 508
Assignment #5, Question 3: Prime Number-
This program prints all the prime numbers in a range defined by the user.
It uses a function to check numbers within the range for being prime, and
prints passing numbers to the console.
*/

#include <iostream>
#include <cmath>
using namespace std;
int isPrime(int num);//prototype

int main(){
	//variable D&A
	int lB, uB;
	
	//i/o exchange for upper and lower bounds on program
	cout << "\nEnter lower limit? ";
	cin >> lB;
	cout << "Enter higher limit? ";
	cin >> uB;
	cout << "List of prime numbers in the above range is: ";
	
	//looping print-out checks primes throughout the input range
	for(int i = lB; i <= uB; i++){
		int putOut = isPrime(i);
		if(putOut == 0){
			cout << i << "  ";
		}
	}
	return 0;
}

int isPrime(int num){
	int i, sntl = 0;
	for(i = 2; i <= sqrt(num); i++){
		if(num % i == 0){//checks if number is prime, sets sentinel to 1 when composite
			sntl = 1;
			break;
		}
	}
	return sntl;//sends signal whether input is prime or composite
}