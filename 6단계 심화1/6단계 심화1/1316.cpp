#include <iostream>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int N, cnt = 0;
    cin >> N;

    for (int i = 0; i < N; i++) {
        string S;
        cin >> S;
        bool isGroupWord = true;

        for (int j = 0; j < S.length() - 1; j++) {
            if (S[j] != S[j + 1]) {
                for (int k = j + 1; k < S.length(); k++) {
                    if (S[j] == S[k]) {
                        isGroupWord = false;
                        break;
                    }
                }
            }
            if (!isGroupWord) {
                break;
            }
        }

        if (isGroupWord) {
            cnt++;
        }
    }

    cout << cnt;
}
/*
#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int N, cnt = 0;
    cin >> N;
    string S;

    for (int i = 0; i < N; i++)
    {
        cin >> S;

        for (int j = 0; j < S.length() - 1; j++)
        {
            if (S[j] != S[j + 1])
            {
                for (int k = j + 1; k < S.length(); k++)
                {
                    if (S[j] == S[k])
                    {
                        cnt++;
                        break;
                    }
                }
                break;
            }
        }
    }
    cout << N - cnt;
}
*/