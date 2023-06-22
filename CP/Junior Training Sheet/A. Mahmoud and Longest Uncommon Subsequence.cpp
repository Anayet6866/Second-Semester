#include <bits/stdc++.h>
#define UllI unsigned long long int
#define llI long long int
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define st string
#define pb push_back
#define pi 2*acos(0)
#define LOL ios_base :: sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
int main()
{
    LOL;
    int c,d;
    string s,a;
    cin>>s>>a;
    c=s.size();
    d=a.size();
    if(c==d && s==a)
    {
        cout<<"-1"<<endl;
    }
    else if(c==d && s!=a)
    {
        cout<<max(c,d)<<endl;
    }
    else
    {
        cout<<max(c,d)<<endl;
    }
    // int f=max(c,d);
    // cout<<f<<endl;
    
    return 0;
}