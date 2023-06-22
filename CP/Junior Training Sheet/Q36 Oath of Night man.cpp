#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,c=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    // for(auto &x:a)
    // cin>>x;
    sort(a,a+n);
    // for(auto x:a)
    // {
    //     if(a[x]>a[i] && a[n-1]>a[x])
    //     {
    //         c++;
    //     }
    //  }
    for(int i=0;i<n;i++)
    {
        if(a[i]>a[0] && a[n-1]>a[i])
        {
            c++;
        }
    }
    // for(auto x: a)
    // cout<<x<<" ";
    cout<<c<<endl;
    return 0;
}