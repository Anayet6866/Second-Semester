#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,a[110],b[110],c=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i]==b[j])
            {
                c++;
            }
        }
    }
    cout<<c<<endl;
    return 0;
}