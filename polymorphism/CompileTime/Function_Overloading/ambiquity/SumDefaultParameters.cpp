#include <iostream>
using namespace std;

int sum(int a, int b = 0) {
	return a+b;
}

int sum(int a) {
	return a+5;
}


int main() {
	int x = 10, y = 20;

	cout << "Sum x+y= " << sum(x, y) << endl;
	cout << "Sum x+y= " << sum(x) << endl; // This will generate ambiguity error as
					       // Compiler gets confused that which function to
					       // call.
}
