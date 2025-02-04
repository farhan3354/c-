#include <iostream>
using namespace std;

int main() {

	int a1, a2, a3, a4, a5, res;

	cout << "Enter num1 :";
	cin >> a1;
	cout << "Enter num2 :";
	cin >> a2;
	cout << "Enter num3 :";
	cin >> a3;
	cout << "Enter num4 :";
	cin >> a4;
	cout << "Enter num5 :";
	cin >> a5;

	res = a1 + a2 + a3 + a4 + a5 / 5;

	cout << "the average is " << res;
	
}