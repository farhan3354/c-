#include<iostream>
using namespace std;
int main()
{
	int arr[6] = { 34,76,24,6,45 };
	
	for (int i = 5; i > 0; i--)
	{
		arr[i] = arr[i - 1];
	}
	arr[0] = 0; //As array is shifted towards right, the first index will contain garbage value. Thats why it is initialized as zero.
	for (int i = 0; i < 6; i++)
	{
		cout << arr[i] << " ";
	}
}