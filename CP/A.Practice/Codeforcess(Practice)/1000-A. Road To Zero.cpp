#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
       // cout<<"YES"<<endl;
        long long ans = 0, x, y, p=0, q=0, a, b;
        cin >> x >> y ;
        cin>>a>>b;
        p=min(x,y)*b+abs(x-y)*a;
        q=(x+y)*a;
        ans=min(p,q);
        cout << ans << endl;
    }

    return 0;
}