#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,a[101],x=0;
    string s;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>s;
        x=s.size();
        if(x=<10)
        {
            cout<<s<<endl;
        }
        else if(x>10)
        {
            cout<<s[0]<<x-2<<s[x-1]<<endl;
        }
    }
    return 0;

}
