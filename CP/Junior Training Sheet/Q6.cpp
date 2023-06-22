#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,z,p=0,i,n;
    cin>>n;
    for(i=1;i<=n;i++)
    {
         cin>>x>>y>>z;
         if(x+y+z>=2)
         {
             p++;
         }
    }
    cout<<p;
    return 0;
}
