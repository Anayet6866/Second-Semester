
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, p = 0, f = 0;
    int a[50] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
    cin >> n >> m;
    for (int i = 0; i < 15; i++)
    {
        if (n == a[i])
        {
            p = i;
        }
    }
    if (a[p+1]==m)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}