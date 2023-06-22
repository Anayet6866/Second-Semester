#include <bits/stdc++.h>
#define UllI unsigned long long int
#define llI long long int
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define st string
#define pb push_back
#define pi 2*acos(0)
#define end cout<<endl
using namespace std;
int main()
{
    int n,c=0;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int x;cin>>x;
        v.pb(x);
    }
    for(int i=0;i<v.size();i++)
    {
        //cout<<v[i]<<" ";
        if(v[i]==1)
        {
            c=1;
        }
    }
    if(c==1)
    {
        cout<<"HARD"<<endl;
    }
    else
    {
        cout<<"EASY"<<endl;
    }
    
    return 0;
}