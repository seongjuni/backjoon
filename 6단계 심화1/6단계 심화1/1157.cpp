#include <iostream>
using namespace std;

int main()
{
	string S;
	int alpha[26] = {0, }, count = 0;
	cin >> S;

	for (int i = 0; i < S.length(); i++)
	{
		if (S[i] < 'a')
		{
			alpha[S[i] - 'A']++;
		}
		else
		{
			alpha[S[i] - 'a']++;
		}
	} // ºóµµ¼ö Ã¼Å©

	int max = 0, mostAlpha = 0;

	for (int i = 0; i < 26; i++)
	{
		if (max < alpha[i])
		{
			max = alpha[i];
			mostAlpha = i;
		}
	}

	for (int i = 0; i < 26; i++)
	{
		if (max == alpha[i])
		{
			count++;
		}
	}

	if (count > 1)
	{
		cout << "?";
	}
	else
	{
		cout << (char)(mostAlpha + 65);
	}
}