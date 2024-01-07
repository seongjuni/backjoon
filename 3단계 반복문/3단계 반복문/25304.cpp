#include <iostream>
using namespace std;

int main()
{
	int X, N, result, all = 0;
	cin >> X;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		int a, b;
		cin >> a >> b;
		result = a * b;
		all += result;
	}
	if (X == all)
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}
}

