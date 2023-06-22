#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    string a,s;
    int i,c,d,x=0;
    cin>>a;
    cin>>s;
    for(i=0; i<a.length(); i++)
    {
        if(a[i]>='A' && a[i]<= 'z')
        {
            c=a[i];
            a[i]=tolower(c);
        }
    }
    for(i=0; i<a.length(); i++)
    {
        if(s[i]>='A' && s[i]<= 'z')
        {
            d=s[i];
            s[i]=tolower(d);
        }
    }
    x=a.compare(s);
    if(x==0)
    {
        cout<<"0";
    }
    else if(x==1)
    {
        cout<<"1";
    }
    else if(x==-1)
    {
        cout<<"-1";
    }
    return 0;

}
