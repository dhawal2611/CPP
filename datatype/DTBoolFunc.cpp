#include <iostream>
using namespace std;

bool ContinueCall() {
	char ReadState;

	cout << "Continue Reading (y/n) ???" << endl;
	cin >> ReadState;

	if (ReadState == 'y') {
		return true;
	} else {
		return false;
	}
}

int main() {
	bool ReturnStatus;

	ReturnStatus = ContinueCall();

	if(ReturnStatus == true) {
		cout << "Continue Reading..." << endl;
	} else {
		cout << "Stop Reading..." << endl;
	}

}
