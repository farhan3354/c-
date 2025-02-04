#include<iostream>
using namespace std;
int main()
{
	int arr[6] = { 1,2,3,2,2,4 };
	int target;
	int rep;
	int count = 0;

	cout << "Enter number to replace: ";
	cin >> target;
	cout << "Enter number to be replaced by: ";
	cin >> rep;

	for (int i = 0; i < 6; i++)
	{
		if (arr[i] == target)
		{
			count ++;
		}
	}
	if (count >= 3)
	{
		for (int i = 0; i < 6; i++)
		{
			if (arr[i] == target)
			{
				arr[i] = rep;
			}
		}
		cout << "New Array: ";
		for (int i = 0; i < 6; i++)
		{
			cout << arr[i] << " ";
		}
	}
	else
	{
		cout << target << " is not present more than 3 times hence can not be replaced" << endl;
	}
}
