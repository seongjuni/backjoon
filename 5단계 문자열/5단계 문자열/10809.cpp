#include <iostream>
#include <vector>
using namespace std;

int main() {
    string S;
    cin >> S;

    vector<int> positions(26, -1);

    for (int i = 0; i < S.length(); i++) {
        if (positions[S[i] - 'a'] == -1) {
            positions[S[i] - 'a'] = i;
        }
    }

    for (int i = 0; i < 26; i++) {
        cout << positions[i] << " ";
    }
}