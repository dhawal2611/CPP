#include <iostream>
using namespace std;

int input() {
	int x = 1;
	return x;
}

int sum(int a, int b, int c = input(), int d = input()) {
	return a+b+c+d;
}

bool operate() {
	bool data;
	char ch;
	cout << "Want to use default argument or not  (y/n) ";
	cin >> ch;
	if(ch == 'y')
		data = true;
	else
		data = false;

	return data;
}

int main() {
	int a, b, c, d;
	bool state;
	state = operate();
	if(state == true) {
		cout << "Entere value of a and b " << endl;
		cin >> a >> b;
		cout << "Using default variable sum - " << sum(a, b) << endl;
	} else {
		cout << "Entere value of a, b, c and d " << endl;
		cin >> a >> b >> c >> d;
		cout << "Not using default variable sum - " << sum(a, b, c, d) << endl;
	}
	
	return 0;
}
