#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int x1,x2,y1,y2;
    double d=0;
    cin>>x1>>y1>>x2>>y2;
    d=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    cout<<setprecision(11)<<d<<endl;
    return 0;
}
