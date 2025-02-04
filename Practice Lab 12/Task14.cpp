#include<iostream>
using namespace std;
int main()
{
	int arr[6] = { 1,2,3,6,2,4 };
	int target;
	int rep;

	cout << "Enter number to be found: ";
	cin >> target;
	cout << "Enter number to be replaced by: ";
	cin >> rep;

	for (int i = 5; i >=0; i--)
	{
		if (arr[i] == target)
		{
			arr[i] = rep;
			break;
		}
	}
	cout << "\nNew array: ";
	for (int i = 0; i < 6; i++)
	{
		cout << arr[i] << " ";
	}
}
