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
    int t;
    cin >> t;
    while (t--)
    {
        // int n;cin>>n;
        string s;
        // char c;
        // cin>>c;
        getline(cin >> ws, s);
        // s=c+s;
        // string iput to vector;
        vector<string> v;
        string temp;
        for (auto x : s)
        {
            if (isspace(x))
            {
                v.pb(temp);
                temp.clear();
            }
            else
            {
                temp = temp + x;
            }
        }
        v.pb(temp);
        // string output;
        for (auto x : v)
            cout << x << " " << endl;
        // Frequency of string;
        map<string, int> mp;
        int mxF = 0, mnF = 0;
        for (auto x : v)
        {
            mp[x]++;
            mxF = max(mxF, mp[x]);
            mnF = min(mnF, mp[x]);
        }
        string ans;
        for (auto x : mp)
            cout << x.first << " " << x.second << endl; // Final answer;
        for (auto x : v)
        {
            if (mxF == mp[x])
            {
                cout << x << " " << mxF << endl;
                // ans=x;
                break;
            }
            // if (mnF == mp[x])
            // {
            //     cout << x << endl;
            //     break;
            // }
        }
        // cout<<ans<<endl;
    }
    return 0;
}