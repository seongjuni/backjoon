#include <iostream>
using namespace std;

int main()
{
	int N, room = 0;
	cin >> N;

	for (int i = 2; i <= N; room++)
	{
		i += 6 * room;
	}

	if (N == 1)
	{
		room = 1;
	}
	cout << room;
}