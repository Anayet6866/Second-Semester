#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[100010];
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<=n;i++)
    {
        int mx=0,mn=0,mx1=0,mx2=0,mn1=0,mn2=0;
        if(i==1)
        {
            mx=abs(a[i]-a[n]);
            mn=abs(a[i]-a[i+1]);
            cout<<mn<<" "<<mx<<endl;
        }
        else if(i==n)
        {
            mx=abs(a[1]-a[n]);
            mn=abs(a[n]-a[n-1]);
            cout<<mn<<" "<<mx<<endl;
        }
        else{
            mx1=abs(a[i]-a[n]);
            mx2=abs(a[i]-a[1]);

            mn1=abs(a[i]-a[i+1]);
            mn2=abs(a[i]-a[i-1]);
            cout<<min(mn1,mn2)<<" "<<max(mx1,mx2)<<endl;
        }
    }
    return 0;
}