#include <iostream>
using namespace std;

class st {
	private:
		int x, y;
	public:
		void vSetData(int a, int b) {
			x = a;
			y = b;
		}
		void vPrintData() {
			cout << "x val: " << x << endl;
			cout << "y val: " << y << endl;
		}
};

int main() {
	st v1, v2;

	cout << "size of v1: " << sizeof v1 << endl;
	//v1.x = 10; // This is invalid as x is prvate variable of class st
	//cout << "v1.x is: " << v1.x << endl; // This is invalid as x is prvate variable of class st

	v1.vSetData(10, 20);
	v1.vPrintData();
	v2.vSetData(11, 21);
	v2.vPrintData();

}
