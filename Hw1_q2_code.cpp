/*
Henry, Forrest Frederick
623006800
CSCE 206 Section 508
Assignment #1, Question 2: Basketball Score:
This program takes a user input for the number of free throws (1 point), 2-point, and 3-point shots that
a basketball team made during a game. The program stores these values in three seperate variables, and 
outputs a report on how many points the team scored, how many shots they made, and the relative frequency
of each type of shot (in percentages), rounded to three decimal places. 
Also displays user input for team name.
*/

#include <iostream>
#include <iomanip> //preprocessor directive for std::setprecision command
using namespace std;
int main()
{
	//variable declaration (D&A)
	double freeThrow, twoShot, threeShot;
	
	//variable assignment via user: team name, and shot amounts
	cout << " Score Calculator: " << endl;
	cout << "Please enter the amount of free throws made: " << endl;
	cin >> freeThrow;
	cout << "Please enter the amount of 2-point shot(s) made: " << endl;
	cin >> twoShot;
	cout << "Please enter the amount of 3-point shot(s) made: " << endl;
	cin >> threeShot;
	
	
	//variable D&A for calculating point values and totals
	double twoPoints, threePoints, totalShots, totalPoints;
	
	twoPoints = twoShot * 2;
	threePoints = threeShot * 3;
	
	totalShots = freeThrow + twoShot + threeShot;
	totalPoints = freeThrow + twoPoints + threePoints;
	
	//variable D&A for calculating percentages of the total scored
	double freePercentage, twoPercentage, threePercentage;
	
	freePercentage = (freeThrow / totalShots) * 100;
	twoPercentage = (twoShot / totalShots) * 100;	
	threePercentage = (threeShot / totalShots) * 100;
		
	//output to console:	
	cout << "Your team scored " << totalPoints << " points from " << totalShots << " shots.\n";
	std::cout << std::fixed << std::setprecision(3) << "Percentage of free throws: " << freePercentage << "%\n";
	std::cout << std::fixed << std::setprecision(3) << "Percentage of two-pointers: " << twoPercentage << "%\n";
	std::cout << std::fixed << std::setprecision(3) << "Percentage of three-pointers: " << threePercentage << "%\n";
	
	return 0;
	
}


