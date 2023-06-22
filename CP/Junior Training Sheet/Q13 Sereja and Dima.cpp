#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,n,a[1010],d=0,s=0,temp=0;
    cin>>n;
    for(k=1; k<=n; k++)
    {
        cin>>a[k];
    }
    for(i=1; i<=n; i++)
    {
        for(j=i+1; j<=n; j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
        cout<<a[i]<<" ";
    }
    cout<<endl;

    if(n%2==0)
    {
        for(i=1; i<=n; i++)
        {
            if(i%2==0)
            {
                s+=a[i];
            }
            else
            {
                d+=a[i];
            }
        }
    }
    else
    {
        for(i=1; i<=n; i++)
        {
            if(i%2!=0)
            {
                s+=a[i];
            }
            else
            {
                d+=a[i];
            }
        }


    }

    cout<<s<<" "<<d;
    return 0;
}
