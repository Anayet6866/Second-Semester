#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,q;
    cin>>a>>b>>q;
    long long d = q%3;
    if(d==1)
    {
        cout<<a<<endl;
    }
    else if(d==2)
    {
        cout<<b<<endl;
    }
    else if(d==0)
    {
        cout<<(a^b)<<endl;
    }
    return 0;
}
