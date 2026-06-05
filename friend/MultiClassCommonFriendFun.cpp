#include <iostream>
using namespace std;

class B;

class A {
	private:
		int x, y;
	public:
		void vSetData(int a, int b) {
			x = a;
			y = b;
		}
		void vPrintData() {
			cout << "Class A: x=" << x << ", y=" << y << endl;
		}
	friend A clAddObj(A &, B &);
};

class B {
	private:
		int p, q;
	public:
		void vSetData(int a, int b) {
			p = a;
			q = b;
		}
		void vPrintData() {
			cout << "Class B: p=" << p << ", q=" << q << endl;
		}
	friend A clAddObj(A &, B &);
};

A clAddObj(A &obj1, B &obj2) {
	A clResObj;
	clResObj.x = obj1.x + obj2.p;
	clResObj.y = obj1.y + obj2.q;
	return clResObj;
}

int main() {
	A obj1, Sum;
	B obj2;
	obj1.vSetData(10, 20);
	obj2.vSetData(15, 25);
	obj1.vPrintData();
	obj2.vPrintData();

	Sum = clAddObj(obj1, obj2);
	cout << "Sum is: "<< endl;
	Sum.vPrintData();
}

