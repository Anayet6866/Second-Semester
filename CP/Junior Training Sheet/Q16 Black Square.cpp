#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,a[5],sum=0;
    string s;
    for(i=1;i<=4;i++)
    {
        cin>>a[i];
    }
    cin>>s;
    for(j=0;j<s.size();j++)
    {
        sum=sum+a[s[j]-48];
    }
    cout<<sum;
    return 0;
}
