#include <iostream>
using namespace std;

int main() {
	string S1, S2;
	cout << "Size of String S1: " << sizeof S1 << endl;
	S1 = "Hello";
	cout << "Size of String S1: " << sizeof S1 << " and S1 = " << S1 << endl;
	S2 = "Hai";
	cout << "Size of String S2: " << sizeof S2 << " and S2 = " << S2 << endl;

	//S1 = S1+S2; // Concatenate both the string
	//cout << "String S1: " << S1 << endl;
	
	S1 = S1+" "+S2; // Concatenate both the string with space between 2 strings
	cout << "String S1: " << S1 << endl;

	for(int i=0; S1[i]; i++) {
		cout << S1[i] << "_"; //Print String Char by Char
	}
	cout << endl;

	return 0;
}
