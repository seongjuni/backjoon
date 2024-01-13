#include <iostream>
#include <string>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int T, R;
    string S, P;
    cin >> T;

    for (int i = 0; i < T; i++) {
        cin >> R >> S;
        P = "";

        for (int j = 0; j < S.length(); j++) {
            for (int k = 0; k < R; k++) { 
                P += S[j];
            }
        }
        cout << P << endl;
    }
}