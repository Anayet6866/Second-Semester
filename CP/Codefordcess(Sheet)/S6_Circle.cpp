#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int x1,y1,x2,y2,x3,y3,x4,y4,a,b,c,d,R1,R2,D;
    cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
    a=(x1+x2)/2.0;
    b=(y1+y2)/2.0;
    c=(x3+x4)/2.0;
    d=(y3+y4)/2.0;
    R1=sqrt((a-x2)*(a-x2)+(b-y1)*(b-y1));
    R2=sqrt((c-x4)*(c-x4)+(d-y4)*(d-y4));
    D=sqrt((a-c)*(a-c)+(b-d)*(b-d));
    if(R1+R2>=D)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
