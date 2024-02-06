#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N, cnt = 0;
	cin >> N;

	for (int i = 0; i < N; i++) 
	{
		int dec;
		cin >> dec;

		if (dec == 1) continue;

		int checkDec = 0;
		for (int j = 1; j <= dec; j++)
		{
			if (dec % j == 0)
			{
				checkDec++;
				if (checkDec > 2) break;
			}
		}

		if (checkDec == 2)
		{
			cnt++;
		}
	}

	cout << cnt << endl;
}

/*
#include <iostream>
using namespace std;

bool check(int dec)
{
	int cnt = 0;

	if (dec == 1)
	{
		return 0;
	}

	for (int i = 1; i <= dec; i++)
	{
		if (dec % i == 0)
		{
			cnt++;
		}
	}

	if (cnt == 2)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N, cnt = 0;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int dec;
		cin >> dec;

		if (check(dec) == 1)
		{
			cnt++;
		}
	}

	cout << cnt << endl;
}
*/