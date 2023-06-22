#include <bits/stdc++.h>
using namespace std;

int n, a[2005];
bool cmp(int a, int b)
{
    return a > b;
}

int main()
{
    cin >> n;
    for (int i = 0; i < 2 * n; i++)
        cin >> a[i];
    sort(a, a + 2 * n, cmp);
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < n; i++)
        sum1 += a[i];
    for (int i = n; i < 2 * n; i++)
        sum2 += a[i];
    if (sum1 == sum2)
    {
        cout << -1 << endl;
        return 0;
    }
    for (int i = 0; i < 2 * n; i++)
        cout << a[i] << ' ';
    cout << endl;
    return 0;
}
