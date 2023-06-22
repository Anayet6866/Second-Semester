#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,p=0,u=0,x;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>x;
        if(x>0)
        {
            p+=x;
        }
        else
        {
            if(p<1)
            {
                u++;
            }
            else
            {
                p--;
            }
        }
    }
    cout<<u;
    return 0;
}
