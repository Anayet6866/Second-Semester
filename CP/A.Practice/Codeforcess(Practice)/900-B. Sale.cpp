#include <bits/stdc++.h>
#define UllI unsigned long long int
#define llI long long int
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define st string
#define pb push_back
#define pi 2 * acos(0)
using namespace std;
void solve()
{
    int n, m, sum = 0, f = 0, c = 0;
    cin >> n >> m;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.pb(x);
    }
    sort(v.begin(), v.end());
    // for(auto x:v)
    // {
    //     cout<<x<<" ";
    // }
    for (int i = 0; i < n; i++)
    {
        if (v[i] <= 0)
        {
            c = 1;
            sum += v[i];
            // cout<<sum<<endl;
             if (i == m-1)
             {
                f=1;
                 goto lavel;
             }
        }

        else
        {
            f = 1;
        }
        // else
        // {
        //     // sum += v[i];
        //     // if (i == 2)
        //     // {
        //     //     goto lavel;
        //     // }
        //     cout<<"0"<<endl;
        //     return ;
        // }
    }

lavel:
    if (f == 1 && c == 1)
        cout << abs(sum) << endl;
    else if (c == 1 && f == 0)
    {
        cout << abs(sum) << endl;
    }
    else
        cout << "0" << endl;
    return;
}
int main()
{
    solve();

    return 0;
}