#include <iostream>
using namespace std;

int main()
{
	int arr[9], max = 0, num = 0;

	for (int i = 0; i < 9 ; i++)
	{
		cin >> arr[i];
		if (arr[i] > max)
		{
			max = arr[i];
			num = i + 1;
		}
	}
	cout << max << "\n" << num;
}