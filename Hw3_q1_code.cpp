/*
Henry, Forrest Frederick
623006800
CSCE 206 Section 508
Assignment 3, Question #1: Runner's Diary
This program takes input values from a runner's 
*/

#include <iostream>
#include <iomanip>
#include <cstdlib> 
using namespace std;

int main(){

double t1, t2, t3, t4;
double firstTime, secondTime, thirdTime, fourthTime;

cout << "Enter the finishing time from your first run: \n" ;
cin >> t1;
cout << "Enter the finishing time from your second run: \n" ;
cin >> t2;
cout << "Enter the finishing time from your third run: \n" ;
cin >> t3;
cout << "Enter the finishing time from your fourth run: \n" ;
cin >> t4;

//if statements for t1 being the fastest time
if (t1<t2 && t2<t3 && t3<t4)
{
	firstTime = t1;
	secondTime = t2;
	thirdTime = t3;
	fourthTime = t4;
}
if (t1<t3 && t3<t2 && t2<t4)
{
	firstTime = t1;
	secondTime = t3;
	thirdTime = t2;
	fourthTime = t4;
}
if (t1<t4 && t4<t3 && t3<t2)
{
	firstTime = t1;
	secondTime = t4;
	thirdTime = t3;
	fourthTime = t2;
}
if (t1<t2 && t2<t4 && t4<t3)
{
	firstTime = t1;
	secondTime = t2;
	thirdTime = t4;
	fourthTime = t3;
}
if (t1<t3 && t3<t4 && t4<t2)
{
	firstTime = t1;
	secondTime = t3;
	thirdTime = t4;
	fourthTime = t2;
}
if (t1<t4 && t4<t2 && t2<t3)
{
	firstTime = t1;
	secondTime = t4;
	thirdTime = t2;
	fourthTime = t3;
}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

//if statements for t2 being the fastest time	
if(t2<t3 && t3<t1 && t1<t4)
{
	firstTime = t2;
	secondTime = t3;
	thirdTime = t1;
	fourthTime = t4;
}
if(t2<t1 && t1<t3 && t3<t4)
{
	firstTime = t2;
	secondTime = t1;
	thirdTime = t3;
	fourthTime = t4;
}
if(t2<t4 && t4<t1 && t1<t3)
{
	firstTime = t2;
	secondTime = t4;
	thirdTime = t1;
	fourthTime = t3;
}
if(t2<t4 && t4<t3 && t3<t1)
{
	firstTime = t2;
	secondTime = t4;
	thirdTime = t3;
	fourthTime = t1;
}
if(t2<t1 && t1<t4 && t4<t3)
{
	firstTime = t2;
	secondTime = t1;
	thirdTime = t4;
	fourthTime = t3;
}
if(t2<t3 && t3<t4 && t4<t1)
{
	firstTime = t2;
	secondTime = t3;
	thirdTime = t4;
	fourthTime = t1;
}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

//if statements for t3 being the fastest time
if(t3<t4 && t4<t1 && t1<t2)
{
	firstTime = t3;
	secondTime = t4;
	thirdTime = t1;
	fourthTime = t2;
}
if(t3<t4 && t4<t2 && t2<t1)
{
	firstTime = t3;
	secondTime = t4;
	thirdTime = t2;
	fourthTime = t1;
}
if(t3<t2 && t2<t4 && t4<t1)
{
	firstTime = t3;
	secondTime = t2;
	thirdTime = t4;
	fourthTime = t1;
}
if(t3<t1 && t1<t2 && t2<t4)
{
	firstTime = t3;
	secondTime = t1;
	thirdTime = t2;
	fourthTime = t4;
}
if(t3<t2 && t2<t1 && t1<t4)
{
	firstTime = t3;
	secondTime = t2;
	thirdTime = t1;
	fourthTime = t4;
}
if(t3<t1 && t1<t4 && t4<t2)
{
	firstTime = t3;
	secondTime = t1;
	thirdTime = t4;
	fourthTime = t2;
}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

//if statements for t4 being the fastest time
if(t4<t3 && t3<t2 && t2<t1)
{
	firstTime = t4;
	secondTime = t3;
	thirdTime = t2;
	fourthTime = t1;
}
if(t4<t2 && t2<t3 && t3<t1)
{
	firstTime = t4;
	secondTime = t2;
	thirdTime = t3;
	fourthTime = t1;
}
if(t4<t1 && t1<t2 && t2<t3)
{
	firstTime = t4;
	secondTime = t1;
	thirdTime = t2;
	fourthTime = t3;
}
if(t4<t1 && t1<t3 && t3<t2)
{
	firstTime = t4;
	secondTime = t1;
	thirdTime = t3;
	fourthTime = t2;
}
if(t4<t2 && t2<t1 && t1<t3)
{
	firstTime = t4;
	secondTime = t2;
	thirdTime = t1;
	fourthTime = t3;
}
if(t4<t3 && t3<t1 && t1<t2)
{
	firstTime = t4;
	secondTime = t3;
	thirdTime = t1;
	fourthTime = t2;
}
if (t1 < 0.0f || t2 < 0.0f || t3 < 0.0f || t4 < 0.0f)
{
	cout << "ERROR: negative numbers are not valid.\n";
	cout << "Please run the program again and use\n";
	cout << "valid numbers for the run time entries.\n";
	exit(0);
}
	
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~	
cout << "1st fastest time: " << firstTime << endl;
cout << "2nd fastest time: " << secondTime << endl;
cout << "3rd fastest time: " << thirdTime << endl;
cout << "4th fastest time: " << fourthTime << endl;

//print to console the running times


/*
POSSIBLE CASES:

t1<t2<t3<t4 |	t2<t3<t1<t4 |	t3<t4<t1<t2 |	t4<t3<t2<t1
t1<t3<t2<t4 |	t2<t1<t3<t4 |	t3<t4<t2<t1 |	t4<t2<t3<t1
t1<t4<t3<t2 |	t2<t4<t1<t3 |	t3<t2<t4<t1 |	t4<t1<t2<t3
t1<t2<t4<t3 |	t2<t4<t3<t1 |	t3<t1<t2<t4 |	t4<t1<t3<t2
t1<t3<t4<t2 |	t2<t1<t4<t3 |	t3<t2<t1<t4 |	t4<t2<t1<t3
t1<t4<t2<t3 |	t2<t3<t4<t1 |	t3<t1<t4<t2 |	t4<t3<t1<t2

	cout << "1st fastest time: " << t4 << endl;
	cout << "2nd fastest time: " << t3 << endl;
	cout << "3rd fastest time: " << t2 << endl;
	cout << "4th fastest time: " << t1 << endl;

	firstTime = ;
	secondTime = ;
	thirdTime = ;
	fourthTime = ;
	
*/




	
	return 0;

}