#include <bits/stdc++.h>
#define UllI unsigned long long int
#define llI long long int
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define st string
#define pb push_back
#define pi 2 * acos(0)
#define LOL                            \
    ios_base ::sync_with_stdio(false); \
    cin.tie(0);                        \
    cout.tie(0)
using namespace std;
int main()
{
    LOL;
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int p;
        cin >> p;
        v.pb(p);
    }
    map<int, int> mp;
    for (auto x : v)
    {
        mp[x]++;
    }
    for (auto x : mp)
        cout << x.first << " " << x.second << endl;
    int c = 0, d = 0;
    for (auto x : mp)
    {
        if (x.first <= x.second)
        {
            c += x.second - x.first;
        }
        else
        {
            c += x.second;
        }
    }
    cout << c << endl;
    return 0;
}