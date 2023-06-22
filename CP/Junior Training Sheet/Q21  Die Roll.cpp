#include<bits/stdc++.h>
using namespace std;
int main()
{
    int w,y,m,p=0,a=0;
    cin>>w>>y;
    if(w>y)
    {
        m=w;
    }
    else
    {
        m=y;
    }
    a=6-m;
    p=a+1;
    if(p==0)
    {
        cout<<"0/1";
    }
    else if(p==1)
    {
       cout<<"1/6";
    }
    else if(p==2)
    {
        cout<<"1/3";
    }
    else if(p==3)
    {
        cout<<"1/2";
    }
    else if(p==4)
    {
        cout<<"2/3";
    }
    else if(p==5)
    {
        cout<<"5/6";
    }

    else if(p==6)
    {
        cout<<"1/1";
    }
    return 0;
}
