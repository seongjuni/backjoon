#include <iostream>
using namespace std;

int main()
{
	int A, B, C;
	
	cin >> A >> B; //23 59
	cin >> C; //1000
	
	B += C;

	if (B / 60 > 0) //1���� Ŭ ���
	{
		A += B / 60;
		B %= 60;
		if (A > 22)
		{
			A %= 24;
		}
	}
	
	cout << A << " " << B;
}