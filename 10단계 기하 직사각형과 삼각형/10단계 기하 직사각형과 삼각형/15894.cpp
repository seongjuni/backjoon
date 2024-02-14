#include <iostream>
using namespace std;

int main()
{
	long long n, round;
	cin >> n;

	round = 3 * n + n;

	cout << round << endl;
}

/*
#include <iostream>
using namespace std;

int main() 
{
    long long n;
    cin >> n;

    long long round = (n - 1) * 4 + 4;
    cout << round << endl;

    return 0;
}
*/