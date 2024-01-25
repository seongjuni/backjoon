#include <iostream>
using namespace std;

int main()
{
	string N;
	int B;
	cin >> N >> B;
	int res = 0;
	for (int i = 0; i < N.length(); i++)
	{
		if ('0' <= N[i] && N[i] <= '9')
			res = res * B + (N[i] - '0');
		else
			res = res * B + (N[i] - 'A' + 10);
	}
	cout << res;
}