#include<iostream>
using namespace std;
void Prime()
{
    int x,i,j,f,n;
    cin>>n;
    for(j=0; j<n; j++)
    {
        cin>>x;
        if(x==1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            f=0;
            for(i=2; i<x; i++)
            {
                if(x%i==0)
                {
                    f=1;
                }
            }
            if(f==0)
            {
                cout<<"YES"<<endl;
            }
            else if(f==1)
            {
                cout<<"NO"<<endl;
            }
        }
    }
}
int main()
{
    int x;
    Prime();
    return 0;
}
