#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int k=1; k<=t; k++)
    {
        int n;
        cin>>n;
        int a[n+1];
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }

        int q=0,f=0;
        unsigned long int  sum=1;
        for(int i=1; i<=n; i++)
        {
            sum=sum*a[i];
            //cout<<"SUM="<<sum<<endl;
          unsigned long int sum1=1;
            for(int j=i+1; j<=n; j++)
            {
                sum1=sum1*a[j];
            }
            if(sum==sum1)
            {
                q=i;
                f=1;
                goto level;
            }
            //cout<<"SUM2="<<sum2<<endl;

        }
        level:
        if(f==0)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            cout<<q<<endl;
        }
    }
    return 0;
}
