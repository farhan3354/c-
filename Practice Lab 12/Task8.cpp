#include<iostream>
using namespace std;
int main()
{
	int arr[10] = {342,32,69,3,-876,5,12,876,43,69};
	int max1 = -999, indexOfLargest;
	int max2 = -999;

	for (int i = 0; i < 10; i++)
	{
		if (arr[i] > max1)
		{
			max1 = arr[i];
			indexOfLargest = i;
		}
	}
	arr[indexOfLargest] = 0;

	for (int i = 0; i < 10; i++)
	{
		if (arr[i] > max2)
		{
			max2 = arr[i];
			indexOfLargest = i;
			cout << "Second largest number is at index " << i;
			break;
		}
	}
}