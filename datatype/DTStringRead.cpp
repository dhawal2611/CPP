#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	string S1; // Dynamnically allocates the memory to S1 and S2.
		       // string is one type of structure with dynamically
		       // allocates the memory to variable.
		       // No need to use malloc and realloc, etc
	cout << "Enter the data: " << endl;
	//cin >> S1; // Read only string without spaces

	getline(cin, S1); // Read the string with spaces
	cout << "Read String is: " << S1 << endl;
	
	char data[100]; // Size of variable must be mentioned
			// If pointer used need to allocate the memory  with some size
			// This issue is resolved in CPP using "string" keyword
	printf("Enter dtaa: ");
	scanf("%[^\n]s", data); // In C read string with spaces.
	printf("Read String using scanf: %s\n", data);
	

	return 0;
}
