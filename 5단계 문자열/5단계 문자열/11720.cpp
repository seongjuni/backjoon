#include <iostream>
using namespace std;

int main()
{
	int N, result = 0;
	cin >> N;

	string S;
	cin >> S;

	for (int i = 0; i < N; i++)
	{
		result += S[i] - '0';
	}
	cout << result;
}