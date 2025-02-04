#include <iostream>
using namespace std;

int main() {

	int number, square, cube;

	cout << "Enter number : ";
	cin >> number;

	cout << "\tNumber\t" << "\tSquare\t"  << "\tCube" << endl;
	cout << "-----------------------------------------------" << endl;
	
	square = number * number;
	cube = number * number * number;
	cout <<"\t" << number << "\t\t" << square << "\t\t" <<cube<< endl;

	cout << "\t" << (number + 1) << "\t\t" << (number + 1) * (number + 1) << "\t\t" << (number + 1) * (number + 1) * (number + 1) << endl;
	cout << "\t" << (number + 2) << "\t\t" << (number + 2) * (number + 2) << "\t\t" << (number + 2) * (number + 2) * (number + 2) << endl;
	cout << "\t" << (number + 3) << "\t\t" << (number + 3) * (number + 3) << "\t\t" << (number + 3) * (number + 3) * (number + 3) << endl;
	cout << "\t" << (number + 4) << "\t\t" << (number + 4) * (number + 4) << "\t\t" << (number + 4) * (number + 4) * (number + 4) << endl;
	cout << "\t" << (number + 5) << "\t\t" << (number + 5) * (number + 5) << "\t\t" << (number + 5) * (number + 5) * (number + 5) << endl;

}