#include <iostream>
using namespace std;

const int SIZE = 100;
bool paper[SIZE][SIZE] = { false };

int main()
{
	int N, x, y;;

	cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> x >> y;
        for (int j = x; j < x + 10; j++) {
            for (int k = y; k < y + 10; k++) {
                paper[j][k] = true;
            }
        }
    }
	
    int area = 0;
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (paper[i][j]) area++;\
        }
    }

    cout << area;
}