#include <bits/stdc++.h>
#define UllI unsigned long long int
#define llI long long int
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define st string
#define pb push_back
#define pi 2*acos(0)
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int>v;
    llI sum=0,c=0;
    for(int i=0;i<n;i++)
    {
        int x;cin>>x;
        v.pb(x);
    }
    for(int i=0;i<n;i++)
    {
        c=c+i;
        sum=sum+v[i];
        if(sum<c)
        {
            cout<<"NO"<<endl;
            return ;
        }
        
    }
    cout<<"YES"<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();

    }
    return 0;
}