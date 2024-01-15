#include <iostream>
#include <algorithm>
using namespace std;

bool check(string num)
{
	if (num.length() != 3) return false;
	if (num.find('0') != string::npos) return false;

	return true;
}

string change(string num)
{
	char first = num[0];
	num[0] = num[2];
	num[2] = first;
	return num;
}

int main()
{
	string A, B;
	do
	{
		cin >> A >> B;
	} 
	while (A == B || !check(A) || !check(B));

	A = change(A);
	B = change(B);

	if (A > B)
	{
		cout << A;
	}
	else
	{
		cout << B;
	}
}