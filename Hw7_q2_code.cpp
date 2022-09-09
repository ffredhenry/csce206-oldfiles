/*
Henry, Forrest Frederick
623006800
CSCE 206 Section 508
Assignment 7, Question #2: Check Palindrome
This program uses an boolean function to check whether
or not a series of characters (in an array) is a palindrome.
The size of the array is defined by the user in the main function.
*/

#include <iostream>

using namespace std;

bool czechPalindrome(char[],int);

int main(){
	int userSize;
	//prevents invalid entries for size
	while(userSize <= 0){
		cout << "How large do you want your array to be? ";
		cin >> userSize;
	}
	//declared here to prevent compilation errors
	char userArray[userSize];
	
	for(int i = 0; i < userSize; i++){
		cout << "Enter a character for element " << (i+1) << ": ";
		cin >> userArray[i];
	}
	
	//assign function operation to a boolean, literally
	bool ean = czechPalindrome(userArray,userSize);
	
	//takes function result and prints out string and palindrome status
	if(ean){
		cout << "Your array, '";
		for(int i = 0; i < userSize; i++){
			cout << userArray[i];
		}
		cout << "', is a palindrome.";
	}
	else{
		cout << "Your array, '";
		for(int i = 0; i < userSize; i++){
			cout << userArray[i];
		}
		cout << "', is not a palindrome.";
	}

	return 0;
}





bool czechPalindrome(char a[], int size){

	int i = 0; //assigned to first element of the array
	int j = (size-1); //assigned to last element of array
	int k = (size/2); //midpoint of array size
	bool flag = true; //flag value

	do{
		if(a[i] != a[j]){
			flag = false;
		}
		i++; j--;
	}while(i <= k && j >= k && flag);

	if(flag){
		return 1;
	}
	else{
		return 0;
	}	

}	
