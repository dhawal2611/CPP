#include <iostream>
using namespace std;

int main() {
	int data = 100;
	int *ptr = &data;
	int* &RefVar = ptr; // Reference variable must be declare at Initilization time
			    // Here RefVar is alice name of ptr and have same memory
	
	cout << "data = " << data << endl;
	cout << "pointer *ptr = " << *ptr << " and ptr = " << ptr << endl;
	cout << "Reference var RefVar = " << RefVar << " and *Refptr = " << *RefVar << endl;



}
