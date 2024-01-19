#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N, cnt = 0;
	cin >> N;
	string S;

	for (int i = 0; i < N; i++)
	{
		cin >> S;

		for (int j = 0; j < S.length() - 1; j++)
		{
			if (S[j] != S[j + 1])
			{
				cnt++;
			}
		}
	}
	cout << N - cnt;
}