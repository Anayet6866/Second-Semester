#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int x=n*m;
    if(n>m)
    {
        x=m;
    }
    else
    {
        x=n;
    }
     //cout<<x<<endl;
     if(x%2==0)
    {
        cout<<"Malvika"<<endl;
    }
    else 
    {
        cout<<"Akshat"<<endl;
    }
    return 0;
}