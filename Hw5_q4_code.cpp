/*
Henry, Forrest Frederick
623006800
CSCE 206 Section 508
Assignment #5, Question 4: Perimeter Calculator-
This program calculates the perimeters for a circle, square, and triangle.
It accomplishes this through an overloaded function called a perimeter()
that takes one, two , or three arguments for a circle, rectangle or 
triangle. The program also validates the inputs to ensure they are greater than
zero.
*/

#include <iostream>
using namespace std;

float perimeter(float diameter){
	float const PI = 3.14159;
	return PI * diameter;
}
float perimeter(float length, float width){
	return 2 * (length + width);
}
float perimeter(float side1, float side2, float side3){
	return side1 + side2 + side3;
}

int main(){
	
	bool g1 = true, 
		 g2 = true, 
		 g3 = true; //sentinels for loops
	float d, l, w, s1, s2, s3;
	
	do{
		cout << "Enter the diameter of the circle? ";
		cin >> d;
		if(d > 0){
			float periCrc = perimeter(d);
			cout << "\tThe perimeter of the circle is " << periCrc << endl;
			g1 = false;
		}
	}while(g1);
	
	do{
		cout << "\nEnter the length of the rectangle? ";
		cin >> l;
		cout << "Enter the width of the rectangle? ";
		cin >> w;
		if(l > 0 || w > 0){
			float periRct = perimeter(l,w);
			cout << "\tThe perimeter of the Rectangle is " << periRct << endl;
			g2 = false;
		}
	}while(g2);
	
	do{
		cout << "\nEnter the first side of the triangle? ";
		cin >> s1;
		cout << "Enter the second side of the triangle? ";
		cin >> s2;
		cout << "Enter the third side of the triangle? ";
		cin >> s3;
		if(s1 > 0 || s2 > 0 || s3 > 0){
			float periTri = perimeter(s1,s2,s3);
			cout << "\tThe perimeter of the triangle is " << periTri << endl;
			g3 = false;
		}
	}while(g3);
	
	return 0;
}