#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,p=0,q=0;
    string s;
    cin>>s;
    for(i=0; i<s.size(); i++)
    {
        if(s[i]>='A' && s[i]<= 'Z')
        {
            p++;
        }
        else
        {
            q++;
        }
    }
    cout<<p<<" "<<q<<endl;
    if(p>q)
    {
        for(j=0; j<s.size(); j++)
        {
            if(s[j]>='a' && s[j]<='z')
            {
                s[j]=s[j]-32;
            }
        }
    }
    else if(q>p)
    {
        for(j=0; j<s.size(); j++)
        {
            if(s[j]>='A' && s[j]<='Z')
            {
                s[j]=s[j]+32;
            }
        }
    }
    else if(p==q)
    {
        for(j=0; j<s.size(); j++)
        {
            if(s[j]>='A' && s[j]<='Z')
            {
                s[j]=s[j]+32;
            }
        }
    }
    cout<<s;

    return 0;
}
