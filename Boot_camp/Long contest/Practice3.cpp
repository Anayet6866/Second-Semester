#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,t,k;
    string s;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n>>s;
        int p=n;
        for(k=0,j=n-1;k<n/2;k++,j--)
        {
            if(s[k]=='1' && s[j]=='0')
            {
                p-=2;
            }
            else if(s[k]=='0' && s[j]=='1')
            {
                p-=2;
            }
            else
            {
                break;
            }
        }
        cout<<p<<endl;

    }
    return 0;
}
