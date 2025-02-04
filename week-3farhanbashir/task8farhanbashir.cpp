#include <iostream>
using namespace std;

int main() {
	float pi = 3.14;
	int raduis, area;
	cout << "Enter the raduis value";
	cin >> raduis;
	area = pi * (raduis * raduis);
	cout << "Total Area is :" << area;
	return 0;
}