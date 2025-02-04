#include <iostream>
using namespace std;

int main() {

	int minutes, hours, number;
	cout << "Enter the hours:";
	cin >> hours;
	cout << "Enter the minutes:";
	cin >> minutes;
	number = (hours * 60)+ minutes;
	cout << "\t Minutes is  " << number << endl;


}