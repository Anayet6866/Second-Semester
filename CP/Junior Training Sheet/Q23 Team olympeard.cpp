
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,k,n,c=0,a[1000],m=0,p=0,pe=0,mi=0,arr[10],arr1[10],arr2[10],A=0,B=1,C=0;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]==1)
        {
            p++;
        }
        if(a[i]==2)
        {
            m++;
        }
        if(a[i]==3)
        {
            pe++;
        }
    }
    //cout<<p<<endl<<m<<endl<<pe<<endl;
    if(p>=1 && m>=1 && pe>=1)
    {

        if(p<=m && p<=pe)
        {
           // cout<<"YES"<<endl;
            mi=p;
        }
        else if(m<=p && m<=pe)
        {
            mi=m;
        }
        else if(pe<=p && pe<=m)
        {
            mi=pe;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            arr[A]==i;
            A++;
        }
        else if(a[i]==2)
        {
            arr1[B]=i;
            B++;
        }
        else if(a[i]==3)
        {
            arr2[C]=i;
            C++;
        }
    }
    cout<<mi<<endl;
    for(int k=0;k<mi;k++)
    {
        cout<<arr[k]<<" "<<arr1[k]<<" "<<arr2[k]<<endl;
    }
    return 0;
}
