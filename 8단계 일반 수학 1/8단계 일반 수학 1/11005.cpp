#include <iostream>
using namespace std;

int main()
{
	int N, B;
	cin >> N >> B;
	string res ;
	
	for (; N > 0; N /= B)
	{
		int rem = N % B;
		if (rem < 10)
			res += (char)(rem + '0');
		else
			res += (char)(rem + 'A' - 10);
	}

	for (int i = 0; i < res.length() / 2; i++)
	{
		char rem = res[i];
		res[i] = res[res.length() - 1 - i];
		res[res.length() - 1 - i] = rem;
	}
	cout << res;
}