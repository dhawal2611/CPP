#include <iostream>
using namespace std;

int main() {
	//bool data;
	bool data = 100;
	// Memory Allocation is done in byte, but data is store in bit
	// So Other 7 bits are wasted.
	// So if we give any value then its treated as "true".

	cout << "size of bool: " << sizeof data << " byte" << endl; 
	cout << "data = " << data << endl;

	data = false;
	cout << "data = " << data << endl;
	data = true;
	cout << "data = " << data << endl;

}
