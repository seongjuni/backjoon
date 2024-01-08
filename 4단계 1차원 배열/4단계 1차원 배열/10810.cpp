#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    vector<int> arr(N, 0);

    int i, j, k;
    for (int b = 0; b < M; b++)
    {
        cin >> i >> j >> k;
        for (i; i <= j; i++)
        {
            arr[i-1] = k;
        }
    }
    for (int b = 0; b < N; b++)
    {
        cout << arr[b] << " ";
    }
}