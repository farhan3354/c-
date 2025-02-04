#include<iostream>
using namespace std;
int main()
{
	int Array1[10] = {342,32,6,3,876,5,12,876,43,6};
	int Array2[10] = {};
	int j = 9;

	cout << "Array1: ";
	for (int i = 0; i < 10; i++)
	{
		cout << Array1[i] << " ";
	}
	for (int i = 0; i < 10; i++)
	{
		Array2[i] = Array1[j];
		j--;
	}
	cout << "\nArray2: ";
	for (int i = 0; i < 10; i++)
	{
		cout << Array2[i] << " ";
	}
}