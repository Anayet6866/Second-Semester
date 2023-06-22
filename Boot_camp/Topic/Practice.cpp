#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    cin>>n>>q;
    int a[n+1];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    while(q--)
    {
        int x;cin>>x;
        int l=0,r=n-1;
        bool f=0;
        while(l<=r)
        {
            int m=(l+r)/2;
            if(a[m]==x)
            {
                f=1;
                break;
            }
            else if(x<a[m])
            {
                r=m-1;
            }
            else if(x>a[m])
            {
                l=m+1;
            }
        }
        if(f==1)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}