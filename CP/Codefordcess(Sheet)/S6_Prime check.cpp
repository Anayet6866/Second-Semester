#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,n,f=0;
    cin>>n;
    if(n==2)
    {
        cout<<"YES"<<endl;
    }
    else if(n==1)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        for(i=2; i*i<=n; i++)
        {
            if(n%i==0)
            {
                f=1;
            }
        }
        if(f==1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }

    return 0;
}

