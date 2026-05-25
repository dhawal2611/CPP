#include <iostream>
using namespace std;

int main() {
	float hourly_wage = 23.50;
	string employee_name;
	int age;

	cout << "Enter Employee Name and press enter" << endl;
	getline(cin, employee_name);
	cout << "Enter Employee Age" << endl;
	cin >> age;

	cout << "Employee Details are: " << endl;
	cout << "Name: " << employee_name << endl;
	cout << "Age: " << age << endl;
	cout << "hourly_wage: " << hourly_wage << endl;
}
