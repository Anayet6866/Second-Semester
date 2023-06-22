#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,w,sum=0;
    cin>>k>>n>>w;
    for(int i=1;i<=w;i++)
    {
        sum=sum+i;
    }
    sum=sum*k;
    if(n>sum)
    cout<<"0"<<endl;
    else
    cout<<sum-n<<endl;
    return 0;
}