#include <iostream>
using namespace std;

int main()
{
	string S[5];
	int maxLength = 0;

	for (int i = 0; i < 5; i++)
	{
		cin >> S[i];
		if (maxLength < S[i].length())
		{
			maxLength = S[i].length();
		}
	}
	for (int i = 0; i < maxLength; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (i < S[j].length()) 
			{
				cout << S[j][i];
			}
		}
	}
}