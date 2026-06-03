#include <iostream>
using namespace std;

class A {
	private:
		int x, y;
	friend int main();
};

int main() {
	A obj;
	obj.x = 10;
	obj.y = 20;
	cout << "x: " << obj.x << " y: " << obj.y << endl;
}
