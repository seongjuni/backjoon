#include <iostream>
#include <string>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int T;
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		string S;
		cin >> S;
		cout << S[0] << S[S.length() - 1] << "\n";
	}
}