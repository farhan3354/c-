#include<iostream>
using namespace std;
int main()
{
	int arr[10] = {342,32,6,3,876,5,12,876,43,6};
	int target;

	cout << "Enter target no: ";
	cin >> target;
	for (int i = 0; i < 10; i++)
	{
		if (arr[i] == target)
		{
			cout << "Number is at index " << i;
			break;
		}
		else
		{
			cout << "Number not found";
			break;
		}
	}
}