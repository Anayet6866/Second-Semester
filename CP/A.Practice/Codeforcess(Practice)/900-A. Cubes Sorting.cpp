#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int f=0;
        int n;cin>>n;
        int a[n+10];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=1;i<n;i++)
        {
            if(a[i]>=a[i-1])
            {
                f=1;
            }
        }
        if(f==1) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}