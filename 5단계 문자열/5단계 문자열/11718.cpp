#include <iostream>
#include <string>
using namespace std;

int main() {
    string line;

    while (getline(cin, line)) {
        if (line.length() > 100) break;

        if (!line.empty() && (line[0] == ' ' || line[line.length() - 1] == ' ')) break;

        cout << line << endl;
    }
}