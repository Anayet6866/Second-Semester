
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,p,q,l,a[1000],x,j,c;
    cin>>x;
    for(j=0; j<x; j++)
    {

        cin>>n;
        for(i=0; i<n; i++)
        {
            c=0;
            p=0;
            q=0;
            cin>>a[i];
        }
        for(i=0; i<n; i++)
        {
            if(a[i]==1)
            {
                c++;
            }
        }
        //cout<<c<<endl;
        if(c==1)
        {
            p=1;
        }
        else if(c%2==0)
        {
            p=c/2;
        }
        else if(c%2!=0)
        {
            p=(c-1)/2+1;
        }
        //cout<<p<<endl;
        q=n-c;
        //cout<<q<<endl;
        cout<<p+q<<endl;
    }
    return 0;
}
