#include <bits/stdc++.h>
using namespace std;
int main()
{
    int y, a, b, c, d;
    cin >> y;
    for (int i = 0; 1; i++)
    {
        y = y + 1;
            a = (y % 1000) % 10;
            b = ((y / 10) % 10);
            c = ((y / 100) % 10);
            d = ((y / 1000));
        if (a != b && b != c && c != d && d != a && c != a && d != b)
        {
            cout << y << endl;
            break;
        }
        
    }

    // cout << a << endl
    //      << b << endl
    //      << c << endl
    //      << d;
    return 0;
}