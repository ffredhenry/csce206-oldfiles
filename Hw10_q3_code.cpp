#include <iostream>
#include <algorithm>
#include <cctype>
#include <string>
using namespace std;

//---constant size---//
const int SIZE = 100;

//---prototype function---//
void grammarFix(char*);

//---main function---//
int main(){
	
	//---get the user's string---//
	int i = 0;
	char* usrString = new char[SIZE];
	cout << "Enter a sentence of no more than " 
		 << (SIZE - 1) << " characters:\n";
	cout << "-->";
	cin.getline(usrString, SIZE);
	
	//---print out the original string---//
	cout << "\n\nOriginal String:\n";
	while(*(usrString + i) != '\0'){
		cout << *(usrString + i);
		i++;
	}
	
	//---function call---//
	grammarFix(usrString);
	
	//---print out modified string---//
	int k = 0;
	cout << "\n\nCorrected String:\n";
	while(*(usrString + k)!='\0'){
		cout << *(usrString + k);
		k++;
	}
	
	return 0;
}

//---function header & definition---//
void grammarFix(char* a){
	int j = 2; //iterator set within bounds
	*a = toupper(*a); //capitalizes first letter, regardless
	
	//---actual algorithm---//
	while(*(a + j) != '\0'){
		if(*(a+(j-2)) == '.' && *(a+(j-1))==' ' && islower(*(a+j))){
			*(a+j) = toupper(*(a+j));
		}
	j++;
	}
}

