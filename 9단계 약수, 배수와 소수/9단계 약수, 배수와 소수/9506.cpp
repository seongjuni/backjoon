#include <iostream>
using namespace std;

int main()
{
	int n;

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	while (true)
	{
		cin >> n;

		if (n == -1)
		{
			break;
		}

		int res = 0;

		for (int i = 1; i < n; i++) {
			if (n % i == 0) {
				res += i;
			}
		}


		if (res == n)
		{
			cout << n << " = 1";
			for (int i = 2; i < n; i++)
			{
				if (n % i == 0) {
					cout << " + " << i;
				}
			}
			cout << endl;
		}

		else
		{
			cout << n << " is NOT perfect." << endl;;
		}
		
		res = 0;
	}

	return 0;
}