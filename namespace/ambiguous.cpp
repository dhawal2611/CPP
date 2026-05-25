#include <iostream>
using namespace std; //Use Standard functon directly. eg. cin, cout, etc

// Custom first_namespace
namespace first_namespace {
	int x = 10, y = 20;
	void fun() {
		cout << "Inside first namespace" << endl;
	}
}


// Custom second_namespace
namespace second_namespace {
	int x = 15, y = 25;
	void fun() {
		cout << "Inside second namespace" << endl;
	}
}


int main() {
	//using namespace first_namespace;
	//fun();
	//using namespace second_namespace;
	//fun();
	
	// Above call makes an ambigious error while compilation
	// To avoid the ambigious problem need to call them using below method

	{
		using namespace first_namespace;
		cout << "x= " << x << " y = " << y << endl;
		fun();
	}
	{
		using namespace second_namespace;
		cout << "x= " << x << " y = " << y << endl;
		fun();
	}

	// Also user can use below method to access the variables and fun.
	// You need to define the scope the all variables and functions into
	// the namespace to use.
	// If not done then calling error can be occured
	// Below is another method to avoid the ambigious compilation error
	
	using first_namespace::x;
	using second_namespace::y;
	using second_namespace::fun;
	cout << "x= " << x << " y = " << y << endl;
	fun();
	{
		//using second_namespace::x;
		using first_namespace::fun;
		cout << "x= " << x << " y = " << y << endl;
		fun();
	}
	

	return 0;
}
