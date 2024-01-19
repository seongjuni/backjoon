#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	string S, K;
	cin >> S;

	K = S;
	reverse(S.begin(), S.end());
	if (S == K)
	{
		cout << "1";
	}
	else
	{
		cout << "0";
	}
}