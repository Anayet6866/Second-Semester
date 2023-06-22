#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,k,r,x=0;
    cin>>k>>r;
    for(i=1;1;i++)
    {
        if((k*i%10)==r || (k*i%10)==0)
        {
            x=i;
            break;
        }
    }
    cout<<x;
    return 0;
}
