 /*
 Forrest Henry
 CSCE 206 508
 HW0-Q4
 This program calculates pressure from two given variables and prints the result to the console.
 */
 
 #include <iostream> //preprocessor directive for i/o setup
 using namespace std; //invokes standard cpp library for repeated use
 int main()
 {
	//declaration or given variables
	double force = 172.5;
	double area = 27.5;
	 
	//physics calculation, stored in double precision f.p.
	double pressure = force / area;
	 
	//print to console both string literals and variables
	cout << "force = " << force << endl;
	cout << "area = " << area << endl;
	cout << "pressure = " << force << " / " << area << " = " << pressure << endl;
	 
	return 0; //returns 0 to the computer, to indicate successful execution
	 
 }