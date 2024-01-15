#include <iostream>
using namespace std;

bool check(const string& alphabet)
{
	if (alphabet.length() < 2 || alphabet.length() > 15) return false;
	return true;
}

int time(char ch)
{
	if (ch < 'D') return 3;
	if (ch < 'G') return 4;
	if (ch < 'J') return 5;
	if (ch < 'M') return 6;
	if (ch < 'P') return 7;
	if (ch < 'T') return 8;
	if (ch < 'W') return 9;
	return 10;
}

int totalTime(const string& alphabet)
{
	int total = 0;
	for (char ch : alphabet)
	{
		total += time(ch);
	}
	return total;
}

int main()
{
	string num;

	do
	{
		cin >> num;
	} while (!check(num));

	cout << totalTime(num);
}