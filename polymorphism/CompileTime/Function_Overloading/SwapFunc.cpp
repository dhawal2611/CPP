#include <iostream>
using namespace std;

void swap(int &a, int &b) {
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
}

void swap(char &a, char &b) {
	char tmp;
	tmp = a;
	a = b;
	b = tmp;
}

void swap(float &a, float &b) {
	float tmp;
	tmp = a;
	a = b;
	b = tmp;
}

int main() {
	int i1 = 10, i2 = 20;
	float f1 = 10.5, f2 = 20.5;
	char c1 = 'a', c2 = 'b';

	cout << "Before swap i1=" << i1 << " i2=" << i2 << endl;
	swap(i1, i2);
	cout << "After swap i1=" << i1 << " i2=" << i2 << endl;

	cout << "Before swap f1=" << f1 << " f2=" << f2 << endl;
	swap(f1, f2);
	cout << "After swap f1=" << f1 << " f2=" << f2 << endl;

	cout << "Before swap c1=" << c1 << " c2=" << c2 << endl;
	swap(c1, c2);
	cout << "After swap c1=" << c1 << " c2=" << c2 << endl;


	return 0;
}
