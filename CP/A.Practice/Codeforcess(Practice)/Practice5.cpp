#include<bits/stdc++.h>
#define UllI unsigned long long int
#define llI long long int
#define YES cout<<"YES"<<endl
#define NO cout <<"NO"<<endl
#define st string
using namespace std;
int main()
{
    int n,a[100],x,sum=0;
    cin>>n>>x;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int mask=1;mask<(1<<n);mask++)
    {
        int prod=1,cnt=0;
        for(int i=0;i<n;i++)
        {
            if(mask & (1<<i))
            {
                cnt++;
                prod*=a[i];
            }
        }
        //  cout<<cnt<<endl;
        if(cnt%2==0)
        {
            sum-=x/prod;
        }
        else
        sum+=x/prod;
    }
    cout<<sum<<endl;
    return 0;
}