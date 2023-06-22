#include<iostream>
using namespace std;
int main()
{
    int x,y,i=1,l,m,p=0;
    cin>>x;
    cin>>y;
    while(1)
    {
        l=3*x;
        m=2*y;
        if(l>m)
        {
            p++;
            break;
        }
        i++;
    }

    cout<<p;
    return 0;
}

