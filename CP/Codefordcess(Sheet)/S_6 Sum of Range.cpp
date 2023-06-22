#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int x,y,sum=0,sum1=0,z,r,even=0,even1=0,odd=0;
    cin>>x>>y;
    if(y>x)
    {
        sum=(y*(y+1))/2;
        //cout<<sum<<endl;
        z=(x-1);
        sum1=(z*(z+1))/2;
        //cout<<sum1<<endl;

        even=(y/2*(y/2+1));
        r=(x-1)/2;
        even1=(r*(r+1));
        odd=(sum-sum1)-(even-even1);
        cout<<sum-sum1<<endl;
        cout<<even-even1<<endl;
        cout<<odd<<endl;
    }
    else if(x>y)
    {

        sum=(x*(x+1))/2;
        //cout<<sum<<endl;
        z=(y-1);
        sum1=(z*(z+1))/2;
        //cout<<sum1<<endl;

        even=(x/2*(x/2+1));
        r=(y-1)/2;
        even1=(r*(r+1));
        odd=(sum-sum1)-(even-even1);
        cout<<sum-sum1<<endl;
        cout<<even-even1<<endl;
        cout<<odd<<endl;
    }

    return 0;
}
