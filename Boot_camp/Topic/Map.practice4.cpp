#include <bits/stdc++.h>
#define UllI unsigned long long int
#define llI long long int
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define st string
#define pb push_back
#define pi 2 * acos(0)
#define LOL                            \
    ios_base ::sync_with_stdio(false); \
    cin.tie(0);                        \
    cout.tie(0)
using namespace std;
int main()
{
    LOL;
    int n;cin>>n;
    map<string,bool>mp;
    while(n--)
    {
        string s;
        cin>>s;
        if(mp[s]==1)
        {
           YES;
        }
        else 
        {
          NO;
        }
        mp[s]=1;
    }
    // for(auto x: mp)
    // {
    //     cout<<x.first<<" "<<x.second<<endl;
    // }

    return 0;
}