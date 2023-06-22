#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[10010],n,i,y,j,p;
    long long int sum;
    double x;
    cin>>n;
    for(j=0; j<n; j++)
    {
        sum=1;
        cin>>p;
        for(i=0; i<p; i++)
        {
            cin>>a[i];
            sum*=a[i];
        }
        x=sqrt(sum);
        y=sqrt(sum);
        //cout<<x<<" "<<y<<"  "<<sum<<endl;
        if(y==x)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}
