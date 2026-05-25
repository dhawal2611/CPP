#include <iostream>
using namespace std; //Use Standard functon directly. eg. cin, cout, etc

// Custom first_namespace
namespace first_namespace {
	void fun() {
		cout << "Inside the first namespace" << endl;
	}
}


// Custom second_namespace
namespace second_namespace {
	void fun() {
		cout << "Inside the second namespace" << endl;
	}
}


int main() {
	first_namespace::fun(); // Called first_namespace using scope resolution operator
	second_namespace::fun(); // Called first_namespace using scope resolution operator

	return 0;
}
