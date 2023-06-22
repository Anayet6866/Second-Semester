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
    ///vector<int>v={2,1,2,1,3,4};
    vector<int>v;
    int n;cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.pb(x);
    }
    for(auto x:v) cout<<x<<" ";
    cout<<endl;
    map<int ,int>mp;
    for(auto x:v)
    {
        mp[x]++;
    }
    for(auto x:mp) cout<<x.first<<" "<<x.second<<endl;
   // cout<<mp[3];
    return 0;
}