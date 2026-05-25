#include <iostream>
using namespace std;

int sum(int a, int b, int c = 0, int d = 0) { // As declaration is not done seperately
					      // So need to mention paramaters default values 
					      // in function defination itself
	return a+b+c+d;
}

int main() {
	int x = 10, y = 20, z = 30, w =40;

	cout << "Sum x+y= " << sum(x, y) << endl;
	cout << "Sum x+y+z= " << sum(x, y, z) << endl;
	cout << "Sum x+y+z+w= " << sum(x, y, z, w) << endl;
}
