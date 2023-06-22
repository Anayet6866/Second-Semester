#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n;
    cin>>n;
    char s[n];
    for(i=0;i<n;i++)
    {
        cin>>s[i];
    }
    for(i=0; i<n; i++)
    {
        if(s[i]=='c' || s[i]=='o' || s[i]=='d' || s[i]=='f'|| s[i]=='r' || s[i]=='e' || s[i]=='s')
            {
                 cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }

    }

    return 0;
}
