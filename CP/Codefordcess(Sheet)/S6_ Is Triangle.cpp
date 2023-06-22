#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    double s=1,area=0;
    cin>>a>>b>>c;

    if(a+b>c && a+c>b && b+c>a)//7 10 5
    {
        cout<<"Valid"<<endl;
        s=(a+b+c)/2;
        area=sqrt(s*(s-a)*(s-b)*(s-c));
        cout<<setprecision(8)<<area<<endl;
    }
    else
    {
        cout<<"Invalid"<<endl;
    }
    return 0;
}
