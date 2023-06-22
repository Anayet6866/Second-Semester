#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n+5],s[n+5];
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    for(int j=1; j<=n; j++)
    {
        s[a[j]]=j;
    }
    for(int j=1; j<=n; j++)
    {
        cout<<s[j]<<" ";
    }
    return 0;


}
