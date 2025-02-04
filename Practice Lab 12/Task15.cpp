#include<iostream>
using namespace std;
int main()
{
	int arr[6] = { 1,2,3,6,2,4 };
	int target;
	int occurance1, occurance2;

	cout << "Enter number to be found: ";
	cin >> target;

	for (int i = 0; i < 6; i++)
	{
		if (arr[i] == target)
		{
			occurance1 = i;
			break;
		}
	}
	for (int i = 5; i >= 0; i--)
	{
		if (arr[i] == target)
		{
			occurance2 = i;
			break;
		}
	}
	if (occurance1 == occurance2)
	{
		cout << "Number is present only one time";
	}
	else
	{
		cout << "First occurance at index: " << occurance1 << "\nLast occurance at index: " << occurance2;
	}
}
