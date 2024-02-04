#include <iostream>
using namespace std;

void algorithm(int num) {
    if (num <= 1) {
        return;
    }

    for (int i = 2; i * i <= num; i++) {
        while (num % i == 0) {
            cout << i << '\n';
            num /= i;
        }
    }

    if (num > 1) {
        cout << num << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    algorithm(N);

    return 0;
}
