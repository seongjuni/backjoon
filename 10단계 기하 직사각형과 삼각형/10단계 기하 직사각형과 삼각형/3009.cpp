#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int x[3] = { }, y[3] = { };

	for (int i = 0; i < 3; i++)
	{
		cin >> x[i] >> y[i];
	}

	sort(x, x + 3);
	sort(y, y + 3);

	int x4, y4;

	if (x[0] == x[1])
	{
		x4 = x[2];
	}
	else
	{
		x4 = x[0];
	}

	if (y[0] == y[1])
	{
		y4 = y[2];
	}
	else
	{
		y4 = y[0];
	}

	cout << x4 << " " << y4 << endl;
	
	return 0;
}

/*
#include <iostream>
using namespace std;

int main() {
	int x1, y1, x2, y2, x3, y3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

	int x4, y4;

	if (x1 == x2) x4 = x3;
	else if (x1 == x3) x4 = x2;
	else x4 = x1;

	if (y1 == y2) y4 = y3;
	else if (y1 == y3) y4 = y2;
	else y4 = y1;

	cout << x4 << " " << y4 << endl;

	return 0;
}

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int x[3], y[3];


	for (int i = 0; i < 3; ++i) {
		cin >> x[i] >> y[i];
	}

	sort(x, x + 3);
	sort(y, y + 3);

	int x4 = (x[0] == x[1]) ? x[2] : x[0];
	int y4 = (y[0] == y[1]) ? y[2] : y[0];

	cout << x4 << " " << y4 << endl;

	return 0;
}
*/