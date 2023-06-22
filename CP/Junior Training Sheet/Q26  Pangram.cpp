#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int n;
    cin>>n;
    cin >> s;
   for(int k=0;k<s.size();k++)
   {
    if(s[k]>='A' && s[k]<='Z')
    {
        s[k]+=32;
        
    }
   }
    //cout<<s<<endl;
    sort(s.begin(),s.end());
    //cout<<s<<endl;
    int x;
    x=unique(s.begin(),s.end())-s.begin();
    //cout<<x<<endl;
    if(x==26)
    cout<<"YES"<<endl;
    else 
    cout<<"NO"<<endl;
    return 0;
}