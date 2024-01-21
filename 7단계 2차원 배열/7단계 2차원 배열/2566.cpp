#include <iostream>
using namespace std;

int main() {
    int arr, maxVal = 0, maxX = 0, maxY = 0;

    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) {
            cin >> arr;
            if (arr >= maxVal) {
                maxX = i;
                maxY = j;
                maxVal = arr;
            }
        }
    }
    cout << maxVal << "\n";
    cout << maxX << " " << maxY;
}