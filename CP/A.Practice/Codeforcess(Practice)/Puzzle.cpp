#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, p = 0;
    cin >> n >> m;
    int a[m];
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    sort(a, a + m);

    int x = a[m - 1] - a[0];
    // cout<<x<<endl;
    for (int j = n; j <= m; j++)
    {
        int ans = abs(a[j - 1] - a[j - n]);
        x = min(x,ans);
    }
    cout << x << endl;
    return 0;
}