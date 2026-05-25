#include <iostream>
using namespace std;

int data = 20;

int main() {
	int data = 10;

	cout << "data is: " << data << endl;
	cout << "::data is  " << ::data << endl;
	{
		cout << "out of block data is: " << data << endl;
		int data = 30;
		cout << "data block is: " << data << endl;
		cout << "::data is  " << ::data << endl;
		
	}
}
