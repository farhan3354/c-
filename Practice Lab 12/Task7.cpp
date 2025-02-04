#include<iostream>
using namespace std;
int main()
{
	int array1[10] = {342,32,69,3,-876,5,12,876,43,69};
	int array2[10] = { 876,45,54,12,7,34,34,32,87,342 };
	int min = 999, max = -999;

	for (int i = 0; i < 10; i++)
	{
		if (array1[i] > max)
		{
			max = array1[i];
		}
	}
	for (int i = 0; i < 10; i++)
	{
		if (array2[i] == max)
		{
			cout << "Max number of array 1 (" << max << ") is at " << i << " index in array 2";
		}
	}
}