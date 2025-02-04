#include<iostream>
using namespace std;
int main()
{
	int arr[5] = { 34,76,24,6,45 };
	int temp;
	
	temp = arr[0];

	for (int i = 0; i < 5 - 1; i++)
	{
		arr[i] = arr[i + 1];
	}
	arr[4] = temp;
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << " ";
	}
}