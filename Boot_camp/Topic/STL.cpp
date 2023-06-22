#include <bits/stdc++.h>
#define UllI unsigned long long int
#define llI long long int
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define st string
#define pb push_back
#define pi 2*acos(0)
using namespace std;
int main()
{
    vector<pair<int,int>>s;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
       int x,y;cin>>x>>y;
       s.pb({x,y});
    }
    //sort(s.begin(),s.end());
    for(int i=0;i<n;i++)
    {
        cout<<s[i].first<<" "<<s[i].second<<endl;
    }
    //sort(s.rbegin(),s.rend());
    for(int i=0;i<n;i++)
    {
        cout<<s[i].first<<" "<<s[i].second<<endl;
    }

    
    return 0;
}