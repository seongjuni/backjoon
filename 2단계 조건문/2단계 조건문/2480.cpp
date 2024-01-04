#include <iostream>
#include <algorithm>
using namespace std;

int dice_Prize(int dice[])
{
	sort(dice, dice + 3);

	if (dice[0] == dice[2])
	{
		return 10000 + dice[0] * 1000;
	}
	else if (dice[0] == dice[1] || dice[1] == dice[2])
	{
		return 1000 + dice[1] * 100;
	}
	else
	{
		return dice[2] * 100;
	}
}

int main()
{
	int dice[3];

	for (int i = 0; i < 3; i++)
	{
		cin >> dice[i];
	}

	int prize = dice_Prize(dice);

	cout << prize;
}
