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
		static void vModifyData(A &obj) {
			//x = 15, y = 25; // Invalid
			z = 35;
			obj.x = 15, obj.y = 25; // Valid
		}
};

int A::z = 0; 

int main() {
	A obj;
	obj.vSetData(10, 20);
	obj.vSum(); 
	obj.vPrintData();
	//obj.vModifyData(); // Invalid access as funciton is static
	A::vModifyData(obj); // Valid access as funciton is static
	obj.vPrintData();
}


