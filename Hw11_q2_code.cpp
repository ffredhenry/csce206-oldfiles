/*
Henry, Forrest Frederick
623006800
CSCE 206, Section 508
Assignment #11, Question 2: Student Record using Structures
The program has a structure called 'StudentRecord' that stores several
types of information:

stdName(string), stdUIN(int), stdMajor(string), stdYear(int), stdTotalCredits(int), stdCreditsCompleted(int)

The main function queries and gets all the above values from the user.
In addition, there is another function that takes the parameters stdTotalCredits and
stdCreditsCompleted, and assuming the user completes 15 credits per semester, the 
program returns the number of semesters remaining before the student graduates.

The output format is:

Student Record
Name:
UIN:
Major:
Class: 
Total Credit:
Total Credits Completed:

Number of semesters remaining before graduation:
*/

#include <iostream>
#include <string>
using namespace std;

//global definition of structure
struct StudentRecord{
    string stdName, stdMajor;
    int stdUIN, stdYear, stdCreditsCompleted, stdTotalCredits;
};

//prototype of function
int graduationDate(int,int);

//main function
int main(){
    
    //D&A
    int semestersRemaining;
    StudentRecord aggieStudent;
    
    //Get user information
    cout << "Enter your name: ";
    getline(cin,aggieStudent.stdName);
    
    cout << "Enter your UIN: ";
    cin >> aggieStudent.stdUIN;
    
    cout << "Enter your Major: ";
    cin.ignore();
    getline(cin,aggieStudent.stdMajor);
    
    cout << "Enter your graduating class: ";
    cin >> aggieStudent.stdYear;
    
    cout << "Enter your major's needed credit hours(#): ";
    cin >> aggieStudent.stdTotalCredits;
    
    cout << "Enter your of completed credit hours(#): ";
    cin >> aggieStudent.stdCreditsCompleted;
    
    //get semesters remaining with function call
    semestersRemaining = graduationDate(aggieStudent.stdTotalCredits, aggieStudent.stdCreditsCompleted);
    
    //Outputs to console
    cout << "\n\n\nStudent Record\n";
    cout << "Name: " << aggieStudent.stdName << endl;
    cout << "UIN: " << aggieStudent.stdUIN << endl;
    cout << "Major: " << aggieStudent.stdMajor << endl;
    cout << "Class: " << aggieStudent.stdYear << endl;
    cout << "Total credit: " << aggieStudent.stdTotalCredits << endl;
    cout << "Total credits completed: " << aggieStudent.stdCreditsCompleted << endl;
    
    cout << "Number of semesters remaining before graduation: " << semestersRemaining << endl;
    
    return 0;
}

int graduationDate(int a, int b){
    int needs = (a - b);
    //assumes 15 hours are taken each semester
    return needs / 15;
}