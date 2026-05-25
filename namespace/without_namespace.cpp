#include <iostream>
//using namespace std;

// Below are the standard functions to call
// Unhide below line to enable normal usage cout and cin
using std::cout;
using std::endl; 

namespace first {
	int i = 10, j = 20;
}

namespace first {
	int k = 15;
	void fun() {
		//std::cout << "In first namespace function" << std::endl;
		cout << "In first namespace function without using std::" << endl; // As used "using std::cout" -> which is included in std namespace
	}
}

namespace second {
	int i = 11, j = 21;
	void fun() {
		std::cout << "In second namespace function" << std::endl;
	}
}

void fun() {
	std::cout << "In global function" << std::endl;
}

int main() {
	int i = 20;
	first::fun();
	second::fun();
	std::cout << "i" << i << std::endl;
	std::cout << "first: " << first::i << std::endl;
	std::cout << "second: " << second::i << std::endl;
	fun();

}

