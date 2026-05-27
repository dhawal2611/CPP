#include <iostream>
using namespace std;

class st {
	int x; // By default its treated as private member of class
public:
	int y;
};

int main() {
	st d;
	//d.x = 10; // Cannot access private member of class direcly
	d.y = 10; // Valid Access as its public member variable of class
	cout << "data is " << d.y << endl;
}
