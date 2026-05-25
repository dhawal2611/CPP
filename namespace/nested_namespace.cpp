#include <iostream>
using namespace std; //Use Standard functon directly. eg. cin, cout, etc

// Custom first_namespace
namespace first_namespace {
	void fun() {
		cout << "Inside the first namespace" << endl;
	}
	// Nested second_namespace
	namespace second_namespace {
		void fun() {
			cout << "Inside the second namespace" << endl;
		}
	}
}


using namespace first_namespace::second_namespace; //Using second namespace directly

int main() {
	first_namespace::fun(); // called first_namespace function
	fun(); // called function from second_namespace
	first_namespace::second_namespace::fun(); // called function from second_namespace

	return 0;
}
