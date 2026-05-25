#include <iostream>
using namespace std;

void swap_reference(int &a, int &b) {
	int tmp = 0;
	tmp = a;
	a = b;
	b = tmp;
}

int main() {

	int a = 10, b = 20;
	cout << "Before Swap values are a = " << a << " and b = " << b << endl;
	swap_reference(a, b);
	cout << "Swapped values are a = " << a << " and b = " << b << endl;

	return 0;
}
