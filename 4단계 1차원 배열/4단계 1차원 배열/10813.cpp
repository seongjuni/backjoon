#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int N, M;
	cin >> N >> M;
	vector<int> arr(N);

	for (int k = 0; k < N; k++)
	{
		arr[k] = k + 1;
	}

	int i, j, num;
	for (int k = 0; k < M; k++)
	{
		cin >> i >> j;
		num = arr[i - 1];
		arr[i - 1] = arr[j - 1];
		arr[j - 1] = num;
	}

	for (int k = 0; k < N; k++)
	{
		cout << arr[k] << " ";
	}
}