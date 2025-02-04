#include<iostream>
using namespace std;
int main()
{
	int arr[6] = { 1,2,3,6,2,4 };
	int target;
	int rep;
	bool flag = false;

	cout << "Enter number to replace: ";
	cin >> target;
	cout << "Enter number to be replaced by: ";
	cin >> rep;

	for (int i = 0; i < 6; i++)
	{
		if (arr[i] == target)
		{
			arr[i] = rep;
			flag = true;
		}
	}
	if (flag == true)
	{
		cout << "Replace has been done";
	}
	else
	{
		cout << "Replace hasn't been done";
	}
	cout << "\nNew array: ";
	for (int i = 0; i < 6; i++)
	{
		cout << arr[i] << " ";
	}
}
