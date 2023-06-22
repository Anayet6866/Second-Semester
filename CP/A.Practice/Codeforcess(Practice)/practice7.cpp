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
    int n,k;
    cin >> n>>k;
    vector<int> v;
    cout << n << endl;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.pb(x);
    }
    int l=-1,r=n;
    bool f=0;
    while (l+1<=r)
    {
        int m=(l+r)/2;
        if(r==v[m])
        {
            f=1;
            break;
        }
        if(k<v[m])
        {
            l=m;
        }
        else
        {
            r=m;
        }
    }
    if(f)
    {
        cout<<r<<endl;
    }
    else
    {
        cout<<r<<endl;
    }
    return 0;
}