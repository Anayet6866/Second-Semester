#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,c;
    string s,a= {"314159265358979323846264338327"};
    cin>>n;
    for(j=0; j<n; j++)
    {
        c=0;
        cin>>s;
        for(i=0; i<s.size(); i++)
        {
            if(s[i]==a[i])
            {
                c++;
            }
            else break;
        }
        cout<<c<<endl;
    }
    return 0;
}
