/*
Henry, Forrest F.
623006800
CSCE 206, Section 508
Assignment 8, Question #1: Halloween Chocolate
This program uses 2D arrays to keep track of the amount of chocolates Jamie 
and Alex have received over the past three Halloween holidays. It does so
by utilizing three functions, totalChocolateByPerson(), "---"ByYear(), 
and maxChocolate(). These functions print out different values based on the title 
of the function.
*/

#include <iostream>
#include <string>
 using namespace std;
 
 const int ROWS = 2;
 const int COLS = 3;
 
 void totalChocolateByPerson(int[][COLS], int, string, string);
 void totalChocolateByYear(int[][COLS], int, string, string);
 void maxChocolate(int[][COLS], int, string, string);
 
 int main(){
	string p1 = "Jamie";
	string p2 = "Alex";
	int chocList[ROWS][COLS] = {{24,32,21},//Jamie
								{27,17,22}};//Alex
	
	totalChocolateByPerson(chocList, ROWS, p1, p2);
	totalChocolateByYear(chocList, ROWS, p1, p2);
	maxChocolate(chocList, ROWS, p1, p2);
	return 0;
 }
 
 void totalChocolateByPerson(int a[][COLS], int ROWS, string c, string d){
	int r1 = 0;
	int r2 = 0;
	for(int i = 0; i < COLS; i++){
		r1 += a[0][i];
		r2 += a[1][i];
	}
	cout << c << " has gotten a total of " << r1 << " pieces of chocolate.\n";
	cout << d << " has gotten a total of " << r2 << " pieces of chocolate.\n";
 }
 
 void totalChocolateByYear(int a[][COLS], int ROWS, string c, string d){
	int y1 = 0;
	int y2 = 0;
	int y3 = 0;
	for(int j = 0; j < ROWS; j++){
		y1 += a[j][0];
		y2 += a[j][1];
		y3 += a[j][2];
	}
	cout << "There were " << y1 << " pieces of chocolate collected in year 1.\n";
	cout << "There were " << y2 << " pieces of chocolate collected in year 2.\n";
	cout << "There were " << y3 << " pieces of chocolate collected in year 3.\n";
 }
 
 void maxChocolate(int a[][COLS], int ROWS, string c, string d){
	int i, j;
	int max = 0;
	int maxp; 
	int maxy;
	for(j = 0; j < COLS; j++){
		for(i = 0; i < ROWS; i++){
			if(a[i][j] > max){
				max = a[i][j];
				maxp = i;
				maxy = j;
			}
		}
	}
	
	if(maxp == 0){
		cout << c << " collected the most chocolate in year " << maxy+1 << ".\n";
	}
	else{
		cout << d << " collected the most chocolate in year " << maxy+1 << ".\n";
	}
	
 }