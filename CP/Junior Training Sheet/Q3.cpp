#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,i,l,m,p=0;
    cin>>x>>y;
    for(i=0;1;i++)
    {
        l=3*x;
        m=2*y;
        if(l>m)
        {
            p=i;
            break;
        }
    }
    cout<<p;
    return 0;
}
