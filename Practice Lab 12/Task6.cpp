#include<iostream>
using namespace std;
int main()
{
	int arr[10] = {342,32,69,3,-876,5,12,876,43,69};
	int count = 0;

	for (int i = 0; i < 10; i += 2)
	{
		if (arr[i] % 2 == 0)
		{
			count++;
		}
	}
	cout << "Number of even number present on even index are: " << count;
}