#include<iostream>
using namespace std;
int main()
{
	int arr[10] = {12,45,76,13,6,5,7,4,79,56};
	int temp;
	int n;

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10 - 1; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	cout << "Enter n: ";
	cin >> n;

	cout << "The " << n << "th largest number is: " << arr[n - 1];
}