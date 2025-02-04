#include<iostream>
using namespace std;
int main()
{
	int arr[6] = { 1,2,3,6,5,4 };
	int temp;

	temp = arr[5];
	arr[5] = arr[0];
	arr[0] = 0;

	for (int i = 0; i < 5; i++)
	{
		arr[i] = arr[i + 1];
	}
	arr[4] = temp;
	for (int i = 0; i < 6; i++)
	{
		cout << arr[i] << " ";
	}
}
