#include<iostream>
using namespace std;
int main()
{
	int size = 5;
	int n;
	
	cout << "Enter number of times to shift array: ";
	cin >> n;
	size = size + n;

	int arr[size] = { 34,76,24,6,45 };


	for (int j = 1; j <= n; j++)
	{
		for (int i = size; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = 0;
	}
	
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
}