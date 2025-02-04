#include<iostream>
using namespace std;
int main()
{
	int arr[10] = {342,32,69,3,-876,5,12,876,43,69};
	int max = -999, min = 999;

	for (int i = 0; i < 10; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
		else if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	cout << "Maximum number: " << max << "\nMinimum number: " << min;
}