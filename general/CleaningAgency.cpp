#include <iostream>
using namespace std;

int main() {
	int SmallRoom = 0, LargeRoom = 0;
	int Cost = 0;
	float CGST = 0, SGST = 0;
	float Total = 0;

	cout << "Hello, welcome to Dhawal's Carpet Cleaning Service." << endl;

	cout << "How many small rooms would you like to clean? ";
	cin >> SmallRoom;
	cout << "How many large rooms would you like to clean? ";
	cin >> LargeRoom;

	cout << "Estimate for carpet cleaning service" << endl;
	cout << "Number of small rooms: " << SmallRoom << endl;
	cout << "Number of large rooms: " << LargeRoom << endl;
	cout << "Price per small room: Rs 2500" << endl;
	cout << "Price per large room: Rs 3500" << endl;
	Total = ((SmallRoom * 2500) + (LargeRoom * 3500));
	cout << "Cost: Rs " << Total << endl;
	CGST = (Total*6)/100;
	cout << "CGST: Rs " << CGST << endl;
	SGST = (Total*6)/100;
	cout << "SGST: Rs " << SGST << endl;
	cout << "===========================================================" << endl;
	cout << "Total estimate: Rs " << (Total + CGST + SGST) << endl;
	cout << "This estimate is valid for 30 days" << endl;
	cout << "===========================================================" << endl;




}
