#include <iostream>
using namespace std;

float sum(float a, float b) {
	cout << "float function : ";
	return a+b;
}

double sum(double a, double b) {
	cout << "double function : ";
	return a+b;
}

int main() {
	cout << "Sum of 1.5 and 2.5 = " << sum(1.5, 2.5) << endl;
	cout << "Sum of 1.5f and 2.5f = " << sum(1.5f, 2.5f) << endl;
	//cout << "Sum of 1 and 2 = " << sum(1, 2) << endl; // This create and ambiguous problem
							      // Compiler could not idemtify which function
							      // need to call to do this action.
}
