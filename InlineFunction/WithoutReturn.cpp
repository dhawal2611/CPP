#include <iostream>
using namespace std;

inline void sum(int x, int y) {
	cout << "In inline funciton Sum is: " << x+y << endl;
}

int main() {
	int a = 10, b = 20;
	sum(a, b);

	return 0;
}
