#include <bits/stdc++.h>
#define UllI unsigned long long int
#define llI long long int
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define st string
#define pb push_back
#define pi 2 * acos(0)
using namespace std;
int main()
{
    int n, s = 0, d = 0, f = 1;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.pb(x);
    }
    // for(auto x:v)cout<<x<<" ";
    // cout<<endl;
    while (!v.empty())
    {
        if (f == 1)
        {
            if (v[0] > v.back())
            {
                s += v[0];
                v.erase(v.begin());
            }
           // else if (v[0] < v.back())
           else
            {
                s += v.back();
                v.pop_back();
            }
            f = 2;
        }
        else 
        {
            if (v[0] > v.back())
            {
                d += v[0];
                v.erase(v.begin());
            }
            else
            {
                d += v.back();
                v.pop_back();
            }
            f = 1;
        }
    }
    cout << s << " " <<d<< endl;
    // if (s > d)
    // {
    //     cout << "Seraja" << endl;
    // }
    // else
    // {
    //     cout << "Dema"<< endl;
    // }
    return 0;
}