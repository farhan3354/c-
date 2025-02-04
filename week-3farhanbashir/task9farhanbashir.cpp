#include <iostream>
using namespace std;

int main() {

	int width, length, area, Perimeter;

	cout << "Enter the width \t";
	cin >> width;
	cout << "Enter the length \t";
	cin >> length;
	area = width * length;
	cout << "Area of Rectangle =\t" << area<<endl;
	Perimeter = 2*(width+length);
	cout << "Perimeter of Rectangle =\t" <<Perimeter << endl;



}