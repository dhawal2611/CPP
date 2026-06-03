#include <iostream>
using namespace std;

class A {
	private:
		int x, y;
	friend void SetData(A &);
	friend void PrintData(A &);
};

void SetData(A &obj) {
	obj.x = 10;
	obj.y = 20;
}

void PrintData(A &obj) {
	cout << "SetData is as follows: " << endl;
	cout << "x:" << obj.x << endl;
	cout << "y:" << obj.y << endl;
}

int main() {
	A obj;
	SetData(obj);
	PrintData(obj);
}
