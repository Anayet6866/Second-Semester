#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin>>n>>x;
    vector<int>a;
    for(int i=0;i<n;i++)
    {
        int t;
        cin>>t;
        a.push_back(t);
    }
//    int a[n+1];
//    for(int i=0; i<n; i++)
//    {
//        cin>>a[i];
//    }
    int p=0,r=n-1,l=0,m=0,f=0;
    for(int i=0; i<=r; i++)
    {
        m=(l+r)/2;
        if(a[m]==x)
        {
            f=1;

            break;
        }
        else if(a[m]<x)
        {
            l=m+1;
        }
        else if(a[m]>x)
        {
            r=m-1;
        }
    }
    if(f==0)
    {
        cout<<"Not Found!"<<endl;
    }
    else
    {
        cout<<"Found"<<endl<<m<<endl;
    }
    return 0;
}
