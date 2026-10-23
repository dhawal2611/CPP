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

int A::z = 0; // For Static Data member we need to
	      // resolve its scope to access in
	      // class member function.
//int A::x = 0; // Invalid as its directly accessed 
	      // by member functions
	      // (error: ‘int A::x’ is not a static data member of ‘class A’)

int main() {
	A obj;
	obj.vSetData(10, 20);
	obj.vSum(); 
	obj.vPrintData();

}


