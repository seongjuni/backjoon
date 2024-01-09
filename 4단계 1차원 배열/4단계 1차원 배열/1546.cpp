#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int N, M;
	double avg = 0;
	cin >> N;
	vector<double> arr(N);
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}
	sort(arr.begin(), arr.end());
	M = arr[N - 1];
	for (int i = 0; i < N; i++)
	{
		arr[i] = arr[i] / M * 100;
	}
	for (int i = 0; i < N; i++)
	{
		avg += arr[i];
	}
	avg /= N;
	cout << avg;
}