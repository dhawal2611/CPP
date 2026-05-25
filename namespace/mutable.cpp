#include <iostream>
using namespace std;

struct st {
	int i;
	mutable int j;
	int k;
};

int main() {
	//struct st data1 = {5, 15, 25};
	const struct st data1 = {5, 15, 25};
	//data1.i = 10; // This assignment is invalid for const structure var
	data1.j = 20; // As this variable is mutable then it can be modifed at
		      // run time when structure is declare as static
	//data1.k = 30; // This assignment is invalid for const structure var

	cout << "data1.i = " << data1.i << endl;
	cout << "data1.j = " << data1.j << endl;
	cout << "data1.k = " << data1.k << endl;
}
