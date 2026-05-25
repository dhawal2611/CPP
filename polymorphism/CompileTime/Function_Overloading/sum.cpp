#include <iostream>
using namespace std;

int sum(int a, int b) {
	return a+b;
}

float sum(int a, float b) {
	return a+b;
}


int sum(int a, int b, int c) {
	return a+b+c;
}

int sum(int a, int b, int c, int d) {
	return a+b+c+d;
}

float sum(int a, int b, float c, int d) {
	return a+b+c+d;
}


int main() {
	//cout << "SUM of 10 and 20 is" << sum(10, 20) << endl;
	//cout << "SUM of 10 and 20.5 is" << sum(10, 20.5) << endl; // This will generate ambigious problem
								  // As the 2nd value is float and it can be treated as float/int so compiler
								  // gets confused
	// To fix the above problem use the below methdo
	int x = 10, y = 20, p = 30, q =40;
	float z = 1.5;

	cout << "Sum of x and y = " << sum(x, y) << endl;
	cout << "Sum of x and z = " << sum(x, z) << endl; // if you hide "int sum(int a, float b)" funciton then,
							  // the call with typecast 2nd variable and tell the compiler
							  // to treat 2nd variable as int variable not float variable
	cout << "Sum x+y= " << sum(x, y) << endl;
	cout << "Sum x+z= " << sum(x, z) << endl;
	cout << "Sum x+y+p= " << sum(x, y, p) << endl;
	cout << "Sum x+y+p+q= " << sum(x, y, p, q) << endl;
	cout << "Sum x+y+z+p= " << sum(x, y, z, p) << endl;
}
