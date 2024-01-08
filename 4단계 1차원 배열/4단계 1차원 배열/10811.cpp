#include <iostream>
#include <vector>
#include <algorithm>
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
	for (int k = 0; k < M; k++)
	{
		int i, j;
		cin >> i >> j;
		i--;
		j--;

		for (; i < j; i++, j--) {
			int temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
		/*while (i < j) {
			swap(arr[i], arr[j]);
			i++;
			j--;
		}*/
	}
	for (int k = 0; k < N; k++)
	{
		cout << arr[k] << " ";
	}
}