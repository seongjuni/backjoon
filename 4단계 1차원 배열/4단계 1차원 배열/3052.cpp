#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int arr[10], count = 0;
	for (int i = 0; i < 10; i++)
	{
		cin >> arr[i];
		arr[i] %= 42;
	}
	sort(arr, arr + 10);
	for (int i = 0; i < 10; i++)
	{
		if (arr[i] != arr[i + 1])
		{
			count++;
		}
	}
	cout << count;
}


//int main()
//{
//	int arr[10];
//	for (int i = 0; i < 10; i++)
//	{
//		cin >> arr[i];
//		arr[i] %= 42;
//	}
//	// �迭 ����
//	sort(arr, arr + 10);
//	// unique �Լ��� ����Ͽ� �ߺ� ����
//	auto it = unique(arr, arr + 10);
//	// unique �Լ��� �ߺ����� ���� ������ �迭�� �պκ����� �̵���Ű��,
//	// ������ �κ��� �������� �����Ƿ�, it-arr�� ����ũ�� ����� ���� ���
//	cout << distance(arr, it);
//}