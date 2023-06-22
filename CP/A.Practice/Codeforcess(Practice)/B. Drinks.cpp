#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[110],sum=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum=sum+a[i];
    }
    double x=((double)sum/n);
    cout<<setprecision(12)<<x<<endl;
    return 0;
}