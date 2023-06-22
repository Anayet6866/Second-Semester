#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b,c,d;
        long long int p=0,q=0,x=0,y=0;
        cin>>n>>a>>b>>c>>d;
        x=a-b;
        y=a+b;
        p=c-d;
        q=c+d;
       if(n*y<p || n*x>q)
       cout<<"NO"<<endl;
       else
       cout<<"YES"<<endl;
    }
    return 0;
}