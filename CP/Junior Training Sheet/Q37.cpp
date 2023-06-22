#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,t,k;
    cin>>n>>k;
    t=ceil(n/2.0);
    if(k<=t)
    {
        cout<<2*k-1<<endl;
    }
    else 
    {
        k=k-t;
        cout<<2*k<<endl;
    }
    return 0;
}