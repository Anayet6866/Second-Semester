#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,s,p,q,r,f,n,x,l;
    cin>>x;
    int a[x];
    for(l=0; l<x; l++)
    {
        s=0,p=0,q=0,r=0,f=0;
        cin>>n;
        for(i=1; i<=n; i++)
        {
            cin>>a[i];
        }
        for(i=1; i<=n; i++)
        {
            for(j=i+1; j<=n; j++)
            {
                for(k=j+1; k<=n; k++)
                {
                    s=a[i]+a[j]+a[k];
                    if(s%2!=0)
                    {
                        p=i;
                        q=j;
                        r=k;
                        f=1;

                    }
                }
            }
        }
        if(f==1)
        {
            cout<<"YES"<<endl;
            cout<<p<<" "<<q<<" "<<r<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
        return 0;
    }

