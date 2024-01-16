#include <iostream>
using namespace std;

int main()
{
	int k = 1, q = 1, r = 2, b = 2, kn = 2, p = 8;
	int dk, dq, dr, db, dkn, dp;

	cin >> dk >> dq >> dr >> db >> dkn >> dp;

	cout << k - dk << " " << q - dq << " " << r - dr << " " << b - db << " " << kn - dkn << " " << p - dp;
}