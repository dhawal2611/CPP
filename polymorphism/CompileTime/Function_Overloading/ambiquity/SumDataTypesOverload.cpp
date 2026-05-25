#include <iostream>
using namespace std;

int sum(int a, int b) {
	cout << " - In normal call - ";
	return a+b;
}

int sum(int &a, int &b) {
	cout << " - In reference call - ";
	return a+b;
}


int main() {
	int x = 10, y = 20;

	cout << "Sum x+y= " << sum(10, 20) << endl;
	//cout << "Sum x+y= " << sum(x, y) << endl; // This will generate ambiguity error as
					       // Compiler gets confused that which function to
					       // call.
}
