#include <iostream>
using namespace std;

int main() {

	int minutes, hours, number;
	cout << "Enter the number:";
	cin >> number;
	hours = number / 60;
	cout << "Hours is  " << hours;
	minutes = number % 60;
	cout << "\t Minutes is  " << minutes << endl;


}