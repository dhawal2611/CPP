#include <iostream>
using namespace std;

int main() {
	int *ptr, i = 0;
	ptr = new int[5];
	for(i; i<5; i++) {
		ptr[i] = i*5;
	}
	
	cout << "Array elements are as follows" << endl;
	for(i=0; i<5; i++) {
		cout << ptr[i] << " ";
	}
	cout << endl;

	delete []ptr;
}
