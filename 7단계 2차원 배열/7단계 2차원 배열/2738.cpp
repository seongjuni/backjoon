#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    // 두 행렬 A와 B를 저장할 2차원 벡터 선언
    vector<vector<int>> A(N, vector<int>(M));
    vector<vector<int>> B(N, vector<int>(M));

    // 행렬 A의 원소 입력
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> A[i][j];
        }
    }

    // 행렬 B의 원소 입력
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> B[i][j];
        }
    }

    // 두 행렬의 원소를 더하여 출력
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cout << A[i][j] + B[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
