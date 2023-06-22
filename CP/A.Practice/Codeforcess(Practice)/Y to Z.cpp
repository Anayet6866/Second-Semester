#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p,i,x,y,sum=0;
    cin>>x>>y;
    for(int i;1;i++)
    {
        level:
        int m= x*pow(10,i);
        cout<<m<<endl;
        if(m>y)
        {
            i=i-1;
            goto level;
        }
        else 
        {
            sum=sum+m;
            if(sum==y)
            {
                //cout<<sum<<endl;
                int p=i;
              break;
            }
        }
    }
    cout<<p<<endl;
    return 0;
}