#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string S;
    int count = 0;

    getline(cin, S);

    if (!S.empty()) {
        S.erase(0, S.find_first_not_of(' '));
        S.erase(S.find_last_not_of(' ') + 1);
    }

    if (!S.empty()) {
        count = 1;
        for (char c : S) {
            if (c == ' ') {
                count++;
            }
        }
    }
    cout << count;
}