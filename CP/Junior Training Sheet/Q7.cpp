#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,a[110],x;
    cin>>n;
    for(i=1;i<=n;i++)
    {
             cin>>a[i];
    }
    for(i=1;i<=n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            if(a[i]>a[j])
            {
                x=a[i];
                a[i]=a[j];
                a[j]=x;
            }
        }
        cout<<a[i]<<" ";
    }
}
