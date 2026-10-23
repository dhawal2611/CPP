#include <iostream>
using namespace std;

class A {
	private:
		int x, y;
	public:
		A() { // Default constructor
			cout << "In Default constructor" << endl;
			x = 10, y = 20;
		}
		/*A(int a) { // Parameterized constructor
			cout << "In Parameterized constructor" << endl;
			x = a, y = 50;
		}*/
		A(int a, int b = 100) { // Parameterized constructor with default values
			cout << "In Parameterized constructor" << endl;
			x = a, y = b;
		}
		void vPrintData() {
			cout << "Value of x:" << x << " y:" <<y << endl;
		}
		~A() {
		}
};

int main() {
	A obj1, obj2(11); // Memory allocated and constructor is called.
	obj1.vPrintData();
	obj2.vPrintData();
}
