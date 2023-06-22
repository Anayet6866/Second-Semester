#include<iostream>
using namespace std;
int main()
{
    int i,j,x,n,m,a[100];
    cout<<"Enter the number:"<<endl;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        m=a[0];
    }
    for(i=0;i<n;i++)
    {
        if(m<a[i+1])
        {
            m=a[i+1];
        }
        else
        {
            m=m;
        }
    }
    cout<<m;
    return 0;
}
