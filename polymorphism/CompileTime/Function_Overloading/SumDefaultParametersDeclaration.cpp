#include <iostream>
using namespace std;

int sum(int a, int b, int c = 0, int d = 0); // In declaration only need to mention
					     // default argument value

int main() {
	int x = 10, y = 20, z = 30, w =40;

	cout << "Sum x+y= " << sum(x, y) << endl;
	cout << "Sum x+y+z= " << sum(x, y, z) << endl;
	cout << "Sum x+y+z+w= " << sum(x, y, z, w) << endl;
}


int sum(int a, int b, int c, int d) { // In defination its not required as its done in
				      // declaration
	return a+b+c+d;
}
