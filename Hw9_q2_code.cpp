/*
Henry, Forrest Frederick
623006800
CSCE 206 Section 508
Assignment 09, Question #2
*/

#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

void printArray(int[],int);
void ic_selectionSort(int[],int);
void dc_selectionSort(int[],int);
int binarySearch(int, int[], int);


int main(){
	const int SIZE = 50, SIZE2 = 25;
	int randomNums[SIZE], terminalSum[SIZE2], elt, userVal, p;
	
	//filling randomNums array with values
	for(int i = 0; i < SIZE; i++){
		elt = (rand() % 50) + 1;
		randomNums[i] = elt;
	}
	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	
	//print initial array + ic_sort
	printArray(randomNums,SIZE);
	ic_selectionSort(randomNums,SIZE);
	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	
	//print sorted array
	cout << "\n\n\n"
		 << "Sorting array into increasing order!\n";
	printArray(randomNums,SIZE);
	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	
	//terminalSum creation
	for(int i = 0, j = SIZE; i < 25 && j >= SIZE2; i++, j--){
		terminalSum[i] = randomNums[i] + randomNums[j];
	}
	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	
	//terminalSum printing + dc_sort
	cout << "\n\n\n"
		 << "Terminal sum array has been created!\n";
	printArray(terminalSum,SIZE2);
	dc_selectionSort(terminalSum,SIZE2);
	cout << "\n\n\n";
	printArray(terminalSum,SIZE2);
	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	
	//User input searchValue
	do{
		cout << "\n\n\nPlease enter a value 0-500 to be searched for: ";
		cin >> userVal;
	}while(userVal < 0 || userVal > 500);
	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	
	//binary search for the user value
	p = binarySearch(userVal,terminalSum,SIZE2);
	if(p != -1){
		cout << "Value found at index: "
			 << p << ".\n";
	}
	else{
		cout << "Value not found.\n";
	}
	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	
	//final printing of dc sorted terminalSum array
	cout << "\n\n\n";
	printArray(terminalSum,SIZE2);
	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	
	return 0;
}

void printArray(int a[], int b){
	for(int i = 0; i < b; i++){
		cout << a[i] << " ";
	}
}

void ic_selectionSort(int a[], int b){
	int startScan, minIndex, minValue;
	for(startScan = 0; startScan < (b-1); startScan++){
		minIndex = startScan;
		minValue = a[startScan];
		for(int index = (startScan+1); index < b; index++){
			if(a[index] < minValue){
				minValue = a[index];
				minIndex = index;
			}
		}
		a[minIndex] = a[startScan];
		a[startScan] = minValue;
	}
}

void dc_selectionSort(int a[], int b){
	int startScan, minIndex, minValue;
	for(startScan = 0; startScan < (b-1); startScan++){
		minIndex = startScan;
		minValue = a[startScan];
		for(int index = (startScan+1); index < b; index++){
			if(a[index] > minValue){
				minValue = a[index];
				minIndex = index;
			}
		}
		a[minIndex] = a[startScan];
		a[startScan] = minValue;
	}
}

int binarySearch(int c, int a[], int b){
	bool found = false;
	int indexA, indexB, indexM, position;
	indexA = 0, indexB = (b), position = -1, indexM = (b / 2);
	while(!found && indexM >= 0 && indexM < indexB){
		if(c == a[indexM]){
			position = indexM;
			found = true;
			break;
		}
		else if(c < a[indexM]){
			indexA = indexM;
			indexM += ceil((float)((float)indexB - (float)indexM) / 2.0);
		}
		else if(c > a[indexM]){
			indexB = indexM;
			indexM -= ((indexM - indexA) / 2.0);
		}
	}
	return position;
}

