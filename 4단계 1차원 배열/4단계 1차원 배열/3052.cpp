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
//	// 배열 정렬
//	sort(arr, arr + 10);
//	// unique 함수를 사용하여 중복 제거
//	auto it = unique(arr, arr + 10);
//	// unique 함수는 중복되지 않은 값들을 배열의 앞부분으로 이동시키고,
//	// 나머지 부분은 변경하지 않으므로, it-arr로 유니크한 요소의 수를 계산
//	cout << distance(arr, it);
//}