#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,i,l,m,p=0;
    cin>>x>>y;
    for(i=1;x<=y;i++)
    {
        x=3*x;
        y=2*y;
        p++;
    }
    cout<<p;
    return 0;

}
