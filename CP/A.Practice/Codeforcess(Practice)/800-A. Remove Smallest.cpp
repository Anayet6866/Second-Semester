#include <bits/stdc++.h>
#define UllI unsigned long long int
#define llI long long int
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define st string
#define pb push_back
#define pi 2 * acos(0)
#define eps 1e-12
#define LOL                            \
    ios_base ::sync_with_stdio(false); \
    cin.tie(0);                        \
    cout.tie(0)
using namespace std;
int main()
{
    LOL;
    int t;
    cin >> t;
    while (t--)
    {
        int n, c = 0;
        cin >> n;
        int a[n + 10];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a,a+n);
        for (int j = 0; j < n - 1; j++)
        {
            // cout<<j<<" "<<j+1<<endl;

            // cout<<s<<endl;
            if (abs(a[j] - a[j + 1]) <= 1 || abs(a[j] - a[j + 1]) == 0)
            {
                a[j] = 0;
            }
        }
        for (int k = 0; k < n; k++)
        {
            if (a[k] != 0)
            {
                c++;
            }
           // cout << a[k] << " ";
        }
        if (c == 1)
            YES;
        else
            NO;
    }
    return 0;
}