#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,q,r,s,i,l,j,k,x[110],temp[110];
    cin>>n>>p>>q>>r>>s;
    for(l=1;l<=n;l++)
    {
        cin>>x[l];
    }
    for(i=p,j=r;i<=q,j<=s;i++)
    {
        temp[i]=x[i];
        x[i]=x[j];
        x[j]=temp[i];

    }
    for(i=1;i<=n;i++)
    {
        cout<<x[i]<<" ";
    }
    return 0;
}
