#include<iostream>
using namespace std;

class A {
	private:
		int x, y;
	public:
		void vSetData(int a, int b) {
			//x = a; y = b;
			this->x = a;
			this->y = b;
		}
		void vPrintData() {
			cout << "Value of x:" << x << " and y:" << y << endl;
		}
};


int main() {
	A obj1, obj2, obj3;

	obj1.vSetData(10, 20);
	obj2.vSetData(11, 21);
	obj3.vSetData(12, 22);

	obj1.vPrintData();
	obj2.vPrintData();
	obj3.vPrintData();
}
