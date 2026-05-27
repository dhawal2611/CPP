#include <iostream>
using namespace std;

int main() {
	int **matrix1, **matrix2;
	int **omatrix;
	int i = 0, j = 0, k = 0;
	int row = 0, col = 0;

	cout << "Enter the number of members of matrix1 per row" << endl;
	cin  >> row;
	col = row;

	cout << "Enter the elements of matrix1" << endl;
	matrix1 = new int*[row];
	for(i = 0; i<row; i++) {
		matrix1[i] = new int[col];
		for(j = 0; j<col; j++) {
			cout << "Enter member element of index: " << i << j << " is ";
			cin >> matrix1[i][j];
			cout << endl;
		}
	}

	cout << "Enter the number of members of matrix2 per row" << endl;
	cin  >> row;
	col = row;

	cout << "Enter the elements of matrix2" << endl;
	matrix2 = new int*[row];
	for(i = 0; i<row; i++) {
		matrix2[i] = new int[col];
		for(j = 0; j<col; j++) {
			cout << "Enter member element of index: " << i << j << " is ";
			cin >> matrix2[i][j];
			cout << endl;
		}
	}

	cout << "Matrix 1 is: " << endl;
	for(i = 0; i<row; i++) {
		for(j = 0; j<col; j++) {
			cout << matrix1[i][j] << " ";
		}
		cout << endl;
	}

	cout << "Matrix 2 is: " << endl;
	for(i = 0; i<row; i++) {
		for(j = 0; j<col; j++) {
			cout << matrix2[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;

	omatrix = new int*[row];
        for(i = 0; i<row; i++) {
                omatrix[i] = new int[col];
        }

	for(i=0; i<row; i++) {
		for(j=0; j<col; j++) {
			omatrix[i][j] = 0;
			for(k = 0; k<row; k++) {
				omatrix[i][j] = omatrix[i][j] + (matrix1[i][k] * matrix2[k][j]);
			}
		}
	}

	for(i = 0; i<row; i++) {
		for(j = 0; j<col; j++) {
			cout << omatrix[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;

	for(i = 0; i<row; i++) {
		delete []matrix1[i];
		delete []matrix2[i];
		delete []omatrix[i];
	}
	delete []matrix1;
	delete []matrix2;
	delete []omatrix;

}
