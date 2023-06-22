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
    int n,t;
    cin>>n>>t;
    if(n==1 && t==10)
    {
        cout<<"-1"<<endl;
    }
    else if(n>=2 && t==10)
    {
        for(int i=1;i<n;i++)
        {
            cout<<"1";
        }
        cout<<"0"<<endl;
    }
    else if(n>=1)
    {
        for(int i=1;i<=n;i++)
        {
            cout<<t;
        }
    }
    return 0;
}