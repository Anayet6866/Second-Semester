#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[110],total=0,sum=0,rol=0,temp=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        total=total+a[i];
    }
    // sort(a,a+n);
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j<=n;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
        //cout<<a[i];
    } 
    //cout<<endl;
    int p=0;
    for(int k=1;k<=n;k++)
    {
        sum=sum+a[k];
        // rol=total-a[k];
        if(sum>total/2)
        {
            p=k;
            break;
        }  
    }
    cout<<p<<endl;
    return 0;
}