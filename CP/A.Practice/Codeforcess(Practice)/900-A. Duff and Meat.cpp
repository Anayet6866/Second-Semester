#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    int a[n + 10], p[n + 10];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> p[i];
    }
    int sum = a[0] * p[0];
    int mn = p[0];
    for (int i = 1; i < n; i++)
    {
        if (p[i] > mn)
        {
            sum = sum + (a[i] * mn);
        }
        else
        {
            mn = min(mn, p[i]);
            sum = sum + (a[i] * mn);
        }
    }

    cout << sum << endl;
    return 0;
}