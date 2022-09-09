/*
Henry, Forrest F.
623006800
CSCE 206 Section 508
Assignment 8, Question #2: Tic-Tac-Toe
This is a two-player program that uses 2D vectors to simulate
the game "tic-tac-toe". The program performs necessary validations
to make sure inputs are within bounds, and uses several functions to 
print the current game board as well as determine a winner
*/

#include <iostream>
#include <cstdlib>

using namespace std;

//global array dimensions
const int ROWS = 3;
const int COLS = 3;

char abbottCostello(int);
bool czechWinner(char[][COLS], int);
void printBoard(char[][COLS], int);
void userInput(char[][COLS], int, char);

int main(){
	int itr = 0;
	bool winner = false; 
	char marker; 
	char gameBoard[ROWS][COLS] = {{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};
	
	cout << "---------------------------\n";
	cout << "\tTIC-------*\n";
	cout << "\t|---TAC---|\n";
	cout << "\t*-------TOE\n";
	cout << "---------------------------\n";
	cout << "(C) 2001, SUSS MICROSYSTEMS\n";
	
	for(itr = 0; itr < 9; itr++){
		//Cycle for game
		printBoard(gameBoard, ROWS);
		marker = abbottCostello(itr);
		cout << "Your move, Player '" << marker << "'.\n";
		userInput(gameBoard, ROWS, marker);
		winner = czechWinner(gameBoard, ROWS);

		//Game Logic Control
		if(winner){
			printBoard(gameBoard, ROWS);
			cout << "\nPlayer '" << marker << "' has won the game!\n";
			exit(0);			

		}
	}
	if(!winner){
		printBoard(gameBoard, ROWS);
		cout << "\nThe game is a tie!\n";
	}
	
	return 0;
}


void printBoard(char array[][COLS], int ROWS){
	int i, j;
	for(i = 0; i < ROWS; i++){
		for(j = 0; j < COLS; j++){
			cout << "[" << array[i][j] << "]";
		}
	cout << "\n";
	}
}

char abbottCostello(int a){
	int rem;
	rem = a % 2;
	//switch case determines the char assigned to the marker variable
	switch(rem){
		case 0:
			return 'X';
			break;
		case 1:
			return 'O';
			break;
	}
}

bool czechWinner(char b[][COLS],int ROWS){
	//check rows for winning combinations
	if(b[0][0] != ' ' && b[0][0] == b[0][1] && b[0][1] == b[0][2]){
		return true;
	}
	else if(b[1][0] != ' ' && b[1][0] == b[1][1] && b[1][1] == b[1][2]){
		return true;
	}
	else if(b[2][0] != ' ' && b[2][0] == b[2][1] && b[2][1] == b[2][2]){
		return true;
	}
	//check columns for winning combinations
	else if(b[0][0] != ' ' && b[0][0] == b[1][0] && b[1][0] == b[2][0]){
		return true;
	}
	else if(b[0][1] != ' ' && b[0][1] == b[1][1] && b[1][1] == b[2][1]){
		return true;
	}
	else if(b[0][2] != ' ' && b[0][2] == b[1][2] && b[1][2] == b[2][2]){
		return true;
	}
	//check diagonals for winning combinations
	else if(b[0][0] != ' ' && b[0][0] == b[1][1] && b[1][1] == b[2][2]){
		return true;
	}
	else if(b[0][2] != ' ' && b[0][2] == b[1][1] && b[1][1] == b[2][0]){
		return true;
	}
	else{
		return false;
	}

}

void userInput(char b[][COLS], int ROWS, char type){
	int i,j;
	bool loopr = true;
	
	do{
		//minor validation loop for rows
		do{
			cout << "Player, please choose a row from 1 to 3 in which you desire to place '" << type << "': ";
			cin >> i;
		}while(i <= 0 || i > ROWS);
		//minor validation loop for columns
		do{
			cout << "Player, please choose a column from 1 to 3 in which you desire to place '" << type << "': ";
			cin >> j;
		}while(j <= 0 || j > COLS);
		
		//major validation loop for open elements
		if(b[i-1][j-1] != ' '){
			cout << "\nSorry, Player!\n That spot is already taken on the board.\n";
			cout << "Please choose another one.\n";
		}
		else{
			b[i-1][j-1] = type;
			loopr = false;
		}
	}while(loopr);
}
