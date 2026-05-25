#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	char S1[100];

	cout << "Enter the data: " << endl;
	cin.getline(S1, sizeof(S1)); // Read the Array using getline api
	cout << "Read String is: " << S1 << endl;

	return 0;
}
