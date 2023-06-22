#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,x,c=0;
    cin>>n;
    char a[n];
    cin>>a;
    for(i=0;i<n;i++)
    {
        if(a[i]==a[i+1])
        {
            c++;
        }
    }
    cout<<c;
    return 0;
}
