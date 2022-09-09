/*
Henry, Forrest Frederick
623006800
CSCE 206 508
Assignment 10, Question #4: Password Verifier
This program asks the user to generate a password based on 
certain criteria: six characters long, at least one upper and 
one lower-case letter, as well as one digit. Once the user enters
a password that matches the correct criteria, the program verifies it.
*/

#include <iostream>
#include <cstring>
#include <cctype>
#include <string>
using namespace std;
//*******max size*******
const int SIZE = 32;

//*******prototypes*******
bool isLower(char);
bool isUpper(char);
bool isNumber(char);
bool passVerify(char []);

//*******main function*******
int main(){
	bool sntl = true;
	char userPass[SIZE];
	cout << "*******PASSWORD VERIFICATION PROGRAM*******\n\n\n";
	cout << "Enter a password that meets the following criteria:\n"
		 << "1. Minimum length of six characters.\n"
		 << "2. Password contains at least one uppercase letter.\n"
		 << "3. Password contains at least one lowercase letter.\n"
		 << "4. Password contains at least one numerical digit, 0-9.\n";
	
	do{
		cout << "Enter password: ";
		cin.getline(userPass, SIZE);
		sntl = passVerify(userPass);
	}while(sntl);
	
	return 0;
}
//*******detects lowercase letters*******
bool isLower(char a){
	return (a > 96 && a < 123);
}
//*******detects uppercase letters*******
bool isUpper(char a){
	return (a > 64 && a < 91);
}
//*******detects numbers 0-9*******
bool isNumber(char a){
	return (a > 47 && a < 58);
}

bool passVerify(char a[]){
	//*******tot variables track occurences of password criteria*******
	int i = 0, 
		totU = 0, 
		totL = 0, 
		totN = 0;
		
	//*******function loop ends on null terminator*******
	while(a[i] != '\0'){
		if(isUpper(a[i])){
			totU += 1;
		}
		if(isLower(a[i])){
			totL += 1;
		}
		if(isNumber(a[i])){
			totN += 1;
		}
		i++;
	}
    
    //*******criteria*******
    if(totU != 0 && totL != 0 && totN != 0 && i >= 6){
        cout << "Your password has been verified.\n";
        return  0;
    }
    if(i < 6){
        cout << "Your password must be at least six characters long.\n";
    }
    if(totU == 0){
        cout << "Your password must have at least one uppercase character.\n";
    }
    if(totL == 0){
        cout << "Your password must have at least one lowercase character.\n";
    }
    if(totN == 0){
        cout << "Your password must have at least one numerical character.\n";
    }
	
    return 1;
}

/*
 //REWRITE THE CODE!!
	//*******criteria explainer*******
	if(totU == 0){
 cout << "Your password must have at least one upper-case letter.\n";
 pUpperc = false;
	}
	if(totL == 0){
 cout << "Your password must have at least one lower-case letter.\n";
 pLowerc = false;
	}
	if(totN == 0){
 cout << "Your password must have at least one number.\n";
 pNumber = false;
	}
	if(i < 6){
 cout << "Your password must be at least six characters long.\n";
 pLength = false;
	}
	if(pLength && pNumber && pLowerc && pUpperc){
 cout << "Your password has been verified.\n";
 return 0;
	}
 */
