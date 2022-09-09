/*
Henry, Forrest Frederick
623006800
CSCE 206 Section 508
Assignment 04, Question #2: Aggie Football
This program reads user inputs for the number of points scored by the Texas A&M football team in each game. In addition, 
it also takes these scores and writes them to a file. The program uses a sentinel value "7777" to terminate the program,
allowing the user to enter different amounts games for different seasons. Once the program has written the scores to the 
file, it reads them back, prints the scores, their total sum, as well as the average number of points scored to 2 decimals.
There are no negative scores allowed for input.
*/

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;  

int main(){
ofstream outputFile;
ifstream inputFile;
bool sentinel; //if false, loop is terminated
unsigned int game; //counter for games
int score;
game = 1;
sentinel = true;
outputFile.open("aggiescores.txt");
cout << "\nAggie Football Score Keeper\n";
cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";

	do{//write-to-file loop 
	
		cout << "\nEnter the number of points scored in Game " << game << ": ";
	
		cin >> score;
			if(score < 0){//prevents negative integers
				cout << "\nERROR: Invalid integer.\n";
				cout << "Please enter a positive value.\n";
			}
			else if(score == 7777){//sentinel + inputFile
				cout << "\nScores written into file...";
				cout << "aggiescores.txt\n";
				sentinel = false;
				outputFile.close();
			
				//file-opener built into loop
				inputFile.open("aggiescores.txt");
				int iterScore, totalScore; 
				double meanScore;
				double divisor = (static_cast<double>(game)/1.0)-1;
				cout << "Reading Scores...\n";
				cout << "\nFollowing are the scores from each game: \n";
				while(inputFile >> iterScore){//>> is a bool operator
				cout << iterScore << "\t";
				totalScore += iterScore;
				}
				inputFile.close();
				meanScore = totalScore / divisor;//force to float 
				cout << fixed << setprecision(2);
				cout << "\nAggies scored a total of " << totalScore; 
				cout << " points from "  << (game-1); 
				cout << "\ngames and averaged "; 
				cout << meanScore << " points scored per game.\n";
				return 0;
				//program ends
			}
			else{//writes score to file
				outputFile << score << endl;
				game++;
			}
		
	}while(sentinel);
}