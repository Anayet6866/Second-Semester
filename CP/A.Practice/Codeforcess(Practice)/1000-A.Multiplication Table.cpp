#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt=0;cin>>n;
    int x;cin>>x;
    for(int i=1;i<=n;i++)
    {
        if(x%i==0 && x/i<=n)
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}