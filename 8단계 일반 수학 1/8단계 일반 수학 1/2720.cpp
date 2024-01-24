#include <iostream>
using namespace std;

int main() 
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int T;
    cin >> T; 
    while (T--) {
        int C;
        cin >> C; 

        int quarters = C / 25; 
        C %= 25;
        int dimes = C / 10; 
        C %= 10;
        int nickels = C / 5; 
        C %= 5;
        int pennies = C; 
      
        cout << quarters << " " << dimes << " " << nickels << " " << pennies << endl;
    }
}
