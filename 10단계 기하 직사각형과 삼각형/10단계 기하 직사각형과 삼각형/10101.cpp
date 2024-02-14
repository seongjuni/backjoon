#include <iostream>
#include <vector>
using namespace std;

string checkAngles(const vector<int>& angles)
{
	int sum = 0;
	for (int angle : angles)
	{
		sum += angle;
	}

	if (sum == 180)
	{
		if (angles[0] == angles[1] && angles[1] == angles[2])
		{
			return "Equilateral";
		}
		else if (angles[0] == angles[1] || angles[1] == angles[2] || angles[2] == angles[0])
		{
			return "Isosceles";
		}
		else
		{
			return "Error";
		}
	}
}

int main()
{
	vector<int> angles(3);

	for (int i = 0; i < 3; i++)
	{
		cin >> angles[i];
	}
	
	string result = checkAngles(angles);
	cout << result << endl;

	return 0;
}