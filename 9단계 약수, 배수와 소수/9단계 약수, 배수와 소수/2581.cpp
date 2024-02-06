#include <iostream>
using namespace std;

int main()
{
	int M, N, min, res = 0;
	cin >> M >> N;

	for (; M <= N; M++)
	{
		int cnt = 0;

		for (int i = 1; i <= M; i++)
		{
			if (M % i == 0)
			{
				cnt++;
			}
		}

		if (cnt == 2)
		{
			if (res == 0)
			{
				min = M;
			}
			res += M;
		}
	}

	if (res == 0)
	{
		cout << "-1" << endl;
	}
	else
	{
		cout << res << "\n" << min << endl;
	}

	return 0;
}