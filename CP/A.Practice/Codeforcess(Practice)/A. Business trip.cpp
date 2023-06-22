#include <bits/stdc++.h>
#define I int
#define llI long long int
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define st string
using namespace std;
int main()
{
    I k, a[110], sum = 0, c = 1, f = 0;
    cin >> k;
    if (k == 0)
    {
        cout << "0" << endl;
    }
    else
    {
        for (I i = 0; i < 12; i++)
        {
            cin >> a[i];
        }
        sort(a, a + 12);
        // for (I i = 0; i < 12; i++)
        // {
        //     cout << a[i] << " ";
        // }
        for (I j = 11; j >= 0; j--)
        {
            sum += a[j];
            if (sum >= k)
            {
                f = 1;
                break;
            }
            else
            {
                c++;
            }
        }
        if (f == 1)
        {
            cout << c << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }

    return 0;
}