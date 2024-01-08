#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int N, max, min;
	cin >> N;

	vector<int> arr(N);

	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}

	sort(arr.begin(), arr.end());

	cout << arr[0] << " " << arr[N-1];
}