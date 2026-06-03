#include <iostream>
using namespace std;

class st {
	private:
		int data;
	public:
		void vSetData(int a);
		void vPrintData();
		st clAddData(st &);
		void vAddData(st &, st &);
		st clAddData2Arg(st &, st &);
};

void st::vSetData(int a) {
	data = a;
}

void st::vPrintData() { // As function is define outside, So need to use scope resolution
			// operator to tell compiler its a part of class st
	cout << "Addation is: " << data << endl;
}

st st::clAddData(st &a) {
	static st result;
	result.data = data + a.data;
	return result;
}

st st::clAddData2Arg(st &a, st &b) {
	static st result;
	result.data = b.data + a.data;
	return result;
}

void st::vAddData(st &a, st &b) {
	data = a.data + b.data;
}

int main() {
	st data1, data2, result, result1;

	data1.vSetData(10);
	data2.vSetData(20);
	result = data1.clAddData(data2);
	result.vPrintData();
	result.vAddData(data1, data2);
	result.vPrintData();
	result1 = result.clAddData2Arg(data1, data2);
	result.vPrintData();
	result1.vPrintData();

}
