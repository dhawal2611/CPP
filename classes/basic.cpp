#include <iostream>
using namespace std;

class st {
	int x; // By default its treated as private member of class
public:
	int public_var;
private:
	int private_var;
protected:
	int protected_var;
};

int main() {
	st d;
	//d.x = 10; // Cannot access private member of class direcly
	d.public_var = 10; // Valid Access as its public member variable of class
	//d.private_var = 20; // This is invalid access as it can be accessed by only class member functions
			    // It cannot be accessed in any other funcitons.
	//d.protected_var = 30; // Same as private variable It can only accessed by member functions only
	cout << "public var is " << d.public_var << endl;
	//cout << "protected var is " << d.protected_var << endl;
	//cout << "private var is " << d.private_var << endl;
}
