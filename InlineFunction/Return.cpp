#include <iostream>
using namespace std;

inline int sum(int x, int y) {
	cout << "In inline funciton" << endl;
	return x+y;
}

int main() {
	int a = 10, b = 20, c = 0;
	c = sum(a, b);
	cout << "Sum is: " << c << endl;

	return 0;
}
