#include<iostream>
using namespace std;
int main()
{
	int arr[10] = {};
	int reverseArr[10] = {};
	int j = 9;

	cout << "Enter elements:\n";
	for (int i = 0; i < 10; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < 10; i++)
	{
		reverseArr[i] = arr[j];
		j--;
	}
	for (int i = 0; i < 10; i++)
	{
		cout << reverseArr[i] << " ";
	}
}