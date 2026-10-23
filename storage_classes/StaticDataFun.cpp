#include <iostream>
using namespace std;

class A {
	private:
		int x, y;
		static int z;
	public:
		void vSetData(int a, int b) {
			x = a;
			y = b;
		}
		void vSum() {
			z = x + y;
		}
		void vPrintData() {
			cout << "x:" << x << " y:" << y << " ";
			cout << "z:" << z << endl;
		}
};

int A::z = 0; 

int main() {
	A obj;
	obj.vSetData(10, 20);
	obj.vSum(); 
	obj.vPrintData();
}


