#include<iostream>
using namespace std;
int main()
{
    int i,x,y,z,n,sum=0,c=0;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>x>>y>>z;
        sum=x+y+z;
        if(sum>1)
        {
            c++;
        }
    }
    cout<<c;
    return 0;
}
