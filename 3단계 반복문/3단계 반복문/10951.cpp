#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int A, B;
    for (int i = 0;; i++)
    {
        cin >> A >> B;
        if (cin.eof() == true) {
            // cin���� �Է¹��� ���� ������
            // cin.eof()�� true�� ��ȯ�Ѵ�. �翬�� �׷��� ������ false ��ȯ
            break;
        }
        cout << A + B << "\n";
    }
}