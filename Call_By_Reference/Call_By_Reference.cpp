#include<iostream>
using namespace std;

/* Call by value */
void fun(int data) {
	printf("data is : %d\n", data);
}

/* Call by reference */
void reference_fun(int &data) {
	printf("data is : %d\n", data);
}

int main() {
	int data = 10;
	fun(data);
	reference_fun(data);
}
