#include <iostream>
using namespace std;

class A {
	private:
		int x, y;
	friend class B;
};

class B {
	public:
		void vSetData(A &obj, int a, int b) {
			obj.x = a;
			obj.y = b;
		}
		void vPrintData(A &obj) {
			cout << "x:" << obj.x << ", y:" << obj.y << endl;
		}
};

int main() {
	A obj;
	B bObj;

	bObj.vSetData(obj, 10,20);
	bObj.vPrintData(obj);
}




