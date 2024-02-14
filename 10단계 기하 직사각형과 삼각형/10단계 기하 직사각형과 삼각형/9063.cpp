#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int x, y, max_x, max_y, min_x, min_y;
    
    cin >> x >> y;
    max_x = x;
    min_x = x;
    max_y = y;
    min_y = y;
    for (int i = 1; i < N; i++)
    {
        cin >> x >> y;

        if (max_x < x)
        {
            max_x = x;
        }
        if (max_y < y)
        {
            max_y = y;
        }
        if (min_x > x)
        {
            min_x = x;
        }
        if (min_y > y)
        {
            min_y = y;
        }
    }

    int width = max_x - min_x;
    int height = max_y - min_y;
    int area = width * height;

    cout << area << endl;

    return 0;
}