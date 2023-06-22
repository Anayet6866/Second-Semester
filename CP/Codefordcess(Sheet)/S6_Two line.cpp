#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int x1,x2,x3,x4,y1,y2,y3,y4,a,b,c,d;
    cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
    a=(x2-x1);
    b=(x4-x3);
    c=(y2-y1);
    d=(y4-y3);
    if(a*d==b*c)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
