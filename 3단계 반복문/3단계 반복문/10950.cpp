#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int T;
    cin >> T;
    vector<int> result(T);

    for (int i = 0; i < T; i++)
    {
        int A, B;
        cin >> A >> B;
        result[i] = A + B;
    }

    // 결과를 출력합니다.
    for (int i = 0; i < T; i++)
    {
        cout << result[i] << endl;
    }

    return 0;
}