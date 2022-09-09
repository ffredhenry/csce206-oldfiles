/*
Henry, Forrest Frederick
623006800
CSCE 206 Section 508
Assignment #1, Question 4: Introduction
This program takes user-defined inputs for various fields such as name, college, and major, and then
print to the console an introductory message for the individual. It makes use of the string directive
as well as the getline manipulator.
*/
#include <iostream>
#include <iomanip> 
#include <string>

using namespace std;
int main()
{
	string name, nameCollege, homeTown, classCollege, majorCollege, teamCollege;
	int startYear;
	
	//user inputs 
	cout << "What is your name?\n";
	getline(cin,name);
	cout << "Which college do you go to?\n";
	getline(cin,nameCollege);
	cout << "Where are you from?\n";
	getline(cin,homeTown);
	cout << "When did you start college?\n";
	cin >> startYear;
	cin.ignore();
	cout << "What class are you?\n";
	getline(cin,classCollege);
	cout << "What is your major?\n";
	getline(cin,majorCollege);
	cout << "What is your college team name?\n";
	getline(cin,teamCollege);
	
	//print to console
	cout << "Hello, my name is " << name << " and I am a student at " << nameCollege << ".\n";
	cout << "I am originally from " << homeTown << " and I started attending " << nameCollege << " in " << startYear << ".\n";
	cout << "I’m currently a " << classCollege << " majoring in " << majorCollege << ".\n"; 
	cout << "Go " << teamCollege << "!";
	
	return 0;
}