#include <iostream>
using namespace std;

class A;

class B {
	public:
		void vSetData(A &, int, int);
		void vPrintData(A &);
};

class A {
	private:
		int x, y;
	friend void B;
	//friend void B::vSetData(A &, int, int);
	//friend void B::vPrintData(A &);
};

void B::vSetData(A &obj, int p, int q) {
	obj.x = p;
	obj.y = q;
}

void B::vPrintData(A &obj) {
	cout << "SetData is as follows: " << endl;
	cout << "x:" << obj.x << endl;
	cout << "y:" << obj.y << endl;
}

int main() {
	A obj;
	B bobj;
	bobj.vSetData(obj, 10, 20);
	bobj.vPrintData(obj);
}
