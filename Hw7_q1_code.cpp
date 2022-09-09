/*
Henry, Forrest Frederick
623006800
CSCE 206, Section 508
Assignment 7 Question #1: Exam Stats
This program makes use of arrays to calculate metrics (such as average, min/max)
about two sample sets of test scores for a computer science class. In addition, it
also combines the two arrays to get overall metrics for the class. 
The catch in this is that the second set of test scores are user-defined and saved 
to the second array, so results will vary based on what data is entered during 
execution.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int sumArray(int[],int);

int main(){
	int i; //iterator variable
	const int SIZE_A = 15,
			  SIZE_B = 8;
	int formA[SIZE_A] = {52,86,95,23,78,89,52,81,97,45,35,84,75,94,26}, formB[SIZE_B];
	int sumA, sumB; //totals for each array, used to find averages
	int maxA = formA[0], minA = formA[0];//extrema values initialized to 
	int max, min; //overall extrema values, assigned via comparision
		
	//user input loop for array B scores
	cout << "Enter scores for exam form B?\n";
	for(int i = 0; i < SIZE_B; i++){
		cout << "Score #" << (i+1) << ": ";
		cin >> formB[i];
		
		//input validation
		if(formB[i] <= 10){
			i--;
		}
	}
	int maxB = formB[0], minB = formB[0];//initialized here to prevent junk values
	
	//output loops for array A scores
	cout << "Version A scores: ";
	for(i = 0; i < SIZE_A; i++){
		cout << formA[i] << "  ";
	}
	cout << "\n";
	//output loops for array B scores
	cout << "Version B scores: ";
	for(i = 0; i < SIZE_B; i++){
		cout << formB[i] << "  ";
	}
	cout << "\n";
	
	//find the extrema for array A (max and min)
	for(i = 0; i < SIZE_A; i++){
		if(formA[i] > maxA){
			maxA = formA[i];
		}
		else if(formA[i] < minA){
			minA = formA[i];
		}
	}
	
	//find the extrema for array B (max and min)
	for(i = 0; i < SIZE_B; i++){
		if(formB[i] > maxB){
			maxB = formB[i];
		}
		else if(formB[i] < minB){
			minB = formB[i];
		}
	}
	
	//single-line conditionals find overall extrema
	(maxA > maxB ? max = maxA : max = maxB);
	(minA < minB ? min = minA : min = minB);
	
	//function calling and individual array ops
	sumA = sumArray(formA,SIZE_A);
	sumB = sumArray(formB,SIZE_B);
	
	//print to console portion
	cout << "\nVersion A mean score: ";
	cout << (sumA / SIZE_A) << "\n";
	cout << "\nVersion B mean score: ";
	cout << (sumB / SIZE_B)<< "\n";
	cout << "\nMean score, when both version A and B scores are combined: ";
	cout << ((sumA + sumB)/(SIZE_A+SIZE_B)) << "\n";
	cout << "\nLeast score, when both version A and B scores are combined: ";
	cout << min << "\n";
	cout << "\nHighest score, when both version A and B scores are combined: ";
	cout << max << "\n";
	
	return 0;
}

//function for summing arrays
int sumArray(int a[],int b){
	int sumA = 0;
	for(int i = 0; i < b; i++){
		sumA += a[i];
	}
	return sumA;
}