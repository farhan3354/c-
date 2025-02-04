#include<iostream>
using namespace std;
int main()
{
	int arr[10] = {342,32,69,3,876,5,12,876,43,69};
	int target, count = 0;

	cout << "Enter target no: ";
	cin >> target;
	for (int i = 0; i < 10; i++)
	{
		if (arr[i] == target)
		{
			count++;
		}
	}
	if (count > 0)
	{
		cout << "Number is present: " << count << " times";
	}
	else
	{
		cout << "Number is not present";
	}
}