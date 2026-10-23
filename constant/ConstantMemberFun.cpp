#include <iostream>
using namespace std;

class A {
	private:
		int x, y;
	public:
		void vSetData(int a, int b) {
			x = a;
			y = b;
		}
		void vPrintData() const {
			cout << "Value of x:" << x << " and y:" << y << endl;
		}
};

int main() {
	A obj;

	obj.vSetData(10, 20);
	obj.vPrintData();
}
