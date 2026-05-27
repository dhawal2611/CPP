#include <iostream>
using namespace std;

int main() {
	int **ptr, i = 0, j = 0;
	int row = 0, col = 0, val = 1;

	cout << "Enter the number of row and colum values" << endl;
	cin  >> row >> col;
	ptr = new int*[row];
	for(i = 0; i<row; i++) {
		ptr[i] = new int[col];
	}

	for(i = 0; i<row; i++) {
		for(j = 0; j<col; j++) {
			ptr[i][j] = val++;
		}
	}
	
	for(i = 0; i<row; i++) {
		for(j = 0; j<col; j++) {
			cout << ptr[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;

	for(i = 0; i<row; i++) {
		delete []ptr[i];
	}
	delete []ptr;

}
