#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i,j,x,n;
    double fc;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>x;
        fc=1;
        if(x==0)
        {
            cout<<"1"<<endl;
        }
        else
        {
            for(j=1; j<=x; j++)
            {
                fc=fc*j;
            }
            cout<<fc<<endl;
        }
    }
    return 0;
}
