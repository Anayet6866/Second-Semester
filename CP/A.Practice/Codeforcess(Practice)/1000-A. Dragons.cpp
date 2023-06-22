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
    int n, s;
    cin >> s >> n;
    bool f = true;
    pair<int, int> p[n + 10];
    for (int i = 0; i < n; i++)
    {
        cin >> p[i].first >> p[i].second;
         
    }
    sort(p, p + n);
    for (int i = 0; i < n; i++)
    {
        cout<<p[i].first<<" "<<p[i].second<<endl;
        if (s > p[i].first)
        {
            s = s + p[i].second;
            f = true;
        }
        else
        {
            f = false;
        }
    }
    if (f)
        YES;
    else
        NO;

    return 0;
}