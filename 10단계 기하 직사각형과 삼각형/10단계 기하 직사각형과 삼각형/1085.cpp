#include <iostream>
using namespace std;

int main()
{
	int x, y, w, h;
	cin >> x >> y >> w >> h;
	int xgap, ygap;

	xgap = w - x;
	ygap = h - y;
	if (xgap > x)
	{
		xgap = x;
	}
	if (ygap > y)
	{
		ygap = y;
	}
	if (xgap > ygap)
	{
		cout << ygap;
	}
	else if (xgap < ygap)
	{
		cout << xgap;
	}
	else
	{
		cout << x;
	}
}

/*
#include <iostream>
using namespace std;

int main() {
    int x, y, w, h;
    cin >> x >> y >> w >> h;

    int min_x_gap = min(x, w - x);
    int min_y_gap = min(y, h - y);
    int min_gap = min(min_x_gap, min_y_gap);
    cout << min_gap << endl;

    return 0;
}
*/