#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,a[1010],c=0;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int j=0;j<n;j++)
    {
         if(a[j]>= a[k-1] && a[j]>0)
        {
            c++;
        }
    }
    cout<<c<<endl;
    return 0;
}