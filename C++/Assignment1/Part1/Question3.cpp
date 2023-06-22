#include<iostream>
using namespace std;
int main()
{
    int i,j,n,x,f;
    cout<<"Enter the Number:";
    cin>>x;
    for(j=2; j<=x; j++)
    {
        f=0;
        for(i=2; i<j; i++)
        {
            if(j%i==0)
            {
                f=1;
            }
        }
        if(f==0)
        {
            cout<<j;
            cout<<" ";
        }
    }
    return 0;
}
