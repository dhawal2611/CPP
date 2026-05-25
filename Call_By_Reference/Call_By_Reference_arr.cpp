#include<iostream>
using namespace std;

int d[5] = {10, 20, 30, 40, 50};

/* Call by reference */
int& fun(int index) {
	return d[index];
}

int main() {
	int (&arr)[5] = d; // call by reference
	//arr = d; // Not correct way. Compile time error. arr should be defined at time of declaration
	for (int i =0; i<5; i++) {
		printf("data[%d] = %d", i, arr[i]);
	}
	printf("\n");

	for (int i =0; i<5; i++) { //reference passed to function
		fun(i) = d[i] + 5;
	}
	for (int i =0; i<5; i++) {
		cout << d[i] << endl;
	}
	cout << endl;

}
