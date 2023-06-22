#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i,j,x[n],p=0;
    char c;

    for(i=0; i<n; i++)
    {
        cin>>x[i];

    }
    c=x[0];
    for(j=0; j<n; j++)
    {
        if(x[j]!=c)
            p++;
        c=x[j];
    }
    cout<<p+1;
    return 0;
}
