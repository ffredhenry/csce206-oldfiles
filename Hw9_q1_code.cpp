/*
Henry, Forrest Frederick
623006800
CSCE 206 Section 508
Assignment 9, Question #1: Vector Operations
This program takes a user defined set of numbers (input validated such that N >= 10).
It passes the elements of the vector to a printVector() function that prints those
elements in row order. Next, it adds to three of the vector's elements a constant value
whose position is decided by random numbers between 0 and N-1 (the subscripts of the array).
Afterwards, the random number is printed along with its corresponding element, as well as a
new value equivalent to element+10, along with the entire vector (including new element).

The second part creates a separate vector ‘diffVect’ that holds the element-wise absolute differences
between the original vector, numbers, and the reversed vector, ‘revnumbers’ (using reverse vector ops).
Then the original, reverse, and difference vectors are printed to the console.

Finally, the difference vector is trimmed in half through the deletion of the second vector.
This is done through a vector pop function, and the modified vector is printed.
*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

void printVector(vector<int>);
void randomAdder(vector<int>&);
vector<int> reverseVec(vector<int>);
vector<int> diffVect(vector<int>, vector<int>);

int main(){
	
	//D&A
	vector<int> numbers;
	vector<int> numbers2; //reverse of numbers
	vector<int> numbers3; //difference b/w numbers and numbers2
	int elt;
	
	//intializing statements
	cout << "Enter some integers into the numbers set: ";
	cout << "\n(Enter -1 to quit the entry process)\n";
	
	//input loop
	do{
		cin >> elt;
		numbers.push_back (elt);
		//no quitting when the array is too small!
		if(elt == -1 && numbers.size() < 10){
			cout << "You must enter at least 10 elements to quit.\n";
			numbers.pop_back();
		}
	}while(numbers.size() < 10 || (elt != -1));
	
	//trims off the 0 of the vector
	numbers.pop_back();
	cout << "New Vector:\n";
	printVector(numbers);
	randomAdder(numbers);
	cout << "\n\n\nUpdated Vector:\n";
	printVector(numbers);
	
	//reverse numbers and print
	numbers2 = reverseVec(numbers);
	cout << "\n\n\nReversed Vector:\n";
	printVector(numbers2);
	
	//create difference vector and print
	numbers3 = diffVect(numbers, numbers2);
	cout << "\n\n\nDifference Vector:\n";
	printVector(numbers3);
	
	//chopped difference vector and print
	numbers3.resize(numbers3.size()/2);
	cout << "\n\n\nChopped Difference Vector:\n";
	printVector(numbers3);
	return 0;
}

void printVector(vector<int> ref){
	for(int i = 0; i < ref.size(); i++){
		cout << ref[i] << " ";
	}
}

void randomAdder(vector<int>& ref){
	for(int i = 0; i < 3; i++){
		int j = (rand() % ref.size());
		ref[j] += 10;
	}
	//cout << "line 80"; // used for debug
}

vector<int> reverseVec(vector<int>ref){
	vector<int> fer;
	for(int j = (ref.size()-1); j >= 0; j--){
		fer.push_back(ref[j]);
	}
	return fer;
}

vector<int> diffVect(vector<int>ref, vector<int> ref2){
	vector<int> diff;
	for(int i = 0; i < ref.size(); i++){
		diff.push_back(ref[i]-ref2[i]);
	}
	return diff;
}
