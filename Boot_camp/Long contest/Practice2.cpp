#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,t;
    string s;
    cin>>t;
    for(j=0; j<t; j++)
    {
        int x=0,y=0,f=0;
        cin>>n;
        cin>>s;
        for(i=0; i<n; i++)
        {
            if(s[i]=='U')
            {
                y++;
            }
            else if(s[i]=='D')
            {
                y--;
            }
            else if(s[i]=='R')
            {
                x++;
            }
            else if(s[i]=='L')
            {
                x--;
            }
            if(x==1 && y==1)
                f=1;


        }
        if(f==1)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}
