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
    int t;cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        map < string ,int>mp;
        for(int i=0;i<n;i++)
        {
            string s;
            //s.ignore();
            cin>>s;
            mp[s]++;
        }
        for(auto x:mp) cout<<x.first<<" "<<x.second<<endl;
        for(auto x: mp)
        {
            if(x.second==2)
            {
                cout<<x.first<<endl;
            }
        }
    }
    return 0;
}