#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int arr[30];

	for (int i = 0; i < 30; i++)
	{
		arr[i] = i + 1;
	}
	for (int i = 0; i < 28; i++)
	{
		int n;
		cin >> n;
		arr[n - 1] = 0;
	}
	sort(arr, arr + 30);
	cout << arr[28] << "\n" << arr[29];
}