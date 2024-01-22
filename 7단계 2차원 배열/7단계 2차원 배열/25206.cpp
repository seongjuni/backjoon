#include <iostream>
using namespace std;

double majorAvg(double score, string grade)
{
	double avg = 0;
	if (grade == "A+")
	{
		avg = score * 4.5;
	}
	else if (grade == "A0")
	{
		avg = score * 4.0;
	}
	else if (grade == "B+")
	{
		avg = score * 3.5;
	}
	else if (grade == "B0")
	{
		avg = score * 3.0;
	}
	else if (grade == "C+")
	{
		avg = score * 2.5;
	}
	else if (grade == "C0")
	{
		avg = score * 2.0;
	}
	else if (grade == "D+")
	{
		avg = score * 1.5;
	}
	else if (grade == "D0")
	{
		avg = score * 1.0;
	}
	else if (grade == "F")
	{
		avg = 0;
	}

	return avg;
}

int main()
{
	string major, grade;
	double score, maxscore = 0, hap = 0;

	for (int i = 0; i < 20; i++)
	{
		cin >> major >> score >> grade;
		if (grade == "P")
		{

		}
		else
		{
			hap += majorAvg(score, grade);
			maxscore += score;
		}
	}

	cout << hap / maxscore;
}