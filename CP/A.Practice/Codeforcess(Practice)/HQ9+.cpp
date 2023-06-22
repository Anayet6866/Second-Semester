#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,s={"HQ9"};
    int f=0;
    cin>>a;
    for(int i=0;i<a.size();i++)
    {
        for(int j=0;j<s.size();j++)
        {
            if(a[i]==s[j])
            {
                f=1;
            }
        }
    }
    if(f==1)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    return 0;
}