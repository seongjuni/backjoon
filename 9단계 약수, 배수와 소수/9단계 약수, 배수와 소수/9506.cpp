#include <iostream>
#include <vector>
using namespace std;

int main() {
    while (true) {
        int n;
        cin >> n;

        if (n == -1) {
            break;  // 입력의 마지막인 경우 종료
        }

        int sum = 0;
        vector<int> divisors;

        for (int i = 1; i <= n / 2; i++) {
            if (n % i == 0) {
                sum += i;
                divisors.push_back(i);
            }
        }

        if (sum == n) {
            cout << n << " = ";
            for (size_t i = 0; i < divisors.size(); i++) {
                cout << divisors[i];
                if (i < divisors.size() - 1) {
                    cout << " + ";
                }
            }
            cout << '\n';
        }
        else {
            cout << n << " is NOT perfect.\n";
        }
    }

    return 0;
}
