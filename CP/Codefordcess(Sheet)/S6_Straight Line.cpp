#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int x1,x2,x3,y1,y2,y3,a,b,c,d;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    a=(x2-x1);
    b=(y2-y1);
    c=(x3-x2);
    d=(y3-y2);
    if(b*c==a*d)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;

    }
    return 0;
}
