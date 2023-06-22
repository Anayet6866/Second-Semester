// Map is a container which has tow value.One is key and another is 
// value. Key must be unique. If you use two or more same key then the
//  value of previous same key is updated.
//Time complexcity log(N);
//Map has three type.
// 1.Ordered Map TC->O(log(N));
// 2.Undered Map TC->O(N);
// 3.Multi_map TC-> O(log(N));
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
    
    map<int ,int>mp;
    // mp.insert({1,2});
    // mp.insert({2,1});
    int n;cin>>n;
    for(int i=0;i<n;i++)
    {
        int x,y;cin>>x>>y;
        mp.insert({x,y});
    }
    map<int ,int> :: iterator itr;
    ///print map;
    for(itr = mp.begin();itr!=mp.end();itr++)
    {
        cout<<itr->first<<" "<<itr->second<<endl;
    }
    //print map;
    for(auto x : mp)
    {
        cout<<(x.first)<<" "<<(x.second)<<endl;
    }
    return 0;
}