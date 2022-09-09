#include <iostream>
using namespace std;

int main()
{
	//variable D&A; 
	int inputSec;
	const int DAYSEC = 86400;
	const int HOURSEC = 3600;
	const int MINSEC = 60;
	
	//i/o for input amount and flow control]
	cout << "How many seconds are you entering?\n";
	cin >> inputSec;
	cout << "\n";
	
	
	cout << inputSec << " seconds = ";
	//if / else flow control:
	if(inputSec >= DAYSEC)
	{
		cout << (inputSec / DAYSEC) << " Days "; //int division means no float numbers
		inputSec = (inputSec % DAYSEC); //reassigns input to remainder from above days
	}
	
	if(inputSec >= HOURSEC)
	{
		cout << (inputSec / HOURSEC) << " Hours ";
		inputSec = (inputSec % HOURSEC);
	}
	
	if(inputSec >= MINSEC)
	{
		cout << (inputSec / MINSEC) << " Minutes ";
		inputSec = (inputSec % MINSEC);
	}
	
	if(inputSec > 0)
	{
		cout << inputSec << " Seconds.\n";
	}
	else //prevents incorrect input type
	{
		cout << "ERROR: Wrong Input Type.\n";
		cout << "Please run the program again.\n";
	}	
	
	//ending statement
	return 0;
}