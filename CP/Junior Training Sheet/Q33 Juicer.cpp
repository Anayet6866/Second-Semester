#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,b,d,c=0;
    long long sum=0;
    cin>>n>>b>>d;
    int a[n+10];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]<=b)
        {
            sum=sum+a[i];
            if(sum>d)
            {
                c++;
                sum=0;
            }
        }
    }
    cout<<c<<endl;
    return 0;
}