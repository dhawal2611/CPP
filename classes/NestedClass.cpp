#include <iostream>
using namespace std;

class A {
	public:
		int x;
	class B {
		public:
			int y;
	};
	B Bobj;
};

int main() {
	A Aobj;
	cout << "size of A is: " << sizeof Aobj << endl;
	Aobj.x = 10;
	cout << "Aobj.x=" << Aobj.x << endl;
	A::B bobj;
	//B bobj; // Invalid
	bobj.y = 20;
	cout << "bobj.y=" << bobj.y << endl;
	Aobj.Bobj.y = 30;
	cout << "Aobj.Bobj.y =" << Aobj.Bobj.y << endl;

}
